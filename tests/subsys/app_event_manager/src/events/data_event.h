/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef _DATA_EVENT_H_
#define _DATA_EVENT_H_

/**
 * @brief Data Event
 * @defgroup data_event Data Event
 * @{
 */

#include <app_evt_mgr.h>
#include <app_evt_mgr_profiler_tracer.h>

#ifdef __cplusplus
extern "C" {
#endif

struct data_event {
	struct application_event_header header;

	int8_t val1;
	int16_t val2;
	int32_t val3;
	uint8_t val1u;
	uint16_t val2u;
	uint32_t val3u;

	char *descr;
};

APPLICATION_EVENT_TYPE_DECLARE(data_event);

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* _DATA_EVENT_H_ */