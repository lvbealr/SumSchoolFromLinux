#ifndef SOLVER_H_
#define SOLVER_H_

#include "coefficientListStruct.h"

/**
 * @brief Activate Mode Of Solving Linear Equation
 * 
 * @param [in] coefficients 
 * @param [out] roots 
 * @return int Success/Failure Return Code [0/1] 
 */
int linearSolver(const coefficientList *coefficients, rootList *roots);

/**
 * @brief Activate Mode Of Solving Quadratic Equation
 * 
 * @param [in] coefficients 
 * @param [out] roots 
 * @return int Success/Failure Return Code [0/1] 
 */
int squareSolver(const coefficientList *coefficients, rootList *roots);

/**
 * @brief Activate Menu Of Choosing Solve Linear/Quadratic Equation
 * 
 * @param [in] coefficients 
 * @param [out] roots 
 * @return int Success/Failure Return Code [0/1] 
 */
int solve(coefficientList *coefficients, rootList *roots);

#endif