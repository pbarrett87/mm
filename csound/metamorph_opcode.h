#ifndef METAMORPH_OPCODE_H
#define METAMORPH_OPCODE_H

#include "csdl.h"
#include "metamorph.h"

// ----------------------------------------------------------------------------
// Main Metamorph Opcode
// ----------------------------------------------------------------------------
typedef struct Mm Mm;

typedef struct {
    // structure holding csound global data (esr, ksmps, etc.)
    OPDS h;

    // output
    MYFLT *output;

    // parameters
    MYFLT *input,
          *harmonic_scale,
          *residual_scale,
          *transient_scale,
          *transient_lpf, // ******
          *transient_hpf, // ******
          *preserve_transients,
          *transposition_factor,
          *preserve_envelope,
          *harmonic_distortion,
          *fundamental_frequency;

    // opcode internal data
    Mm *data;
} MM;

#endif
