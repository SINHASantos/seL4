/*
 * Copyright 2020, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#ifndef __LIBSEL4_SEL4_PLAT_API_CONSTANTS_H_
#define __LIBSEL4_SEL4_PLAT_API_CONSTANTS_H_

#ifdef HAVE_AUTOCONF
#include <autoconf.h>
#endif

/* Defined for each architecture: the number of hardware breakpoints
 * available.
 */
#ifdef CONFIG_HARDWARE_DEBUG_API
#define seL4_NumHWBreakpoints (4)
#define seL4_FirstBreakpoint (-1)
#define seL4_NumExclusiveBreakpoints (0)
#define seL4_FirstWatchpoint (-1)
#define seL4_NumExclusiveWatchpoints (0)
#define seL4_FirstDualFunctionMonitor (0)
#define seL4_NumDualFunctionMonitors (4)
#endif

#endif /* __LIBSEL4_SEL4_PLAT_API_CONSTANTS_H_ */
