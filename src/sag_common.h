#ifndef SAG_COMMON_H_
#define SAG_COMMON_H_
/* R headers*/
#include <R.h>
#include <Rdefines.h>
#include <Rinternals.h>
#include <Rmath.h>
#include <R_ext/BLAS.h>
/* Spase Matrices support */
#include "Matrix.h"
#include "cholmod.h"
/* Utils */
#include "utils.h"

/* DEBUG */
#ifndef DEBUG
#define DEBUG 0  // Enable/diasble traces.
#endif
/* Constant */
const static double precision = 1.490116119384765625e-8;
/* trainer type enum */
typedef enum {CONSTANT, LINESEARCH, ADAPTIVE} SAG_TYPE;
/* Prototypes */
/* Error Checking */
void validate_inputs(SEXP w, SEXP Xt, SEXP y, SEXP d, SEXP g, SEXP covered, SEXP sparse);

#endif /* SAG_COMMON_H_ */
