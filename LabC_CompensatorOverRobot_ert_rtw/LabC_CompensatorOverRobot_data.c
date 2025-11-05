/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabC_CompensatorOverRobot_data.c
 *
 * Code generated for Simulink model 'LabC_CompensatorOverRobot'.
 *
 * Model version                  : 10.0
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr 11 11:16:56 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabC_CompensatorOverRobot.h"
#include "LabC_CompensatorOverRobot_private.h"

/* Block parameters (default storage) */
Parameters_LabC_CompensatorOver LabC_CompensatorOverRobot_P = {
  /* Variable: Ad
   * Referenced by: '<S5>/Gain7'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.00216896622F, 0.169050902F, 0.0123843607F,
    3.63452482F, -3.56490091E-5F, -0.00956453104F, 1.00059724F, 0.218322545F,
    5.91316457E-5F, 0.0173366778F, 0.00473979255F, 0.923703194F },

  /* Variable: Bd
   * Referenced by: '<S5>/Gain8'
   */
  { 0.00013408318F, 0.0393588543F, -0.000584822148F, -0.171463519F },

  /* Variable: Cd
   * Referenced by: '<S5>/Gain10'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F },

  /* Variable: Kd
   * Referenced by: '<S1>/controller'
   */
  { -7.71916389F, -34.6110115F, -46.3163033F, -8.45758057F },

  /* Variable: Ld
   * Referenced by: '<S5>/Gain9'
   */
  { 0.0390094034F, -1.66167545F, -0.0160740148F, 7.27164841F, -0.009314F,
    6.10311365F, 0.272439599F, -25.1443596F },

  /* Variable: Md1
   * Referenced by: '<S5>/Gain'
   */
  { 0.976238072F, 0.00142083375F, -0.041658245F, 0.00169406936F, 0.963867664F,
    -0.00568081951F, 0.039342694F, 0.00444089854F, 0.823480904F },

  /* Variable: Md2
   * Referenced by: '<S5>/Gain1'
   */
  { 0.0892583057F, -0.00126257574F, -0.398721248F },

  /* Variable: Md3
   * Referenced by: '<S5>/Gain2'
   */
  { 372.152954F, -5.05472469F, -1694.90112F },

  /* Variable: Md4
   * Referenced by: '<S5>/Gain3'
   */
  { -0.0245254859F, 0.0369097106F, 0.284424931F },

  /* Variable: Md5
   * Referenced by: '<S5>/Gain4'
   */
  { -372.152954F, 5.05472469F, 1694.90112F },

  /* Variable: Md6
   * Referenced by: '<S5>/Gain5'
   */
  { 1.0F, 0.0F, 0.0F, -0.0F },

  /* Variable: Md7
   * Referenced by: '<S5>/Gain6'
   */
  { 0.0F, 1.0F, 0.0F, -0.0F, 0.0F, 0.0F, 1.0F, -0.0F, -0.0F, -0.0F, -0.0F, 1.0F
  },

  /* Variable: Nxd
   * Referenced by: '<S1>/Gain3'
   */
  -7.71916389F,

  /* Variable: fGyroBias
   * Referenced by: '<S2>/gyro bias'
   */
  0.0F,

  /* Variable: fWheelRadius
   * Referenced by: '<S2>/convert to meters'
   */
  0.0216F,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S6>/UD'
   */
  0.0F,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_g
   * Referenced by: '<S7>/UD'
   */
  0.0F,

  /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
   * Referenced by: '<S54>/Saturation -Vsupply to Vsupply'
   */
  9.0F,

  /* Expression: 0
   * Referenced by: '<S10>/Serial Transmit'
   */
  0.0,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S55>/Constant'
   */
  0.0F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S1>/Gain4'
   */
  -0.0F,

  /* Computed Parameter: converttoradians_Gain
   * Referenced by: '<S2>/convert to  radians'
   */
  -0.00872664619F,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S6>/TSamp'
   */
  200.0F,

  /* Computed Parameter: DiscreteTimeIntegratorconvertfr
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.005F,

  /* Computed Parameter: DiscreteTimeIntegratorconvert_o
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.0F,

  /* Computed Parameter: TSamp_WtEt_j
   * Referenced by: '<S7>/TSamp'
   */
  200.0F,

  /* Computed Parameter: Internal_1_1_A
   * Referenced by: '<S8>/Internal_1_1'
   */
  -0.0F,

  /* Computed Parameter: Internal_1_1_C
   * Referenced by: '<S8>/Internal_1_1'
   */
  1.0F,

  /* Computed Parameter: Internal_1_1_InitialCondition
   * Referenced by: '<S8>/Internal_1_1'
   */
  0.0F,

  /* Computed Parameter: Internal_1_2_InitialCondition
   * Referenced by: '<S8>/Internal_1_2'
   */
  0.0F,

  /* Computed Parameter: Internal_1_3_InitialCondition
   * Referenced by: '<S8>/Internal_1_3'
   */
  0.0F,

  /* Computed Parameter: Internal_1_4_InitialCondition
   * Referenced by: '<S8>/Internal_1_4'
   */
  0.0F,

  /* Computed Parameter: Internal_2_1_InitialCondition
   * Referenced by: '<S8>/Internal_2_1'
   */
  0.0F,

  /* Computed Parameter: Internal_2_2_A
   * Referenced by: '<S8>/Internal_2_2'
   */
  -0.0F,

  /* Computed Parameter: Internal_2_2_C
   * Referenced by: '<S8>/Internal_2_2'
   */
  1.0F,

  /* Computed Parameter: Internal_2_2_InitialCondition
   * Referenced by: '<S8>/Internal_2_2'
   */
  0.0F,

  /* Computed Parameter: Internal_2_3_InitialCondition
   * Referenced by: '<S8>/Internal_2_3'
   */
  0.0F,

  /* Computed Parameter: Internal_2_4_InitialCondition
   * Referenced by: '<S8>/Internal_2_4'
   */
  0.0F,

  /* Computed Parameter: Internal_3_1_InitialCondition
   * Referenced by: '<S8>/Internal_3_1'
   */
  0.0F,

  /* Computed Parameter: Internal_3_2_InitialCondition
   * Referenced by: '<S8>/Internal_3_2'
   */
  0.0F,

  /* Computed Parameter: Internal_3_3_A
   * Referenced by: '<S8>/Internal_3_3'
   */
  -0.0F,

  /* Computed Parameter: Internal_3_3_C
   * Referenced by: '<S8>/Internal_3_3'
   */
  1.0F,

  /* Computed Parameter: Internal_3_3_InitialCondition
   * Referenced by: '<S8>/Internal_3_3'
   */
  0.0F,

  /* Computed Parameter: Internal_3_4_InitialCondition
   * Referenced by: '<S8>/Internal_3_4'
   */
  0.0F,

  /* Computed Parameter: Internal_4_1_InitialCondition
   * Referenced by: '<S8>/Internal_4_1'
   */
  0.0F,

  /* Computed Parameter: Internal_4_2_InitialCondition
   * Referenced by: '<S8>/Internal_4_2'
   */
  0.0F,

  /* Computed Parameter: Internal_4_3_InitialCondition
   * Referenced by: '<S8>/Internal_4_3'
   */
  0.0F,

  /* Computed Parameter: Internal_4_4_A
   * Referenced by: '<S8>/Internal_4_4'
   */
  -0.0F,

  /* Computed Parameter: Internal_4_4_C
   * Referenced by: '<S8>/Internal_4_4'
   */
  1.0F,

  /* Computed Parameter: Internal_4_4_InitialCondition
   * Referenced by: '<S8>/Internal_4_4'
   */
  0.0F,

  /* Computed Parameter: Internal_1_1_A_e
   * Referenced by: '<S9>/Internal_1_1'
   */
  -0.0F,

  /* Computed Parameter: Internal_1_1_C_i
   * Referenced by: '<S9>/Internal_1_1'
   */
  1.0F,

  /* Computed Parameter: Internal_1_1_InitialCondition_j
   * Referenced by: '<S9>/Internal_1_1'
   */
  0.0F,

  /* Computed Parameter: Internal_1_2_InitialCondition_o
   * Referenced by: '<S9>/Internal_1_2'
   */
  0.0F,

  /* Computed Parameter: Internal_1_3_InitialCondition_o
   * Referenced by: '<S9>/Internal_1_3'
   */
  0.0F,

  /* Computed Parameter: Internal_2_1_InitialCondition_h
   * Referenced by: '<S9>/Internal_2_1'
   */
  0.0F,

  /* Computed Parameter: Internal_2_2_A_k
   * Referenced by: '<S9>/Internal_2_2'
   */
  -0.0F,

  /* Computed Parameter: Internal_2_2_C_n
   * Referenced by: '<S9>/Internal_2_2'
   */
  1.0F,

  /* Computed Parameter: Internal_2_2_InitialCondition_f
   * Referenced by: '<S9>/Internal_2_2'
   */
  0.0F,

  /* Computed Parameter: Internal_2_3_InitialCondition_d
   * Referenced by: '<S9>/Internal_2_3'
   */
  0.0F,

  /* Computed Parameter: Internal_3_1_InitialCondition_a
   * Referenced by: '<S9>/Internal_3_1'
   */
  0.0F,

  /* Computed Parameter: Internal_3_2_InitialCondition_i
   * Referenced by: '<S9>/Internal_3_2'
   */
  0.0F,

  /* Computed Parameter: Internal_3_3_A_g
   * Referenced by: '<S9>/Internal_3_3'
   */
  -0.0F,

  /* Computed Parameter: Internal_3_3_C_i
   * Referenced by: '<S9>/Internal_3_3'
   */
  1.0F,

  /* Computed Parameter: Internal_3_3_InitialCondition_e
   * Referenced by: '<S9>/Internal_3_3'
   */
  0.0F,

  /* Computed Parameter: converttoradianssec_Gain
   * Referenced by: '<S2>/convert to radians//sec'
   */
  -0.000133231239F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
   * Referenced by: '<S54>/Saturation -Vsupply to Vsupply'
   */
  -9.0F,

  /* Computed Parameter: conversiontodutycycleconverttou
   * Referenced by: '<S54>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  28.333334F,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S5>/Manual Switch'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S5>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: Constant_Value_i
   * Referenced by: '<S10>/Constant'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
