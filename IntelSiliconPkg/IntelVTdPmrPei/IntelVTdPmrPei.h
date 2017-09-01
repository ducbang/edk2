/** @file
  The definition for DMA access Library.

  Copyright (c) 2017, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php.

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef __DMA_ACCESS_LIB_H__
#define __DMA_ACCESS_LIB_H__

/**
  Set DMA protected region.

  @param LowMemoryBase      The protected low memory region base.
  @param LowMemoryLength    The protected low memory region length.
  @param HighMemoryBase     The protected high memory region base.
  @param HighMemoryLength   The protected high memory region length.

  @retval EFI_SUCCESS      The DMA protection is set.
  @retval EFI_UNSUPPORTED  The DMA protection is not set.
**/
EFI_STATUS
SetDmaProtectedRange (
  IN UINT32        LowMemoryBase,
  IN UINT32        LowMemoryLength,
  IN UINT64        HighMemoryBase,
  IN UINT64        HighMemoryLength
  );

/**
  Diable DMA protection.

  @retval DMA protection is disabled.
**/
EFI_STATUS
DisableDmaProtection (
  VOID
  );

/**
  Get protected low memory alignment.

  @return protected low memory alignment.
**/
UINT32
GetLowMemoryAlignment (
  VOID
  );

/**
  Get protected high memory alignment.

  @return protected high memory alignment.
**/
UINT64
GetHighMemoryAlignment (
  VOID
  );

#endif

