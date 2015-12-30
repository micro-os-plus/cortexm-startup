/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2015 Liviu Ionescu.
 *
 * µOS++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, version 3.
 *
 * µOS++ is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CMSIS_DEVICE_H_
#define CMSIS_DEVICE_H_

#define __MPU_PRESENT             1
#define __FPU_PRESENT             1
#define __NVIC_PRIO_BITS          4

#include "armv7m-irqs.h"

#include "core_cm4.h"

void
SystemInit (void);

void
SystemCoreClockUpdate (void);

#endif /* CMSIS_DEVICE_H_ */
