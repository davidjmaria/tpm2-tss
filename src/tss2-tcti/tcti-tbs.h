/* SPDX-License-Identifier: BSD-2 */
/*
 * Copyright (c) 2018 Intel Corporation
 * All rights reserved.
 */
#ifndef TCTI_TBS_H
#define TCTI_TBS_H

#include "tcti-common.h"

#define TBS_RESULT_MAX_BUFFER_SIZE 8192
#define TCTI_TBS_MAGIC 0xfbf2afa3761e188aULL

typedef struct {
    TSS2_TCTI_COMMON_CONTEXT common;
    void *hContext;
    PBYTE resultBuffer;
    UINT32 resSize;
} TSS2_TCTI_TBS_CONTEXT;



#endif /* TCTI_TBS_H */
