//===- MCAsmInfoXCOFF.h - XCOFF asm properties ----------------- *- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_MC_MCASMINFOXCOFF_H
#define LLVM_MC_MCASMINFOXCOFF_H

#include "llvm/MC/MCAsmInfo.h"

namespace llvm {

class MCAsmInfoXCOFF : public MCAsmInfo {
  virtual void anchor();

protected:
  MCAsmInfoXCOFF();

public:
  // Return true only when the identifier Name does not need quotes to be
  // syntactically correct for XCOFF.
  bool isValidUnquotedName(StringRef Name) const override;
};

} // end namespace llvm

#endif // LLVM_MC_MCASMINFOXCOFF_H
