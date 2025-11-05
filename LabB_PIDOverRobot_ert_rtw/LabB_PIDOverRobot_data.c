/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_PIDOverRobot_data.c
 *
 * Code generated for Simulink model 'LabB_PIDOverRobot'.
 *
 * Model version                  : 1.560
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Thu Dec 28 12:34:54 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_PIDOverRobot.h"

/* Block parameters (default storage) */
Parameters_LabB_PIDOverRobot LabB_PIDOverRobot_P = {
  /* Variable: fGyroBias
   * Referenced by: '<S2>/gyro bias'
   */
  0.0F,

  /* Variable: fWheelRadius
   * Referenced by: '<S2>/convert to meters'
   */
  0.0216F,

  /* Mask Parameter: PIDController_D
   * Referenced by: '<S31>/Derivative Gain'
   */
  0.1302F,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S34>/Integral Gain'
   */
  390.43631F,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S32>/Filter'
   */
  0.0F,

  /* Mask Parameter: PIDController_InitialConditio_n
   * Referenced by: '<S37>/Integrator'
   */
  0.0F,

  /* Mask Parameter: PIDController_Kb
   * Referenced by: '<S30>/Kb'
   */
  1.0F,

  /* Mask Parameter: PIDController_LowerSaturationLi
   * Referenced by: '<S44>/Saturation'
   */
  -6.0F,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S40>/Filter Coefficient'
   */
  100.0F,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S42>/Proportional Gain'
   */
  69.6802F,

  /* Mask Parameter: PIDController_UpperSaturationLi
   * Referenced by: '<S44>/Saturation'
   */
  6.0F,

  /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
   * Referenced by: '<S68>/Saturation -Vsupply to Vsupply'
   */
  9.0F,

  /* Expression: 0
   * Referenced by: '<S5>/Serial Transmit'
   */
  0.0,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S69>/Constant'
   */
  0.0F,

  /* Computed Parameter: DiscreteTimeIntegratorconvertfr
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.005F,

  /* Computed Parameter: DiscreteTimeIntegratorconvert_o
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.0F,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S37>/Integrator'
   */
  0.005F,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S32>/Filter'
   */
  0.005F,

  /* Computed Parameter: converttoradians_Gain
   * Referenced by: '<S2>/convert to  radians'
   */
  -0.00872664619F,

  /* Computed Parameter: converttoradianssec_Gain
   * Referenced by: '<S2>/convert to radians//sec'
   */
  -0.000133231239F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
   * Referenced by: '<S68>/Saturation -Vsupply to Vsupply'
   */
  -9.0F,

  /* Computed Parameter: conversiontodutycycleconverttou
   * Referenced by: '<S68>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  28.333334F,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S5>/Constant'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
