﻿#!/bin/python

# FUSION
# Copyright (c) 2012-2013 Alex Kosterin

import sys, os, re, getopt, ConfigParser, stat

re.UNICODE = False
re_enum = re.compile(r"^\s*enum\s+([a-zA-Z_][a-zA-Z0-9_]*)(?:.*:.*)?\s*\{")
re_val  = re.compile(r"^\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*(?:=\s*(\S+))?,")
re_end  = re.compile(r"^\s*}\s*;")

PREAMBULA = """/*
 *  FUSION
 *  Copyright (c) 2012-2013 Alex Kosterin
 */

//
// Do not edit! This file was automatically generated by %s
//
"""

def gen_hdr(fd, enums): ########################################################
	HRD_TEMPLATE = PREAMBULA + """
#ifndef ENUMSTR_H
#define ENUMSTR_H

#include "include/nf.h"
#include "include/nf_internal.h"
#include "include/md.h"

namespace nf {
%s
}

#endif //ENUMSTR_H
"""

	print >> fd, HRD_TEMPLATE % (os.path.basename(sys.argv[0]), "\n" . join(["  const char* enumstr(%s);" % t for t in enums.keys() if enums[t]]))

def gen_func(type, enum):  #####################################################
	return """
  const char* enumstr(%s v) {
    switch (v) {
%s
    }

    ::_snprintf(buff, sizeof buff, "%%d", v);

    return buff;
  }""" % (type, "\n" . join([("    case %s:\treturn \"%s\";" % (e, enum[e])) for e in enum.keys()]))

def gen_src(fd, enums): ########################################################
	SRC_TEMPLATE = PREAMBULA + """
#include "include/enumstr.h"
#include <stdio.h>

namespace nf {
  __declspec(thread) char buff[33];
%s
}
"""
	print >> fd, SRC_TEMPLATE % (os.path.basename(sys.argv[0]), "\n" . join([gen_func(t, enums[t]) for t in enums.keys() if enums[t]]))

def parse_enums(input): ########################################################
	enum = dict()
	for s in input:
		m = re_val.match(s)
		if m:
			if m.group(2):
				enum[m.group(2)] = m.group(1)
			else:
				enum[m.group(1)] = m.group(1)
		else:
			m = re_end.match(s)
			if m: break
	return enum

def usage():  ##################################################################
	print >> sys.stderr, """enumstrgen Alex Kosterin (c) 2013
    enumstrgen [-bhopv] [input]
    -h, --help:         Print help and exit.
    -i, --input         Input file(s) to parse enums. If none given standard input is used.
    -e, --enum          Enum symbol to create conversion function. Must spacify at least one.
        --header        File to store generated header.
        --source        File to store generated code.
    -v, --verbose:      Be verbose.
"""

def main(): ####################################################################
	try:
		opts, args = getopt.getopt(sys.argv[1:], "i:e:hv", ["help", "header=", "source=", "enum=", "verbose"])
	except getopt.GetoptError, err:
		print str(err)
		usage()
		sys.exit(2)

	inputs = []  #sys.stdin
	src   = sys.stdout
	hdr   = sys.stdout
	enums = dict()

	for o, a in opts:
		if o in ("-v", "--verbose"):
			verbose = True
		elif o in ("-h", "--help"):
			usage()
			sys.exit()
		elif o in ("-i", "--input"):
			inputs.append(open(a, 'r'))
		elif o in ("--header"):
			hdr = open(a, 'w')
		elif o in ("--source"):
			src = open(a, 'w')
		elif o in ("-e", "--enum"):
			enums[a] = None

	if not enums:
		print >> sys.stderr, "*** No enums given ***"
		usage()
		exit(1)

	for input in inputs:
		for s in input:
			m = re_enum.match(s)
			if m and enums.has_key(m.group(1)):
				if enums[m.group(1)]:
					print >> sys.stderr, "Multiple definitions of enum", m.group(1)
					sys.exit()
				enums[m.group(1)] = parse_enums(input)

	gen_hdr(hdr, enums);
	gen_src(src, enums);

if __name__ == "__main__":
	main()
