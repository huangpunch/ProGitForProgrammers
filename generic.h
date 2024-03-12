// =============================================================================
// Generic.h
// project heder
//
// Copyright(C) 2014, Anapex Technology Inc.
// All rights reserved.
//
// History of revisions
// Author        Date        Revision    Description
// -----------------------------------------------------------------------------
// Stephen.Wu    2014/01/27    1.0.0        Initialized.
// =============================================================================
#ifndef __GENERIC_H__
#define __GENERIC_H__
#include "M480.h"
#include "TPstruct.h"


// system definition
//------------------------------------------------------------------------------
#define _CHIP_NUM       1   // 1,2,3,4

#define _USBD_HS        0   // 0,1
#define _USBD_FS        1   // 0,1


//#define MAX_FINGERS     20
#define MAX_FINGERS     10
#define LOGICAL_RES     4096 //32768
#define TP_H            18900    // mm/10, Physical horizontal size
#define TP_V            10600    // mm/10, Physical vertical size

#endif // __GENERIC_H__
