/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#include "order_event.h"

APPLICATION_EVENT_TYPE_DEFINE(order_event,
		  NULL,
		  NULL,
		  APPLICATION_EVENT_FLAGS_CREATE());