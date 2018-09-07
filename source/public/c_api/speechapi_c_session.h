//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
// speechapi_c_session.h: Public API declarations for Session related C methods
//

#pragma once
#include <speechapi_c_common.h>

SPXAPI Session_From_Recognizer(SPXRECOHANDLE hreco, SPXSESSIONHANDLE* phsession);

SPXAPI_(bool) Session_Handle_IsValid(SPXSESSIONHANDLE hsession);
SPXAPI Session_Handle_Close(SPXSESSIONHANDLE hsession);

enum Session_Parameter { SessionParameter_SubscriptionKey = 1, SessionParameter_AuthorizationToken = 2 };
typedef enum Session_Parameter Session_Parameter;
SPXAPI Session_GetParameter_Name(Session_Parameter parameter, char* name, uint32_t cchName);

SPXAPI Session_SetParameter_String(SPXSESSIONHANDLE hsession, const char* name, const char* value);
SPXAPI Session_GetParameter_String(SPXSESSIONHANDLE hsession, const char* name, char* value, uint32_t cchValue, const char* defaultValue);
SPXAPI_(bool) Session_ContainsParameter_String(SPXSESSIONHANDLE hsession, const char* name);

SPXAPI Session_SetParameter_Int32(SPXSESSIONHANDLE hsession, const char* name, int32_t value);
SPXAPI Session_GetParameter_Int32(SPXSESSIONHANDLE hsession, const char* name, int32_t* pvalue, int32_t defaultValue);
SPXAPI_(bool) Session_ContainsParameter_Int32(SPXSESSIONHANDLE hsession, const char* name);

SPXAPI Session_SetParameter_Bool(SPXSESSIONHANDLE hsession, const char* name, bool value);
SPXAPI Session_GetParameter_Bool(SPXSESSIONHANDLE hsession, const char* name, bool* pvalue, bool defaultValue);
SPXAPI_(bool) Session_ContainsParameter_Bool(SPXSESSIONHANDLE hsession, const char* name);
