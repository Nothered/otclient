/*
 * Copyright (c) 2010-2020 OTClient <https://github.com/edubart/otclient>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef FRAMEWORK_NET_DECLARATIONS_H
#define FRAMEWORK_NET_DECLARATIONS_H

#include <framework/global.h>
#include <asio/ip/tcp.hpp>
#include <asio/io_service.hpp>
#include <asio/write.hpp>

class InputMessage;
class OutputMessage;
class Connection;
class Protocol;
class ProtocolHttp;
class Server;

using InputMessagePtr = stdext::shared_object_ptr<InputMessage>;
using OutputMessagePtr = stdext::shared_object_ptr<OutputMessage>;
using ConnectionPtr = stdext::shared_object_ptr<Connection>;
using ProtocolPtr = stdext::shared_object_ptr<Protocol>;
using ProtocolHttpPtr = stdext::shared_object_ptr<ProtocolHttp>;
using ServerPtr = stdext::shared_object_ptr<Server>;

#endif
