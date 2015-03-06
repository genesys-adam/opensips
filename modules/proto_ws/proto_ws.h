/*
 * Copyright (C) 2015 OpenSIPS Project
 *
 * This file is part of opensips, a free SIP server.
 *
 * opensips is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * opensips is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 *
 * history:
 * ---------
 *  2015-02-xx  created (razvanc)
 */

#ifndef _PROTO_WS_H_
#define _PROTO_WS_H_

#define WS_SUPPORTED_VERSION	13		/*!< WebSocket supported version */
#define WS_DEFAULT_PORT			80		/*!< WebSocket default port */

#include "ws_handshake.h"

enum ws_conn_states { WS_CON_INIT, WS_CON_HANDSHAKE, WS_CON_HANDSHAKE_DONE,
	WS_CON_BAD_REQ };

struct ws_data {
	/* the state of the connection */
	enum ws_conn_states state;

	/* we use a pointer here because we want to detach
	 * it after the handshake is completed */
	struct ws_hs *handshake;
};

#endif /* _PROTO_WS_H_ */
