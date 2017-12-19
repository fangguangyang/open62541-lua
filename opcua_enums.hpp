#pragma once

#include "open62541.h"

#define SOL_CHECK_ARGUMENTS 1
#include "sol/sol.hpp"

namespace lua_opcua {

void reg_opcua_enums(sol::table& module) {
	module.new_enum("UA_ClientState",
		"UA_CLIENTSTATE_DISCONNECTED", UA_ClientState::UA_CLIENTSTATE_CONNECTED,
		"UA_CLIENTSTATE_CONNECTED", UA_ClientState::UA_CLIENTSTATE_CONNECTED,
		"UA_CLIENTSTATE_SECURECHANNEL", UA_ClientState::UA_CLIENTSTATE_SECURECHANNEL,
		"UA_CLIENTSTATE_SESSION", UA_ClientState::UA_CLIENTSTATE_SESSION,
		"UA_CLIENTSTATE_SESSION_DISCONNECTED", UA_ClientState::UA_CLIENTSTATE_SESSION_DISCONNECTED
	);
	module.new_enum("VariantType",
		"BOOLEAN", UA_TYPES_BOOLEAN,
		"SBYTE", UA_TYPES_SBYTE,
		"BYTE", UA_TYPES_BYTE,
		"INT16", UA_TYPES_INT16,
		"UINT16", UA_TYPES_UINT16,
		"INT32", UA_TYPES_INT32,
		"UINT32", UA_TYPES_UINT32,
		"INT64", UA_TYPES_INT64,
		"UINT64", UA_TYPES_UINT64,
		"FLOAT", UA_TYPES_FLOAT,
		"DOUBLE", UA_TYPES_DOUBLE,
		"STRING", UA_TYPES_STRING,
		"DATETIME", UA_TYPES_DATETIME,
		"GUID", UA_TYPES_GUID,
		"BYTESTRING", UA_TYPES_BYTESTRING,
		"XMLELEMENT", UA_TYPES_XMLELEMENT,
		"NODEID", UA_TYPES_NODEID,
		"EXPANDEDNODEID", UA_TYPES_EXPANDEDNODEID,
		"STATUSCODE", UA_TYPES_STATUSCODE,
		"QUALIFIEDNAME", UA_TYPES_QUALIFIEDNAME,
		"LOCALIZEDTEXT", UA_TYPES_LOCALIZEDTEXT,
		"EXTENSIONOBJECT", UA_TYPES_EXTENSIONOBJECT,
		"DATAVALUE", UA_TYPES_DATAVALUE,
		"VARIANT", UA_TYPES_VARIANT,
		"DIAGNOSTICINFO", UA_TYPES_DIAGNOSTICINFO //TODO:
	);
	module.new_enum("AccessLevel",
		"READ", UA_ACCESSLEVELMASK_READ,
		"WRITE", UA_ACCESSLEVELMASK_WRITE,
		"HISTORYREAD", UA_ACCESSLEVELMASK_HISTORYREAD,
		"HISTORYWRITE", UA_ACCESSLEVELMASK_HISTORYWRITE,
		"SEMANTICCHANGE", UA_ACCESSLEVELMASK_SEMANTICCHANGE,
		"STATUSWRITE", UA_ACCESSLEVELMASK_STATUSWRITE,
		"TIMESTAMPWRITE", UA_ACCESSLEVELMASK_TIMESTAMPWRITE,
		"RW", UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE,
		"ALL", 0xF
	);
	module.new_enum("WriteMask",
		"ACCESSLEVEL", UA_WRITEMASK_ACCESSLEVEL,
		"ARRAYDIMENSIONS", UA_WRITEMASK_ARRRAYDIMENSIONS,
		"BROWSENAME", UA_WRITEMASK_BROWSENAME,
		"CONTAINSNOLOOPS", UA_WRITEMASK_CONTAINSNOLOOPS,
		"DATATYPE", UA_WRITEMASK_DATATYPE,
		"DESCRIPTION", UA_WRITEMASK_DESCRIPTION,
		"DISPLAYNAME", UA_WRITEMASK_DISPLAYNAME,
		"EVENTNOTIFIER", UA_WRITEMASK_EVENTNOTIFIER,
		"EXECUTABLE", UA_WRITEMASK_EXECUTABLE,
		"HISTORIZING", UA_WRITEMASK_HISTORIZING,
		"INVERSENAME", UA_WRITEMASK_INVERSENAME,
		"ISABSTRACT", UA_WRITEMASK_ISABSTRACT,
		"MINIMUMSAMPLINGINTERVAL", UA_WRITEMASK_MINIMUMSAMPLINGINTERVAL,
		"NODECLASS", UA_WRITEMASK_NODECLASS,
		"NODEID", UA_WRITEMASK_NODEID,
		"SYMMETRIC", UA_WRITEMASK_SYMMETRIC,
		"USERACCESSLEVEL", UA_WRITEMASK_USERACCESSLEVEL,
		"USEREXECUTABLE", UA_WRITEMASK_USEREXECUTABLE,
		"USERWRITEMASK", UA_WRITEMASK_USERWRITEMASK,
		"VALUERANK", UA_WRITEMASK_VALUERANK,
		"WRITEMASK", UA_WRITEMASK_WRITEMASK,
		"VALUEFORVARIABLETYPE", UA_WRITEMASK_VALUEFORVARIABLETYPE,
		"ALL", 0xFF
	);

	module.new_enum("LogLevel",
		"TRACE", UA_LogLevel::UA_LOGLEVEL_TRACE,
		"DEBUG", UA_LogLevel::UA_LOGLEVEL_DEBUG,
		"INFO", UA_LogLevel::UA_LOGLEVEL_INFO,
		"WARNING", UA_LogLevel::UA_LOGLEVEL_WARNING,
		"ERROR", UA_LogLevel::UA_LOGLEVEL_ERROR,
		"FATAL", UA_LogLevel::UA_LOGLEVEL_FATAL
	);
	module.new_enum("LogCategory",
		"NETWORK", UA_LogCategory::UA_LOGCATEGORY_NETWORK,
		"SECURECHANNEL", UA_LogCategory::UA_LOGCATEGORY_SECURECHANNEL,
		"SESSION", UA_LogCategory::UA_LOGCATEGORY_SESSION,
		"SERVER", UA_LogCategory::UA_LOGCATEGORY_SERVER,
		"CLIENT", UA_LogCategory::UA_LOGCATEGORY_CLIENT,
		"USERLAND", UA_LogCategory::UA_LOGCATEGORY_USERLAND,
		"SECURITYPOLICY", UA_LogCategory::UA_LOGCATEGORY_SECURITYPOLICY
	);
}

}
