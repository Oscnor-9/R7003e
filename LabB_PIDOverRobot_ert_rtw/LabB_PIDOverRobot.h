/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_PIDOverRobot.h
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

#ifndef RTW_HEADER_LabB_PIDOverRobot_h_
#define RTW_HEADER_LabB_PIDOverRobot_h_
#ifndef LabB_PIDOverRobot_COMMON_INCLUDES_
#define LabB_PIDOverRobot_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_SerialRead.h"
#include "MW_SerialWrite.h"
#include "encoder_arduino.h"
#include "MPU6050wrapper.h"
#include "MW_arduino_digitalio.h"
#include "MW_PWM.h"
#endif                                 /* LabB_PIDOverRobot_COMMON_INCLUDES_ */

#include "LabB_PIDOverRobot_types.h"
#include <stddef.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_interna obj; /* '<S5>/Serial Transmit' */
  Encoder_arduino_LabB_PIDOverRob obj_l;/* '<S3>/Encoder' */
  soMPU6050Gyro_LabB_PIDOverRobot obj_ls;/* '<S3>/Gyroscope' */
  codertarget_arduinobase_blocks_ obj_i;/* '<S68>/Digital Output1' */
  codertarget_arduinobase_inter_n obj_a;/* '<S68>/PWM' */
  real32_T DiscreteTimeIntegratorconvertfr;
    /* '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  real32_T Integrator_DSTATE;          /* '<S37>/Integrator' */
  real32_T Filter_DSTATE;              /* '<S32>/Filter' */
} D_Work_LabB_PIDOverRobot;

/* Parameters (default storage) */
struct Parameters_LabB_PIDOverRobot_ {
  real32_T fGyroBias;                  /* Variable: fGyroBias
                                        * Referenced by: '<S2>/gyro bias'
                                        */
  real32_T fWheelRadius;               /* Variable: fWheelRadius
                                        * Referenced by: '<S2>/convert to meters'
                                        */
  real32_T PIDController_D;            /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S31>/Derivative Gain'
                                        */
  real32_T PIDController_I;            /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S34>/Integral Gain'
                                        */
  real32_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S32>/Filter'
                               */
  real32_T PIDController_InitialConditio_n;
                              /* Mask Parameter: PIDController_InitialConditio_n
                               * Referenced by: '<S37>/Integrator'
                               */
  real32_T PIDController_Kb;           /* Mask Parameter: PIDController_Kb
                                        * Referenced by: '<S30>/Kb'
                                        */
  real32_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S44>/Saturation'
                               */
  real32_T PIDController_N;            /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S40>/Filter Coefficient'
                                        */
  real32_T PIDController_P;            /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S42>/Proportional Gain'
                                        */
  real32_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S44>/Saturation'
                               */
  real32_T M1V4LeftMotorDriverPWM6D8FST_Vs;
                              /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
                               * Referenced by: '<S68>/Saturation -Vsupply to Vsupply'
                               */
  real_T SerialTransmit_Protocol;      /* Expression: 0
                                        * Referenced by: '<S5>/Serial Transmit'
                                        */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S69>/Constant'
                                        */
  real32_T DiscreteTimeIntegratorconvertfr;
                          /* Computed Parameter: DiscreteTimeIntegratorconvertfr
                           * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T DiscreteTimeIntegratorconvert_o;
                          /* Computed Parameter: DiscreteTimeIntegratorconvert_o
                           * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T Integrator_gainval;         /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S37>/Integrator'
                                        */
  real32_T Filter_gainval;             /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S32>/Filter'
                                        */
  real32_T converttoradians_Gain;   /* Computed Parameter: converttoradians_Gain
                                     * Referenced by: '<S2>/convert to  radians'
                                     */
  real32_T converttoradianssec_Gain;
                                 /* Computed Parameter: converttoradianssec_Gain
                                  * Referenced by: '<S2>/convert to radians//sec'
                                  */
  real32_T SaturationVsupplytoVsupply_Lowe;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
                           * Referenced by: '<S68>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconverttou;
                          /* Computed Parameter: conversiontodutycycleconverttou
                           * Referenced by: '<S68>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
  uint8_T Constant_Value_p;            /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S5>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_LabB_PIDOverRobot {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern Parameters_LabB_PIDOverRobot LabB_PIDOverRobot_P;

/* Block states (default storage) */
extern D_Work_LabB_PIDOverRobot LabB_PIDOverRobot_DWork;

/* Model entry point functions */
extern void LabB_PIDOverRobot_initialize(void);
extern void LabB_PIDOverRobot_step(void);
extern void LabB_PIDOverRobot_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LabB_PIDOverRobot *const LabB_PIDOverRobot_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S54>/DTProp1' : Unused code path elimination
 * Block '<S54>/DTProp2' : Unused code path elimination
 * Block '<S55>/DTProp1' : Unused code path elimination
 * Block '<S55>/DTProp2' : Unused code path elimination
 * Block '<S56>/DTProp1' : Unused code path elimination
 * Block '<S56>/DTProp2' : Unused code path elimination
 * Block '<S57>/DTProp1' : Unused code path elimination
 * Block '<S57>/DTProp2' : Unused code path elimination
 * Block '<S58>/DTProp1' : Unused code path elimination
 * Block '<S58>/DTProp2' : Unused code path elimination
 * Block '<S59>/DTProp1' : Unused code path elimination
 * Block '<S59>/DTProp2' : Unused code path elimination
 * Block '<S60>/DTProp1' : Unused code path elimination
 * Block '<S60>/DTProp2' : Unused code path elimination
 * Block '<S61>/DTProp1' : Unused code path elimination
 * Block '<S61>/DTProp2' : Unused code path elimination
 * Block '<S62>/DTProp1' : Unused code path elimination
 * Block '<S62>/DTProp2' : Unused code path elimination
 * Block '<S63>/DTProp1' : Unused code path elimination
 * Block '<S63>/DTProp2' : Unused code path elimination
 * Block '<S64>/DTProp1' : Unused code path elimination
 * Block '<S64>/DTProp2' : Unused code path elimination
 * Block '<S65>/DTProp1' : Unused code path elimination
 * Block '<S65>/DTProp2' : Unused code path elimination
 * Block '<S66>/DTProp1' : Unused code path elimination
 * Block '<S66>/DTProp2' : Unused code path elimination
 * Block '<S67>/DTProp1' : Unused code path elimination
 * Block '<S67>/DTProp2' : Unused code path elimination
 * Block '<S54>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S55>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S56>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S57>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S58>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S59>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S60>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S61>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S62>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S63>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S64>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S65>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S66>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S67>/Modify Scaling Only' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LabB_PIDOverRobot'
 * '<S1>'   : 'LabB_PIDOverRobot/controller'
 * '<S2>'   : 'LabB_PIDOverRobot/measurement filter'
 * '<S3>'   : 'LabB_PIDOverRobot/plant'
 * '<S4>'   : 'LabB_PIDOverRobot/controller/PID Controller'
 * '<S5>'   : 'LabB_PIDOverRobot/controller/send through the serial port'
 * '<S6>'   : 'LabB_PIDOverRobot/controller/PID Controller/Anti-windup'
 * '<S7>'   : 'LabB_PIDOverRobot/controller/PID Controller/D Gain'
 * '<S8>'   : 'LabB_PIDOverRobot/controller/PID Controller/Filter'
 * '<S9>'   : 'LabB_PIDOverRobot/controller/PID Controller/Filter ICs'
 * '<S10>'  : 'LabB_PIDOverRobot/controller/PID Controller/I Gain'
 * '<S11>'  : 'LabB_PIDOverRobot/controller/PID Controller/Ideal P Gain'
 * '<S12>'  : 'LabB_PIDOverRobot/controller/PID Controller/Ideal P Gain Fdbk'
 * '<S13>'  : 'LabB_PIDOverRobot/controller/PID Controller/Integrator'
 * '<S14>'  : 'LabB_PIDOverRobot/controller/PID Controller/Integrator ICs'
 * '<S15>'  : 'LabB_PIDOverRobot/controller/PID Controller/N Copy'
 * '<S16>'  : 'LabB_PIDOverRobot/controller/PID Controller/N Gain'
 * '<S17>'  : 'LabB_PIDOverRobot/controller/PID Controller/P Copy'
 * '<S18>'  : 'LabB_PIDOverRobot/controller/PID Controller/Parallel P Gain'
 * '<S19>'  : 'LabB_PIDOverRobot/controller/PID Controller/Reset Signal'
 * '<S20>'  : 'LabB_PIDOverRobot/controller/PID Controller/Saturation'
 * '<S21>'  : 'LabB_PIDOverRobot/controller/PID Controller/Saturation Fdbk'
 * '<S22>'  : 'LabB_PIDOverRobot/controller/PID Controller/Sum'
 * '<S23>'  : 'LabB_PIDOverRobot/controller/PID Controller/Sum Fdbk'
 * '<S24>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tracking Mode'
 * '<S25>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tracking Mode Sum'
 * '<S26>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tsamp - Integral'
 * '<S27>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tsamp - Ngain'
 * '<S28>'  : 'LabB_PIDOverRobot/controller/PID Controller/postSat Signal'
 * '<S29>'  : 'LabB_PIDOverRobot/controller/PID Controller/preSat Signal'
 * '<S30>'  : 'LabB_PIDOverRobot/controller/PID Controller/Anti-windup/Back Calculation'
 * '<S31>'  : 'LabB_PIDOverRobot/controller/PID Controller/D Gain/Internal Parameters'
 * '<S32>'  : 'LabB_PIDOverRobot/controller/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S33>'  : 'LabB_PIDOverRobot/controller/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S34>'  : 'LabB_PIDOverRobot/controller/PID Controller/I Gain/Internal Parameters'
 * '<S35>'  : 'LabB_PIDOverRobot/controller/PID Controller/Ideal P Gain/Passthrough'
 * '<S36>'  : 'LabB_PIDOverRobot/controller/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S37>'  : 'LabB_PIDOverRobot/controller/PID Controller/Integrator/Discrete'
 * '<S38>'  : 'LabB_PIDOverRobot/controller/PID Controller/Integrator ICs/Internal IC'
 * '<S39>'  : 'LabB_PIDOverRobot/controller/PID Controller/N Copy/Disabled'
 * '<S40>'  : 'LabB_PIDOverRobot/controller/PID Controller/N Gain/Internal Parameters'
 * '<S41>'  : 'LabB_PIDOverRobot/controller/PID Controller/P Copy/Disabled'
 * '<S42>'  : 'LabB_PIDOverRobot/controller/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S43>'  : 'LabB_PIDOverRobot/controller/PID Controller/Reset Signal/Disabled'
 * '<S44>'  : 'LabB_PIDOverRobot/controller/PID Controller/Saturation/Enabled'
 * '<S45>'  : 'LabB_PIDOverRobot/controller/PID Controller/Saturation Fdbk/Disabled'
 * '<S46>'  : 'LabB_PIDOverRobot/controller/PID Controller/Sum/Sum_PID'
 * '<S47>'  : 'LabB_PIDOverRobot/controller/PID Controller/Sum Fdbk/Disabled'
 * '<S48>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tracking Mode/Disabled'
 * '<S49>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S50>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S51>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S52>'  : 'LabB_PIDOverRobot/controller/PID Controller/postSat Signal/Forward_Path'
 * '<S53>'  : 'LabB_PIDOverRobot/controller/PID Controller/preSat Signal/Forward_Path'
 * '<S54>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits'
 * '<S55>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits1'
 * '<S56>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits10'
 * '<S57>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits11'
 * '<S58>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits12'
 * '<S59>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits13'
 * '<S60>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits2'
 * '<S61>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits3'
 * '<S62>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits4'
 * '<S63>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits5'
 * '<S64>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits6'
 * '<S65>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits7'
 * '<S66>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits8'
 * '<S67>'  : 'LabB_PIDOverRobot/controller/send through the serial port/Extract Bits9'
 * '<S68>'  : 'LabB_PIDOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST'
 * '<S69>'  : 'LabB_PIDOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST/Compare To Zero'
 */
#endif                                 /* RTW_HEADER_LabB_PIDOverRobot_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
