/*
 * Copyright 2020 Jesus Ipanienko
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __SENSOR_VOLTAGE_H__
#define __SENSOR_VOLTAGE_H__

#include "os/mynewt.h"
#include "sensor/sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Data representing a singular read from a voltage sensor
 * All values are in V
 */
struct sensor_voltage_data {
    float svd_voltage;

    /* Validity */
    uint8_t svd_voltage_is_valid:1;
};

#ifdef __cplusplus
}
#endif

#endif /* __SENSOR_VOLTAGE_H__ */
