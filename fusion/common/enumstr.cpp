/*
 *  FUSION
 *  Copyright (c) 2012-2013 Alex Kosterin
 */

//
// Do not edit! This file was automatically generated by enumstrgen.py
//

#include "include/enumstr.h"
#include <stdio.h>

namespace nf {
  __declspec(thread) char buff[33];

  const char* enumstr(op_t v) {
    switch (v) {
    case 1:	return "MD_ACCESS_OPERATION_WRITE";
    case 0:	return "MD_ACCESS_OPERATION_READ";
    }

    ::_snprintf(buff, sizeof buff, "%d", v);

    return buff;
  }

  const char* enumstr(_mtype_t v) {
    switch (v) {
    case 0x0008:	return "MT_PERSISTENT";
    case 0x0007:	return "MT_TYPE_MASK";
    case 0x0004:	return "MT_CLIENT";
    case 0x0002:	return "MT_STREAM";
    case 0x0003:	return "MT_GROUP";
    case 0x0000:	return "MT_EVENT";
    case 0x0001:	return "MT_DATA";
    case 0x000F:	return "MT_VALIDATE_MASK";
    }

    ::_snprintf(buff, sizeof buff, "%d", v);

    return buff;
  }

  const char* enumstr(_md_sys_t v) {
    switch (v) {
    case MD_SYS_QUERY_CLIENT_REPLY:	return "MD_SYS_QUERY_CLIENT_REPLY";
    case MD_SYS_NOTIFY_SUBSCRIBE:	return "MD_SYS_NOTIFY_SUBSCRIBE";
    case MD_SYS_MOPEN_REQUEST:	return "MD_SYS_MOPEN_REQUEST";
    case MD_SYS_STOP_REQUEST:	return "MD_SYS_STOP_REQUEST";
    case 0xFFFF:	return "MD_SYS_ANY";
    case MD_SYS_QUERY_CLIENTS_REPLY:	return "MD_SYS_QUERY_CLIENTS_REPLY";
    case 1:	return "MD_SYS_STATUS";
    case MD_SYS_MOPEN_REPLY:	return "MD_SYS_MOPEN_REPLY";
    case MD_SYS_MCLOSE_REQUEST:	return "MD_SYS_MCLOSE_REQUEST";
    case MD_SYS_SYSINFO_REQUEST:	return "MD_SYS_SYSINFO_REQUEST";
    case MD_SYS_REGISTER_REPLY:	return "MD_SYS_REGISTER_REPLY";
    case MD_SYS_UNREGISTER_REPLY:	return "MD_SYS_UNREGISTER_REPLY";
    case 0:	return "MD_SYS_NONE";
    case MD_SYS_QUERY_CLIENTS_REQUEST:	return "MD_SYS_QUERY_CLIENTS_REQUEST";
    case MD_SYS_ECHO_REQUEST:	return "MD_SYS_ECHO_REQUEST";
    case MD_SYS_MMOVE_REQUEST:	return "MD_SYS_MMOVE_REQUEST";
    case MD_SYS_MLINK_REQUEST:	return "MD_SYS_MLINK_REQUEST";
    case MD_SYS_TIMESYNC_REPLY:	return "MD_SYS_TIMESYNC_REPLY";
    case MD_SYS_NOTIFY_OPEN:	return "MD_SYS_NOTIFY_OPEN";
    case MD_SYS_MLIST_REQUEST:	return "MD_SYS_MLIST_REQUEST";
    case MD_SYS_MUNLINK_REQUEST:	return "MD_SYS_MUNLINK_REQUEST";
    case MD_SYS_REGISTER_REQUEST:	return "MD_SYS_REGISTER_REQUEST";
    case MD_SYS_UNSUBSCRIBE_REQUEST:	return "MD_SYS_UNSUBSCRIBE_REQUEST";
    case MD_SYS_UNREGISTER_REQUEST:	return "MD_SYS_UNREGISTER_REQUEST";
    case MD_SYS_QUERY_GROUP_REPLY:	return "MD_SYS_QUERY_GROUP_REPLY";
    case MD_SYS_NOTIFY_CONFIGURE:	return "MD_SYS_NOTIFY_CONFIGURE";
    case MD_SYS_TIMESYNC_REQUEST:	return "MD_SYS_TIMESYNC_REQUEST";
    case MD_SYS_MUNLINK2_REQUEST:	return "MD_SYS_MUNLINK2_REQUEST";
    case MD_SYS_QUERY_CLIENT_BY_ID_REQUEST:	return "MD_SYS_QUERY_CLIENT_BY_ID_REQUEST";
    case MD_SYS_QUERY_GROUP_REQUEST:	return "MD_SYS_QUERY_GROUP_REQUEST";
    case 1023:	return "MD_SYS_LAST_";
    case MD_SYS_SUBSCRIBE_REQUEST:	return "MD_SYS_SUBSCRIBE_REQUEST";
    case MD_SYS_ECHO_REPLY:	return "MD_SYS_ECHO_REPLY";
    case MD_SYS_SYSINFO_REPLY:	return "MD_SYS_SYSINFO_REPLY";
    case MD_SYS_MLIST_REPLY:	return "MD_SYS_MLIST_REPLY";
    case MD_SYS_TERMINATE_REQUEST:	return "MD_SYS_TERMINATE_REQUEST";
    }

    ::_snprintf(buff, sizeof buff, "%d", v);

    return buff;
  }

  const char* enumstr(access_t v) {
    switch (v) {
    case 00070:	return "M_IRWXG";
    case 00004:	return "M_IROTH";
    case 00200:	return "M_IWUSR";
    case 00700:	return "M_IRWXU";
    case 00400:	return "M_IRUSR";
    case 00007:	return "M_IRWXO";
    case 00020:	return "M_IWGRP";
    case 00001:	return "M_IXOTH";
    case 00010:	return "M_IXGRP";
    case 00002:	return "M_IWOTH";
    case 00040:	return "M_IRGRP";
    case 00100:	return "M_IXUSR";
    }

    ::_snprintf(buff, sizeof buff, "%d", v);

    return buff;
  }

  const char* enumstr(result_t v) {
    switch (v) {
    case ERR_OPEN:	return "ERR_OPEN";
    case ERR_PARAMETER:	return "ERR_PARAMETER";
    case ERR_MESSAGE_FORMAT:	return "ERR_MESSAGE_FORMAT";
    case ERR_INVALID_SOURCE:	return "ERR_INVALID_SOURCE";
    case ERR_TRUNCATED:	return "ERR_TRUNCATED";
    case ERR_CONFIGURATION:	return "ERR_CONFIGURATION";
    case ERR_VERSION:	return "ERR_VERSION";
    case ERR_WRITEONLY:	return "ERR_WRITEONLY";
    case ERR_CONNECTION:	return "ERR_CONNECTION";
    case ERR_TIMEOUT:	return "ERR_TIMEOUT";
    case ERR_IGNORE:	return "ERR_IGNORE";
    case ERR_INITIALIZED:	return "ERR_INITIALIZED";
    case ERR_IMPLEMENTED:	return "ERR_IMPLEMENTED";
    case 0:	return "ERR_OK";
    case ERR_MESSAGE_NAME:	return "ERR_MESSAGE_NAME";
    case ERR_MEMORY:	return "ERR_MEMORY";
    case ERR_READONLY:	return "ERR_READONLY";
    case ERR_ALREADY_EXIST:	return "ERR_ALREADY_EXIST";
    case ERR_IO:	return "ERR_IO";
    case ERR_PERMISSION:	return "ERR_PERMISSION";
    case ERR_GROUP:	return "ERR_GROUP";
    case ERR_REGISTERED:	return "ERR_REGISTERED";
    case ERR_UNEXPECTED:	return "ERR_UNEXPECTED";
    case 1024:	return "ERR_USER";
    case ERR_SUBSCRIBERS:	return "ERR_SUBSCRIBERS";
    case ERR_MESSAGE_SIZE:	return "ERR_MESSAGE_SIZE";
    case ERR_MESSAGE:	return "ERR_MESSAGE";
    case ERR_CONFIGURATION_LOCK:	return "ERR_CONFIGURATION_LOCK";
    case ERR_WIN32:	return "ERR_WIN32";
    case ERR_CLIENT:	return "ERR_CLIENT";
    case ERR_MESSAGE_TYPE:	return "ERR_MESSAGE_TYPE";
    case ERR_TOO_MANY_CLIENTS:	return "ERR_TOO_MANY_CLIENTS";
    case ERR_SUBSCRIBED:	return "ERR_SUBSCRIBED";
    case ERR_INVALID_DESTINATION:	return "ERR_INVALID_DESTINATION";
    case ERR_TOO_MANY_GROUPS:	return "ERR_TOO_MANY_GROUPS";
    case ERR_CONTEXT:	return "ERR_CONTEXT";
    }

    ::_snprintf(buff, sizeof buff, "%d", v);

    return buff;
  }

  const char* enumstr(_oflags_t v) {
    switch (v) {
    case 0x7FF0:	return "O_VALIDATE_MASK";
    case 0x1000:	return "O_NOTIFY_OPEN";
    case 0x0800:	return "O_EDGE_TRIGGER";
    case 0x0020:	return "O_WRONLY";
    case 0x0400:	return "O_TEMPORARY";
    case 0x0010:	return "O_RDONLY";
    case 0x0000:	return "O_RDWR";
    case 0x4000:	return "O_NOTIFY_CONFIGURE";
    case 0x0040:	return "O_CREATE";
    case 0x0080:	return "O_EXCL";
    case 0x0100:	return "O_HINTID";
    case 0x2000:	return "O_NOTIFY_SUBSCRIBE";
    case 0x0200:	return "O_NOATIME";
    }

    ::_snprintf(buff, sizeof buff, "%d", v);

    return buff;
  }
}

