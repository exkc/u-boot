/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2016 exkc
 * based on db-88f6720.h
 */

#ifndef _CONFIG_GLACIER_H
#define _CONFIG_GLACIER_H

/*
 * High Level Configuration Options (easy to change)
 */

/*
 * TEXT_BASE needs to be below 16MiB, since this area is scrubbed
 * for DDR ECC byte filling in the SPL before loading the main
 * U-Boot into it.
 */

/* I2C */

/* USB/EHCI configuration */

/* Environment in SPI NOR flash */

/*
 * mv-common.h should be defined after CMD configs since it used them
 * to enable certain macros
 */
#include "mv-common.h"

/* SPL */
/* Defines for SPL */

#endif /* _CONFIG_GLACIER_H */
