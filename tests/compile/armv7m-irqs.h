//
// Copyright (c) 2015 Liviu Ionescu.
// This file is part of the xPacks project (https://xpacks.github.io).
//

#ifndef _ARMV7M_IRQS_H
#define _ARMV7M_IRQS_H

/*  ARMv7-M Processor Exceptions Numbers */
typedef enum
{
  NonMaskableInt_IRQn = -14,
  MemoryManagement_IRQn = -12,
  BusFault_IRQn = -11,
  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,
} IRQn_Type;

#endif /* _ARMV7M_IRQS_H */
