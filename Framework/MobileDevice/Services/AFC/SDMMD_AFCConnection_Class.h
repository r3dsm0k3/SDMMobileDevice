/*
 *  SDMMD_AFCConnection_Class.h
 *  SDMMobileDevice
 *
 * Copyright (c) 2014, Sam Marshall
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
 * following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer
 * 		in the documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Sam Marshall nor the names of its contributors may be used to endorse or promote products derived from this
 * 		software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _SDM_MD_AFCCONNECTION_CLASS_H_
#define _SDM_MD_AFCCONNECTION_CLASS_H_

#include <CoreFoundation/CoreFoundation.h>
#include "CFRuntime.h"
#include "Core.h"
#include "SDMMD_Connection_Class.h"

struct sdmmd_AFCConnectionClassBody {
	SDMMD_AMConnectionRef handle;
	__unsafe_unretained dispatch_queue_t operationQueue;
	__unsafe_unretained dispatch_semaphore_t semaphore;
	uint64_t operationCount;
} sdmmd_AFCConnectionClassBody;

struct sdmmd_AFCConnectionClass {
	CFRuntimeBase base;
	struct sdmmd_AFCConnectionClassBody ivars;
} ATR_PACK sdmmd_AFCConnectionClass;

typedef struct sdmmd_AFCConnectionClass* SDMMD_AFCConnectionRef;

#endif