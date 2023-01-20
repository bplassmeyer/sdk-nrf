/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef METHOD_OTDOA_H
#define METHOD_OTDOA_H

int method_otdoa_location_get(const struct location_method_config *config);
int method_otdoa_init(void);
int method_otdoa_cancel(void);

#endif /* METHOD_OTDOA_H */
