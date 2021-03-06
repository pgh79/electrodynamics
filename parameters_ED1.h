/* 
 * File:   parameters_ED1.h
 * Author: Thomas Bronzwaer
 *
 * Created on July 7, 2014, 4:03 PM
 * 
 * NOTES ON cgs-Gauss UNITS:
 * 
 * Units are centimeter, gram, second
 */

#ifndef PARAMETERS_ED1_H
#define	PARAMETERS_ED1_H

#include <cstdlib>
#include <complex>
#include <stdio.h>
#include <iostream>

// PARAMETERS
/////////////

const int    WIDTH           = 800;
const int    HEIGHT          = 600;
const double SCALE           = 2.0;            // cm; scale factor
const double VELOCITY        = 2.448e10;         // cm/s Linear velocity, 0.8333 c
const double ACCELERATION    = 4.e18;          // Used for linear acceleration
const double FREQUENCY       = 1.2e9;
const double AMPLITUDE       = 2.;
const double CHARGE          = 4.80320425e-10; // Elementary charge, statcoulomb
const int    NSTEPS          = 50;             // For binary search (ret. time)
const int    TIMESTEPS       = 420;
const double T_INCREMENT     = 8.5e-11;
const double GAMMA           = 1. / 2.2;

const double T_INIT          = 0.0001;

const std::string OUTPUT_DIR = "C:/output/electrodynamics";

#endif