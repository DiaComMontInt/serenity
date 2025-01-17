/*
 * Copyright (c) 2022, sin-ack <sin-ack@protonmail.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibCore/Stream.h>

void parse_sockets_from_system_server();
ErrorOr<NonnullOwnPtr<Core::Stream::LocalSocket>> take_over_accepted_socket_from_system_server(String const& socket_path = {});
