/**
 * BlueCove BlueZ module - Java library for Bluetooth on Linux
 *  Copyright (C) 2009 Vlad Skarzhevskyy
 *
 *  Licensed to the Apache Software Foundation (ASF) under one
 *  or more contributor license agreements.  See the NOTICE file
 *  distributed with this work for additional information
 *  regarding copyright ownership.  The ASF licenses this file
 *  to you under the Apache License, Version 2.0 (the
 *  "License"); you may not use this file except in compliance
 *  with the License.  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an
 *  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *  KIND, either express or implied.  See the License for the
 *  specific language governing permissions and limitations
 *  under the License.
 *
 * @version $Id$
 */

#ifndef _BLUECOVE_LOCAL_SOCKET_H
#define _BLUECOVE_LOCAL_SOCKET_H

#include <jni.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <poll.h>
#include <fcntl.h>

#include "common.h"

#include "org_bluecove_socket_LocalSocketImpl.h"
#include "org_bluecove_socket_LocalSocketImpl_LocalSocketOptions.h"

#ifndef SOCKET_ERROR
#define SOCKET_ERROR   (-1)
#endif

#endif  /* _BLUECOVE_LOCAL_SOCKET_H */