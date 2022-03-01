//
// Created by qiuzi on 3/1/2022.
//

#ifndef SDESOLVER_SDE_SOLVER_CONSTANTS_H
#define SDESOLVER_SDE_SOLVER_CONSTANTS_H

#define FORCE_COEFFS_FILENAME "forcecoeffs.csv" //coefficients for force polynomial
#define TERMS  26 //number of terms in force polynomial
#define  INITIAL_DATA_LENGTH  399460 //number of initial r values
#define  INITIAL_DATA_FILENAME  "initial_positions.csv" //initial r values
#define  PARTICLES  20000 //number of particles to simulate
#define  MESH_FINENESS  3000 //dimensions of mesh (MESH_FINENESS * MESH_FINENESS)
#define  N  100000 //number of timesteps
#define  N_THREADS  6

#define   VISCOSITY  0.0010518 //dynamic viscosity of water
#define   RADIUS  48e-6 //radius of particle
#define   DENSITY  2260 //density of particles
#define   MASS  (4.0/3) * DENSITY * M_PI * pow(RADIUS, 3)
#define   CD  6 * M_PI * VISCOSITY * RADIUS //stokes drag
#define   TEMPERATURE  28 + 273.15 //temperature
#define   KB  1.38064852e-23 //boltzmann's #defineant
#define   RANDOM_COEFFICIENT  sqrt(2 * KB * TEMPERATURE / CD) //coefficient in front of the dW term
#define  T_START  0
#define  T_END  1000

#endif //SDESOLVER_SDE_SOLVER_CONSTANTS_H