/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_PIDOverRobot_types.h
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

#ifndef RTW_HEADER_LabB_PIDOverRobot_types_h_
#define RTW_HEADER_LabB_PIDOverRobot_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"

/* Custom Type definition for MATLABSystem: '<S68>/PWM' */
#include "MW_SVD.h"
#ifndef struct_tag_qbUFhX6Bp3RsgYGeqgZpEH
#define struct_tag_qbUFhX6Bp3RsgYGeqgZpEH

struct tag_qbUFhX6Bp3RsgYGeqgZpEH
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_qbUFhX6Bp3RsgYGeqgZpEH */

#ifndef typedef_c_arduinodriver_ArduinoSerial_L
#define typedef_c_arduinodriver_ArduinoSerial_L

typedef struct tag_qbUFhX6Bp3RsgYGeqgZpEH c_arduinodriver_ArduinoSerial_L;

#endif                             /* typedef_c_arduinodriver_ArduinoSerial_L */

#ifndef struct_tag_ghK8YWVQwtwpThnQHmUfd
#define struct_tag_ghK8YWVQwtwpThnQHmUfd

struct tag_ghK8YWVQwtwpThnQHmUfd
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T Protocol;
  real_T port;
  real_T dataSizeInBytes;
  real_T dataType;
  real_T sendModeEnum;
  real_T sendFormatEnum;
  c_arduinodriver_ArduinoSerial_L SerialDriverObj;
};

#endif                                 /* struct_tag_ghK8YWVQwtwpThnQHmUfd */

#ifndef typedef_codertarget_arduinobase_interna
#define typedef_codertarget_arduinobase_interna

typedef struct tag_ghK8YWVQwtwpThnQHmUfd codertarget_arduinobase_interna;

#endif                             /* typedef_codertarget_arduinobase_interna */

#ifndef struct_tag_LZATNKaowXRlwzpKcQ6wRE
#define struct_tag_LZATNKaowXRlwzpKcQ6wRE

struct tag_LZATNKaowXRlwzpKcQ6wRE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_LZATNKaowXRlwzpKcQ6wRE */

#ifndef typedef_Encoder_arduino_LabB_PIDOverRob
#define typedef_Encoder_arduino_LabB_PIDOverRob

typedef struct tag_LZATNKaowXRlwzpKcQ6wRE Encoder_arduino_LabB_PIDOverRob;

#endif                             /* typedef_Encoder_arduino_LabB_PIDOverRob */

#ifndef struct_tag_pYcsb98J6JO1Ji7woCUjNC
#define struct_tag_pYcsb98J6JO1Ji7woCUjNC

struct tag_pYcsb98J6JO1Ji7woCUjNC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_pYcsb98J6JO1Ji7woCUjNC */

#ifndef typedef_soMPU6050Gyro_LabB_PIDOverRobot
#define typedef_soMPU6050Gyro_LabB_PIDOverRobot

typedef struct tag_pYcsb98J6JO1Ji7woCUjNC soMPU6050Gyro_LabB_PIDOverRobot;

#endif                             /* typedef_soMPU6050Gyro_LabB_PIDOverRobot */

#ifndef struct_tag_04b6x6tDldj9IrIH2gmbjG
#define struct_tag_04b6x6tDldj9IrIH2gmbjG

struct tag_04b6x6tDldj9IrIH2gmbjG
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_04b6x6tDldj9IrIH2gmbjG */

#ifndef typedef_b_arduinodriver_ArduinoDigitalI
#define typedef_b_arduinodriver_ArduinoDigitalI

typedef struct tag_04b6x6tDldj9IrIH2gmbjG b_arduinodriver_ArduinoDigitalI;

#endif                             /* typedef_b_arduinodriver_ArduinoDigitalI */

#ifndef struct_tag_AYWgtFscQm3mLUJYb3A20C
#define struct_tag_AYWgtFscQm3mLUJYb3A20C

struct tag_AYWgtFscQm3mLUJYb3A20C
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_arduinodriver_ArduinoDigitalI DigitalIODriverObj;
};

#endif                                 /* struct_tag_AYWgtFscQm3mLUJYb3A20C */

#ifndef typedef_codertarget_arduinobase_blocks_
#define typedef_codertarget_arduinobase_blocks_

typedef struct tag_AYWgtFscQm3mLUJYb3A20C codertarget_arduinobase_blocks_;

#endif                             /* typedef_codertarget_arduinobase_blocks_ */

#ifndef struct_tag_g1WX34VPn8QzVKQriB4HN
#define struct_tag_g1WX34VPn8QzVKQriB4HN

struct tag_g1WX34VPn8QzVKQriB4HN
{
  MW_Handle_Type MW_PWM_HANDLE;
};

#endif                                 /* struct_tag_g1WX34VPn8QzVKQriB4HN */

#ifndef typedef_g_matlabshared_ioclient_periphe
#define typedef_g_matlabshared_ioclient_periphe

typedef struct tag_g1WX34VPn8QzVKQriB4HN g_matlabshared_ioclient_periphe;

#endif                             /* typedef_g_matlabshared_ioclient_periphe */

#ifndef struct_tag_4eDVzK5FiryyCjvjjvrZGB
#define struct_tag_4eDVzK5FiryyCjvjjvrZGB

struct tag_4eDVzK5FiryyCjvjjvrZGB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  g_matlabshared_ioclient_periphe PWMDriverObj;
};

#endif                                 /* struct_tag_4eDVzK5FiryyCjvjjvrZGB */

#ifndef typedef_codertarget_arduinobase_inter_n
#define typedef_codertarget_arduinobase_inter_n

typedef struct tag_4eDVzK5FiryyCjvjjvrZGB codertarget_arduinobase_inter_n;

#endif                             /* typedef_codertarget_arduinobase_inter_n */

/* Parameters (default storage) */
typedef struct Parameters_LabB_PIDOverRobot_ Parameters_LabB_PIDOverRobot;

/* Forward declaration for rtModel */
typedef struct tag_RTM_LabB_PIDOverRobot RT_MODEL_LabB_PIDOverRobot;

#endif                               /* RTW_HEADER_LabB_PIDOverRobot_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
