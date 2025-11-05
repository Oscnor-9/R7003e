/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_TuneTheGyro.c
 *
 * Code generated for Simulink model 'LabB_TuneTheGyro'.
 *
 * Model version                  : 1.565
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Thu Dec 28 12:46:30 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_TuneTheGyro.h"
#include "rtwtypes.h"
#include "LabB_TuneTheGyro_private.h"
#include <string.h>

/* Block signals (default storage) */
BlockIO_LabB_TuneTheGyro LabB_TuneTheGyro_B;

/* Block states (default storage) */
D_Work_LabB_TuneTheGyro LabB_TuneTheGyro_DWork;

/* Real-time model */
static RT_MODEL_LabB_TuneTheGyro LabB_TuneTheGyro_M_;
RT_MODEL_LabB_TuneTheGyro *const LabB_TuneTheGyro_M = &LabB_TuneTheGyro_M_;

/* Model step function */
void LabB_TuneTheGyro_step(void)
{
  int16_T out[3];

  /* Reset subsysRan breadcrumbs */
  srClearBC(LabB_TuneTheGyro_DWork.measurementfilter_SubsysRanBC);

  /* MATLABSystem: '<Root>/Gyroscope' */
  /*  initialize output to a single (float) with the value zero */
  /* 'soMPU6050Gyro:59' out = int16(zeros(3,1)); */
  /* 'soMPU6050Gyro:60' if coder.target('Rtw') */
  /*  done only for code gen */
  /* 'soMPU6050Gyro:61' coder.cinclude('MPU6050wrapper.h'); */
  /*  get the current value of the sensor */
  /* 'soMPU6050Gyro:63' coder.ceval('MPU6050Gyro_Read', coder.wref(out)); */
  MPU6050Gyro_Read(&out[0]);

  /* DataTypeConversion: '<Root>/Data Type  Conversion1' incorporates:
   *  MATLABSystem: '<Root>/Gyroscope'
   */
  /*  pull the data appart */
  /* 'soMPU6050Gyro:68' xvel = out(1); */
  /* 'soMPU6050Gyro:69' yvel = out(2); */
  /* 'soMPU6050Gyro:70' zvel = out(3); */
  LabB_TuneTheGyro_B.DataTypeConversion1 = out[0];

  /* Outputs for Enabled SubSystem: '<Root>/measurement filter' incorporates:
   *  EnablePort: '<S2>/enable the code below only when the external boolean input is true '
   */
  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Clock: '<Root>/Clock'
   *  Constant: '<S1>/Constant'
   */
  if (LabB_TuneTheGyro_M->Timing.t[0] >
      LabB_TuneTheGyro_P.calibratethegyrobeforeXsecondss) {
    srUpdateBC(LabB_TuneTheGyro_DWork.measurementfilter_SubsysRanBC);
  }

  /* End of RelationalOperator: '<S1>/Compare' */
  /* End of Outputs for SubSystem: '<Root>/measurement filter' */
  {                                    /* Sample time: [0.0s, 0.0s] */
    extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
    extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
      ((LabB_TuneTheGyro_M->Timing.clockTick0 * 1) + 0)
      ;

    /* Trigger External Mode event */
    errorCode = extmodeEvent(0,currentTime);
    if (errorCode != EXTMODE_SUCCESS) {
      /* Code to handle External Mode event errors
         may be added here */
    }
  }

  {                                    /* Sample time: [0.01s, 0.0s] */
    extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
    extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
      ((LabB_TuneTheGyro_M->Timing.clockTick1 * 1) + 0)
      ;

    /* Trigger External Mode event */
    errorCode = extmodeEvent(1,currentTime);
    if (errorCode != EXTMODE_SUCCESS) {
      /* Code to handle External Mode event errors
         may be added here */
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  LabB_TuneTheGyro_M->Timing.t[0] =
    ((time_T)(++LabB_TuneTheGyro_M->Timing.clockTick0)) *
    LabB_TuneTheGyro_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    LabB_TuneTheGyro_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void LabB_TuneTheGyro_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)LabB_TuneTheGyro_M, 0,
                sizeof(RT_MODEL_LabB_TuneTheGyro));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&LabB_TuneTheGyro_M->solverInfo,
                          &LabB_TuneTheGyro_M->Timing.simTimeStep);
    rtsiSetTPtr(&LabB_TuneTheGyro_M->solverInfo, &rtmGetTPtr(LabB_TuneTheGyro_M));
    rtsiSetStepSizePtr(&LabB_TuneTheGyro_M->solverInfo,
                       &LabB_TuneTheGyro_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&LabB_TuneTheGyro_M->solverInfo, (&rtmGetErrorStatus
      (LabB_TuneTheGyro_M)));
    rtsiSetRTModelPtr(&LabB_TuneTheGyro_M->solverInfo, LabB_TuneTheGyro_M);
  }

  rtsiSetSimTimeStep(&LabB_TuneTheGyro_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&LabB_TuneTheGyro_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(LabB_TuneTheGyro_M, &LabB_TuneTheGyro_M->Timing.tArray[0]);
  rtmSetTFinal(LabB_TuneTheGyro_M, -1);
  LabB_TuneTheGyro_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  LabB_TuneTheGyro_M->Sizes.checksums[0] = (1580347050U);
  LabB_TuneTheGyro_M->Sizes.checksums[1] = (2503563972U);
  LabB_TuneTheGyro_M->Sizes.checksums[2] = (324472669U);
  LabB_TuneTheGyro_M->Sizes.checksums[3] = (1287338995U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    LabB_TuneTheGyro_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &LabB_TuneTheGyro_DWork.measurementfilter_SubsysRanBC;
    rteiSetModelMappingInfoPtr(LabB_TuneTheGyro_M->extModeInfo,
      &LabB_TuneTheGyro_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(LabB_TuneTheGyro_M->extModeInfo,
                        LabB_TuneTheGyro_M->Sizes.checksums);
    rteiSetTPtr(LabB_TuneTheGyro_M->extModeInfo, rtmGetTPtr(LabB_TuneTheGyro_M));
  }

  /* block I/O */
  (void) memset(((void *) &LabB_TuneTheGyro_B), 0,
                sizeof(BlockIO_LabB_TuneTheGyro));

  /* states (dwork) */
  (void) memset((void *)&LabB_TuneTheGyro_DWork, 0,
                sizeof(D_Work_LabB_TuneTheGyro));

  /* Start for MATLABSystem: '<Root>/Gyroscope' */
  /*  Constructor */
  /* 'soMPU6050Gyro:27' coder.allowpcode('plain'); */
  /* 'soMPU6050Gyro:1' matlab.System */
  /* 'soMPU6050Gyro:1' coder.ExternalDependency */
  /*  Support name-value pair arguments when constructing the object. */
  /* 'soMPU6050Gyro:30' setProperties(obj,nargin,varargin{:}); */
  LabB_TuneTheGyro_DWork.obj.matlabCodegenIsDeleted = false;

  /* 'soMPU6050Gyro:34' coder.extrinsic('sprintf'); */
  /*  Do not generate code for sprintf */
  /* 'soMPU6050Gyro:35' validateattributes(value,... */
  /* 'soMPU6050Gyro:36'                 {'numeric'},... */
  /* 'soMPU6050Gyro:37'                 {'real','nonnegative','integer','scalar'},... */
  /* 'soMPU6050Gyro:38'                 '', ... */
  /* 'soMPU6050Gyro:39'                 'DLPFmode'); */
  /* 'soMPU6050Gyro:40' obj.DLPFmode = value; */
  LabB_TuneTheGyro_DWork.obj.isInitialized = 1L;

  /* 'soMPU6050Gyro:46' if coder.target('Rtw') */
  /*  done only for code gen */
  /* 'soMPU6050Gyro:47' coder.cinclude('MPU6050wrapper.h'); */
  /*  initialize the sensor */
  /*                  coder.ceval('MPU6050Accel_Init'); */
  /* 'soMPU6050Gyro:51' coder.ceval('MPU6050Gyro_Init', obj.DLPFmode); */
  MPU6050Gyro_Init(0.0);
  LabB_TuneTheGyro_DWork.obj.isSetupComplete = true;
}

/* Model terminate function */
void LabB_TuneTheGyro_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Gyroscope' */
  if (!LabB_TuneTheGyro_DWork.obj.matlabCodegenIsDeleted) {
    LabB_TuneTheGyro_DWork.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Gyroscope' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
