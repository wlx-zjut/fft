/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 8.3 and the Signal Processing Toolbox 6.21.
 * Generated on: 04-May-2017 09:17:50
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 31
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
/* 
 * Expected path to tmwtypes.h 
 * D:\Program Files\Matlab\R2014a\extern\include\tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   int16 filter coefficients.
 */

#ifndef COF_H
#define COF_H

const int cofBL = 31;
int cofB[31] = {
     -224,    -89,    113,    450,    769,    848,    518,   -202,  -1033,
    -1499,  -1130,    299,   2591,   5138,   7131,   7884,   7131,   5138,
     2591,    299,  -1130,  -1499,  -1033,   -202,    518,    848,    769,
      450,    113,    -89,   -224
};

#endif
