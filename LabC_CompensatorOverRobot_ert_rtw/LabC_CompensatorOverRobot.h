/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabC_CompensatorOverRobot.h
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

#ifndef RTW_HEADER_LabC_CompensatorOverRobot_h_
#define RTW_HEADER_LabC_CompensatorOverRobot_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef LabC_CompensatorOverRobot_COMMON_INCLUDES_
#define LabC_CompensatorOverRobot_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_SerialRead.h"
#include "MW_SerialWrite.h"
#include "encoder_arduino.h"
#include "MPU6050wrapper.h"
#include "MW_arduino_digitalio.h"
#include "MW_PWM.h"
#endif                          /* LabC_CompensatorOverRobot_COMMON_INCLUDES_ */

#include "LabC_CompensatorOverRobot_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real32_T Add2[4];                    /* '<S5>/Add2' */
  uint8_T dataIn[15];
  real32_T Add[3];                     /* '<S5>/Add' */
  real32_T Add3[4];                    /* '<S5>/Add3' */
  real_T FromWs;                       /* '<S4>/FromWs' */
  real32_T Gain10[2];
  int16_T out[3];
  real32_T Gain3;                      /* '<S1>/Gain3' */
  real32_T converttometers;
  real32_T Sum1;
  real32_T rtb_Gain8_idx_1;
  real32_T rtb_Gain8_idx_2;
  real32_T rtb_Gain8_idx_3;
  real32_T rtb_Add1_idx_0;
  real32_T rtb_Add1_idx_2;
  int32_T rtb_Encoder_m;
} BlockIO_LabC_CompensatorOverRob;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_o obj; /* '<S10>/Serial Transmit' */
  Encoder_arduino_LabC_Compensato obj_g;/* '<S3>/Encoder' */
  soMPU6050Gyro_LabC_CompensatorO obj_gi;/* '<S3>/Gyroscope' */
  codertarget_arduinobase_blocks_ obj_o;/* '<S54>/Digital Output1' */
  codertarget_arduinobase_interna obj_ot;/* '<S54>/PWM' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S4>/FromWs' */

  real32_T UD_DSTATE;                  /* '<S6>/UD' */
  real32_T DiscreteTimeIntegratorconvertfr;
    /* '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  real32_T UD_DSTATE_o;                /* '<S7>/UD' */
  real32_T Internal_1_1_DSTATE;        /* '<S8>/Internal_1_1' */
  real32_T Internal_2_2_DSTATE;        /* '<S8>/Internal_2_2' */
  real32_T Internal_3_3_DSTATE;        /* '<S8>/Internal_3_3' */
  real32_T Internal_4_4_DSTATE;        /* '<S8>/Internal_4_4' */
  real32_T Internal_1_1_DSTATE_n;      /* '<S9>/Internal_1_1' */
  real32_T Internal_2_2_DSTATE_o;      /* '<S9>/Internal_2_2' */
  real32_T Internal_3_3_DSTATE_o;      /* '<S9>/Internal_3_3' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S4>/FromWs' */
} D_Work_LabC_CompensatorOverRobo;

/* Parameters (default storage) */
struct Parameters_LabC_CompensatorOver_ {
  real32_T Ad[16];                     /* Variable: Ad
                                        * Referenced by: '<S5>/Gain7'
                                        */
  real32_T Bd[4];                      /* Variable: Bd
                                        * Referenced by: '<S5>/Gain8'
                                        */
  real32_T Cd[8];                      /* Variable: Cd
                                        * Referenced by: '<S5>/Gain10'
                                        */
  real32_T Kd[4];                      /* Variable: Kd
                                        * Referenced by: '<S1>/controller'
                                        */
  real32_T Ld[8];                      /* Variable: Ld
                                        * Referenced by: '<S5>/Gain9'
                                        */
  real32_T Md1[9];                     /* Variable: Md1
                                        * Referenced by: '<S5>/Gain'
                                        */
  real32_T Md2[3];                     /* Variable: Md2
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real32_T Md3[3];                     /* Variable: Md3
                                        * Referenced by: '<S5>/Gain2'
                                        */
  real32_T Md4[3];                     /* Variable: Md4
                                        * Referenced by: '<S5>/Gain3'
                                        */
  real32_T Md5[3];                     /* Variable: Md5
                                        * Referenced by: '<S5>/Gain4'
                                        */
  real32_T Md6[4];                     /* Variable: Md6
                                        * Referenced by: '<S5>/Gain5'
                                        */
  real32_T Md7[12];                    /* Variable: Md7
                                        * Referenced by: '<S5>/Gain6'
                                        */
  real32_T Nxd;                        /* Variable: Nxd
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real32_T fGyroBias;                  /* Variable: fGyroBias
                                        * Referenced by: '<S2>/gyro bias'
                                        */
  real32_T fWheelRadius;               /* Variable: fWheelRadius
                                        * Referenced by: '<S2>/convert to meters'
                                        */
  real32_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S6>/UD'
                               */
  real32_T DiscreteDerivative_ICPrevScal_g;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_g
                               * Referenced by: '<S7>/UD'
                               */
  real32_T M1V4LeftMotorDriverPWM6D8FST_Vs;
                              /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
                               * Referenced by: '<S54>/Saturation -Vsupply to Vsupply'
                               */
  real_T SerialTransmit_Protocol;      /* Expression: 0
                                        * Referenced by: '<S10>/Serial Transmit'
                                        */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S55>/Constant'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S1>/Gain4'
                                        */
  real32_T converttoradians_Gain;   /* Computed Parameter: converttoradians_Gain
                                     * Referenced by: '<S2>/convert to  radians'
                                     */
  real32_T TSamp_WtEt;                 /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S6>/TSamp'
                                        */
  real32_T DiscreteTimeIntegratorconvertfr;
                          /* Computed Parameter: DiscreteTimeIntegratorconvertfr
                           * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T DiscreteTimeIntegratorconvert_o;
                          /* Computed Parameter: DiscreteTimeIntegratorconvert_o
                           * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T TSamp_WtEt_j;               /* Computed Parameter: TSamp_WtEt_j
                                        * Referenced by: '<S7>/TSamp'
                                        */
  real32_T Internal_1_1_A;             /* Computed Parameter: Internal_1_1_A
                                        * Referenced by: '<S8>/Internal_1_1'
                                        */
  real32_T Internal_1_1_C;             /* Computed Parameter: Internal_1_1_C
                                        * Referenced by: '<S8>/Internal_1_1'
                                        */
  real32_T Internal_1_1_InitialCondition;
                            /* Computed Parameter: Internal_1_1_InitialCondition
                             * Referenced by: '<S8>/Internal_1_1'
                             */
  real32_T Internal_1_2_InitialCondition;
                            /* Computed Parameter: Internal_1_2_InitialCondition
                             * Referenced by: '<S8>/Internal_1_2'
                             */
  real32_T Internal_1_3_InitialCondition;
                            /* Computed Parameter: Internal_1_3_InitialCondition
                             * Referenced by: '<S8>/Internal_1_3'
                             */
  real32_T Internal_1_4_InitialCondition;
                            /* Computed Parameter: Internal_1_4_InitialCondition
                             * Referenced by: '<S8>/Internal_1_4'
                             */
  real32_T Internal_2_1_InitialCondition;
                            /* Computed Parameter: Internal_2_1_InitialCondition
                             * Referenced by: '<S8>/Internal_2_1'
                             */
  real32_T Internal_2_2_A;             /* Computed Parameter: Internal_2_2_A
                                        * Referenced by: '<S8>/Internal_2_2'
                                        */
  real32_T Internal_2_2_C;             /* Computed Parameter: Internal_2_2_C
                                        * Referenced by: '<S8>/Internal_2_2'
                                        */
  real32_T Internal_2_2_InitialCondition;
                            /* Computed Parameter: Internal_2_2_InitialCondition
                             * Referenced by: '<S8>/Internal_2_2'
                             */
  real32_T Internal_2_3_InitialCondition;
                            /* Computed Parameter: Internal_2_3_InitialCondition
                             * Referenced by: '<S8>/Internal_2_3'
                             */
  real32_T Internal_2_4_InitialCondition;
                            /* Computed Parameter: Internal_2_4_InitialCondition
                             * Referenced by: '<S8>/Internal_2_4'
                             */
  real32_T Internal_3_1_InitialCondition;
                            /* Computed Parameter: Internal_3_1_InitialCondition
                             * Referenced by: '<S8>/Internal_3_1'
                             */
  real32_T Internal_3_2_InitialCondition;
                            /* Computed Parameter: Internal_3_2_InitialCondition
                             * Referenced by: '<S8>/Internal_3_2'
                             */
  real32_T Internal_3_3_A;             /* Computed Parameter: Internal_3_3_A
                                        * Referenced by: '<S8>/Internal_3_3'
                                        */
  real32_T Internal_3_3_C;             /* Computed Parameter: Internal_3_3_C
                                        * Referenced by: '<S8>/Internal_3_3'
                                        */
  real32_T Internal_3_3_InitialCondition;
                            /* Computed Parameter: Internal_3_3_InitialCondition
                             * Referenced by: '<S8>/Internal_3_3'
                             */
  real32_T Internal_3_4_InitialCondition;
                            /* Computed Parameter: Internal_3_4_InitialCondition
                             * Referenced by: '<S8>/Internal_3_4'
                             */
  real32_T Internal_4_1_InitialCondition;
                            /* Computed Parameter: Internal_4_1_InitialCondition
                             * Referenced by: '<S8>/Internal_4_1'
                             */
  real32_T Internal_4_2_InitialCondition;
                            /* Computed Parameter: Internal_4_2_InitialCondition
                             * Referenced by: '<S8>/Internal_4_2'
                             */
  real32_T Internal_4_3_InitialCondition;
                            /* Computed Parameter: Internal_4_3_InitialCondition
                             * Referenced by: '<S8>/Internal_4_3'
                             */
  real32_T Internal_4_4_A;             /* Computed Parameter: Internal_4_4_A
                                        * Referenced by: '<S8>/Internal_4_4'
                                        */
  real32_T Internal_4_4_C;             /* Computed Parameter: Internal_4_4_C
                                        * Referenced by: '<S8>/Internal_4_4'
                                        */
  real32_T Internal_4_4_InitialCondition;
                            /* Computed Parameter: Internal_4_4_InitialCondition
                             * Referenced by: '<S8>/Internal_4_4'
                             */
  real32_T Internal_1_1_A_e;           /* Computed Parameter: Internal_1_1_A_e
                                        * Referenced by: '<S9>/Internal_1_1'
                                        */
  real32_T Internal_1_1_C_i;           /* Computed Parameter: Internal_1_1_C_i
                                        * Referenced by: '<S9>/Internal_1_1'
                                        */
  real32_T Internal_1_1_InitialCondition_j;
                          /* Computed Parameter: Internal_1_1_InitialCondition_j
                           * Referenced by: '<S9>/Internal_1_1'
                           */
  real32_T Internal_1_2_InitialCondition_o;
                          /* Computed Parameter: Internal_1_2_InitialCondition_o
                           * Referenced by: '<S9>/Internal_1_2'
                           */
  real32_T Internal_1_3_InitialCondition_o;
                          /* Computed Parameter: Internal_1_3_InitialCondition_o
                           * Referenced by: '<S9>/Internal_1_3'
                           */
  real32_T Internal_2_1_InitialCondition_h;
                          /* Computed Parameter: Internal_2_1_InitialCondition_h
                           * Referenced by: '<S9>/Internal_2_1'
                           */
  real32_T Internal_2_2_A_k;           /* Computed Parameter: Internal_2_2_A_k
                                        * Referenced by: '<S9>/Internal_2_2'
                                        */
  real32_T Internal_2_2_C_n;           /* Computed Parameter: Internal_2_2_C_n
                                        * Referenced by: '<S9>/Internal_2_2'
                                        */
  real32_T Internal_2_2_InitialCondition_f;
                          /* Computed Parameter: Internal_2_2_InitialCondition_f
                           * Referenced by: '<S9>/Internal_2_2'
                           */
  real32_T Internal_2_3_InitialCondition_d;
                          /* Computed Parameter: Internal_2_3_InitialCondition_d
                           * Referenced by: '<S9>/Internal_2_3'
                           */
  real32_T Internal_3_1_InitialCondition_a;
                          /* Computed Parameter: Internal_3_1_InitialCondition_a
                           * Referenced by: '<S9>/Internal_3_1'
                           */
  real32_T Internal_3_2_InitialCondition_i;
                          /* Computed Parameter: Internal_3_2_InitialCondition_i
                           * Referenced by: '<S9>/Internal_3_2'
                           */
  real32_T Internal_3_3_A_g;           /* Computed Parameter: Internal_3_3_A_g
                                        * Referenced by: '<S9>/Internal_3_3'
                                        */
  real32_T Internal_3_3_C_i;           /* Computed Parameter: Internal_3_3_C_i
                                        * Referenced by: '<S9>/Internal_3_3'
                                        */
  real32_T Internal_3_3_InitialCondition_e;
                          /* Computed Parameter: Internal_3_3_InitialCondition_e
                           * Referenced by: '<S9>/Internal_3_3'
                           */
  real32_T converttoradianssec_Gain;
                                 /* Computed Parameter: converttoradianssec_Gain
                                  * Referenced by: '<S2>/convert to radians//sec'
                                  */
  real32_T SaturationVsupplytoVsupply_Lowe;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
                           * Referenced by: '<S54>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconverttou;
                          /* Computed Parameter: conversiontodutycycleconverttou
                           * Referenced by: '<S54>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S5>/Manual Switch'
                               */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S5>/Manual Switch1'
                              */
  uint8_T Constant_Value_i;            /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S10>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_LabC_CompensatorOverRob {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern Parameters_LabC_CompensatorOver LabC_CompensatorOverRobot_P;

/* Block signals (default storage) */
extern BlockIO_LabC_CompensatorOverRob LabC_CompensatorOverRobot_B;

/* Block states (default storage) */
extern D_Work_LabC_CompensatorOverRobo LabC_CompensatorOverRobot_DWork;

/* Model entry point functions */
extern void LabC_CompensatorOverRobot_initialize(void);
extern void LabC_CompensatorOverRobot_step(void);
extern void LabC_CompensatorOverRobot_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LabC_CompensatorOverRo *const LabC_CompensatorOverRobot_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S6>/Data Type Duplicate' : Unused code path elimination
 * Block '<S7>/Data Type Duplicate' : Unused code path elimination
 * Block '<S40>/DTProp1' : Unused code path elimination
 * Block '<S40>/DTProp2' : Unused code path elimination
 * Block '<S41>/DTProp1' : Unused code path elimination
 * Block '<S41>/DTProp2' : Unused code path elimination
 * Block '<S42>/DTProp1' : Unused code path elimination
 * Block '<S42>/DTProp2' : Unused code path elimination
 * Block '<S43>/DTProp1' : Unused code path elimination
 * Block '<S43>/DTProp2' : Unused code path elimination
 * Block '<S44>/DTProp1' : Unused code path elimination
 * Block '<S44>/DTProp2' : Unused code path elimination
 * Block '<S45>/DTProp1' : Unused code path elimination
 * Block '<S45>/DTProp2' : Unused code path elimination
 * Block '<S46>/DTProp1' : Unused code path elimination
 * Block '<S46>/DTProp2' : Unused code path elimination
 * Block '<S47>/DTProp1' : Unused code path elimination
 * Block '<S47>/DTProp2' : Unused code path elimination
 * Block '<S48>/DTProp1' : Unused code path elimination
 * Block '<S48>/DTProp2' : Unused code path elimination
 * Block '<S49>/DTProp1' : Unused code path elimination
 * Block '<S49>/DTProp2' : Unused code path elimination
 * Block '<S50>/DTProp1' : Unused code path elimination
 * Block '<S50>/DTProp2' : Unused code path elimination
 * Block '<S51>/DTProp1' : Unused code path elimination
 * Block '<S51>/DTProp2' : Unused code path elimination
 * Block '<S52>/DTProp1' : Unused code path elimination
 * Block '<S52>/DTProp2' : Unused code path elimination
 * Block '<S53>/DTProp1' : Unused code path elimination
 * Block '<S53>/DTProp2' : Unused code path elimination
 * Block '<S40>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S41>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S42>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S43>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S44>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S45>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S46>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S47>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S48>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S49>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S50>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S51>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S52>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S53>/Modify Scaling Only' : Eliminate redundant data type conversion
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
 * '<Root>' : 'LabC_CompensatorOverRobot'
 * '<S1>'   : 'LabC_CompensatorOverRobot/controller'
 * '<S2>'   : 'LabC_CompensatorOverRobot/measurement filter'
 * '<S3>'   : 'LabC_CompensatorOverRobot/plant'
 * '<S4>'   : 'LabC_CompensatorOverRobot/reference'
 * '<S5>'   : 'LabC_CompensatorOverRobot/controller/observer'
 * '<S6>'   : 'LabC_CompensatorOverRobot/controller/observer/Discrete Derivative'
 * '<S7>'   : 'LabC_CompensatorOverRobot/controller/observer/Discrete Derivative '
 * '<S8>'   : 'LabC_CompensatorOverRobot/controller/observer/LTI System'
 * '<S9>'   : 'LabC_CompensatorOverRobot/controller/observer/integrator'
 * '<S10>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port'
 * '<S11>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_1_1'
 * '<S12>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_1_2'
 * '<S13>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_1_3'
 * '<S14>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_1_4'
 * '<S15>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_2_1'
 * '<S16>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_2_2'
 * '<S17>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_2_3'
 * '<S18>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_2_4'
 * '<S19>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_3_1'
 * '<S20>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_3_2'
 * '<S21>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_3_3'
 * '<S22>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_3_4'
 * '<S23>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_4_1'
 * '<S24>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_4_2'
 * '<S25>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_4_3'
 * '<S26>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_4_4'
 * '<S27>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/Input Delay'
 * '<S28>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/Output Delay'
 * '<S29>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_1_1'
 * '<S30>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_1_2'
 * '<S31>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_1_3'
 * '<S32>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_2_1'
 * '<S33>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_2_2'
 * '<S34>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_2_3'
 * '<S35>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_3_1'
 * '<S36>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_3_2'
 * '<S37>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_3_3'
 * '<S38>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/Input Delay'
 * '<S39>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/Output Delay'
 * '<S40>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits'
 * '<S41>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits1'
 * '<S42>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits10'
 * '<S43>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits11'
 * '<S44>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits12'
 * '<S45>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits13'
 * '<S46>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits2'
 * '<S47>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits3'
 * '<S48>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits4'
 * '<S49>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits5'
 * '<S50>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits6'
 * '<S51>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits7'
 * '<S52>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits8'
 * '<S53>'  : 'LabC_CompensatorOverRobot/controller/observer/send through the serial port/Extract Bits9'
 * '<S54>'  : 'LabC_CompensatorOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST'
 * '<S55>'  : 'LabC_CompensatorOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST/Compare To Zero'
 */
#endif                             /* RTW_HEADER_LabC_CompensatorOverRobot_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
