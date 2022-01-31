//===-- Expr.h --------------------------------------------------*- C++ -*-===//
//
//                     The KLEE Symbolic Virtual Machine
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef KLEE_CONTRAINTSGENERATION_H
#define KLEE_CONTRAINTSGENERATION_H

#include "klee/ExecutionState.h"

#include <string>

namespace klee {
        class ConstraintsGeneration{
        public: 
        std::string overflow_constraintGen(std::string methodName);
        void generate_cfc_out(std::string write_constraints);
    };
} // End klee namespace


#endif /* KLEE_CONTRAINTSGENERATION_H */
