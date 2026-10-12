#include "cpptest.h"

/**
 * This file contains user stub definitions.
/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */

/** User stub definition for function: int FanDriver_Off(void) */
EXTERN_C_LINKAGE int FanDriver_Off () ;
EXTERN_C_LINKAGE int CppTest_Stub_FanDriver_Off (void) 
{
    CPPTEST_STUB_CALLED("FanDriver_Off");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = FanDriver_Off();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = FanDriver_Off();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int FanDriver_On(void) */
EXTERN_C_LINKAGE int FanDriver_On () ;
EXTERN_C_LINKAGE int CppTest_Stub_FanDriver_On (void) 
{
    CPPTEST_STUB_CALLED("FanDriver_On");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_On", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = FanDriver_On();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = FanDriver_On();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int HeaterDriver_IsOn(void) */
EXTERN_C_LINKAGE int HeaterDriver_IsOn () ;
EXTERN_C_LINKAGE int CppTest_Stub_HeaterDriver_IsOn (void) 
{
    CPPTEST_STUB_CALLED("HeaterDriver_IsOn");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_IsOn", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HeaterDriver_IsOn();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HeaterDriver_IsOn();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int HeaterDriver_Off(void) */
EXTERN_C_LINKAGE int HeaterDriver_Off () ;
EXTERN_C_LINKAGE int CppTest_Stub_HeaterDriver_Off (void) 
{
    CPPTEST_STUB_CALLED("HeaterDriver_Off");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HeaterDriver_Off();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HeaterDriver_Off();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int HeaterDriver_On(void) */
EXTERN_C_LINKAGE int HeaterDriver_On () ;
EXTERN_C_LINKAGE int CppTest_Stub_HeaterDriver_On (void) 
{
    CPPTEST_STUB_CALLED("HeaterDriver_On");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_On", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HeaterDriver_On();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HeaterDriver_On();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: unsigned long Clock_GetSeconds(void) */
EXTERN_C_LINKAGE unsigned long Clock_GetSeconds () ;
EXTERN_C_LINKAGE unsigned long CppTest_Stub_Clock_GetSeconds (void) 
{
    CPPTEST_STUB_CALLED("Clock_GetSeconds");

    unsigned long __return = 0UL;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, unsigned long* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = Clock_GetSeconds();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(unsigned long* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = Clock_GetSeconds();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
#include <stdio.h>
#include <synchapi.h>
#include <sysinfoapi.h>
#include "alarm_manager.h"
#include "config.h"
#include "controller.h"
#include "sensor_manager.h"


/** User stub definition for function: int printf(const char *, ...) */
EXTERN_C_LINKAGE int printf (const char * __format, ...) ;
EXTERN_C_LINKAGE int CppTest_Stub_printf (const char * __format, ...) 
{
    CPPTEST_STUB_CALLED("printf");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return, const char * __format)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("printf", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return, const char * __format);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, __format);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: ULONGLONG GetTickCount64(void) */
EXTERN_C_LINKAGE ULONGLONG GetTickCount64 () ;
EXTERN_C_LINKAGE ULONGLONG CppTest_Stub_GetTickCount64 (void) 
{
    CPPTEST_STUB_CALLED("GetTickCount64");

    ULONGLONG __return = (unsigned long long)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, ULONGLONG* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("GetTickCount64", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = GetTickCount64();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(ULONGLONG* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = GetTickCount64();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: void Sleep(DWORD) */
EXTERN_C_LINKAGE void Sleep (DWORD dwMilliseconds) ;
EXTERN_C_LINKAGE void CppTest_Stub_Sleep (DWORD dwMilliseconds) 
{
    CPPTEST_STUB_CALLED("Sleep");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, DWORD dwMilliseconds)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Sleep", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     Sleep(dwMilliseconds);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(DWORD dwMilliseconds);
        CPPTEST_STUB_INVOKE_CALLBACK(dwMilliseconds);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        Sleep(dwMilliseconds);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void BuzzerDriver_Disable(void) */
EXTERN_C_LINKAGE void BuzzerDriver_Disable () ;
EXTERN_C_LINKAGE void CppTest_Stub_BuzzerDriver_Disable (void) 
{
    CPPTEST_STUB_CALLED("BuzzerDriver_Disable");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BuzzerDriver_Disable", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     BuzzerDriver_Disable();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        BuzzerDriver_Disable();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void BuzzerDriver_Enable(void) */
EXTERN_C_LINKAGE void BuzzerDriver_Enable () ;
EXTERN_C_LINKAGE void CppTest_Stub_BuzzerDriver_Enable (void) 
{
    CPPTEST_STUB_CALLED("BuzzerDriver_Enable");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BuzzerDriver_Enable", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     BuzzerDriver_Enable();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        BuzzerDriver_Enable();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void Clock_DelayMs(unsigned int) */
EXTERN_C_LINKAGE void Clock_DelayMs (unsigned milliseconds) ;
EXTERN_C_LINKAGE void CppTest_Stub_Clock_DelayMs (unsigned milliseconds) 
{
    CPPTEST_STUB_CALLED("Clock_DelayMs");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, unsigned milliseconds)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Clock_DelayMs", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     Clock_DelayMs(milliseconds);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(unsigned milliseconds);
        CPPTEST_STUB_INVOKE_CALLBACK(milliseconds);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        Clock_DelayMs(milliseconds);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void DisplayDriver_ClearAlarm(void) */
EXTERN_C_LINKAGE void DisplayDriver_ClearAlarm () ;
EXTERN_C_LINKAGE void CppTest_Stub_DisplayDriver_ClearAlarm (void) 
{
    CPPTEST_STUB_CALLED("DisplayDriver_ClearAlarm");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("DisplayDriver_ClearAlarm", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     DisplayDriver_ClearAlarm();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        DisplayDriver_ClearAlarm();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void DisplayDriver_ShowAlarm(int) */
EXTERN_C_LINKAGE void DisplayDriver_ShowAlarm (int alarmCode) ;
EXTERN_C_LINKAGE void CppTest_Stub_DisplayDriver_ShowAlarm (int alarmCode) 
{
    CPPTEST_STUB_CALLED("DisplayDriver_ShowAlarm");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int alarmCode)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("DisplayDriver_ShowAlarm", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     DisplayDriver_ShowAlarm(alarmCode);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int alarmCode);
        CPPTEST_STUB_INVOKE_CALLBACK(alarmCode);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        DisplayDriver_ShowAlarm(alarmCode);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: int FanDriver_IsOn(void) */
EXTERN_C_LINKAGE int FanDriver_IsOn () ;
EXTERN_C_LINKAGE int CppTest_Stub_FanDriver_IsOn (void) 
{
    CPPTEST_STUB_CALLED("FanDriver_IsOn");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_IsOn", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = FanDriver_IsOn();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = FanDriver_IsOn();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int HumiditySensor_ReadPercent(float *) */
EXTERN_C_LINKAGE int HumiditySensor_ReadPercent (float * humidity) ;
EXTERN_C_LINKAGE int CppTest_Stub_HumiditySensor_ReadPercent (float * humidity) 
{
    CPPTEST_STUB_CALLED("HumiditySensor_ReadPercent");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return, float * humidity)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HumiditySensor_ReadPercent", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HumiditySensor_ReadPercent(humidity);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return, float * humidity);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, humidity);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HumiditySensor_ReadPercent(humidity);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: void LoggerDriver_LogAlarm(int) */
EXTERN_C_LINKAGE void LoggerDriver_LogAlarm (int alarmCode) ;
EXTERN_C_LINKAGE void CppTest_Stub_LoggerDriver_LogAlarm (int alarmCode) 
{
    CPPTEST_STUB_CALLED("LoggerDriver_LogAlarm");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int alarmCode)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("LoggerDriver_LogAlarm", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     LoggerDriver_LogAlarm(alarmCode);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int alarmCode);
        CPPTEST_STUB_INVOKE_CALLBACK(alarmCode);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        LoggerDriver_LogAlarm(alarmCode);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: int TemperatureSensor_ReadCelsius(float *) */
EXTERN_C_LINKAGE int TemperatureSensor_ReadCelsius (float * temperature) ;
EXTERN_C_LINKAGE int CppTest_Stub_TemperatureSensor_ReadCelsius (float * temperature) 
{
    CPPTEST_STUB_CALLED("TemperatureSensor_ReadCelsius");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return, float * temperature)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("TemperatureSensor_ReadCelsius", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = TemperatureSensor_ReadCelsius(temperature);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return, float * temperature);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, temperature);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = TemperatureSensor_ReadCelsius(temperature);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int ActuatorManager_CanStartFan(unsigned long, unsigned int) */
EXTERN_C_LINKAGE int ActuatorManager_CanStartFan (unsigned long lastStopTime, unsigned cooldownSeconds) ;
EXTERN_C_LINKAGE int CppTest_Stub_ActuatorManager_CanStartFan (unsigned long lastStopTime, unsigned cooldownSeconds) 
{
    CPPTEST_STUB_CALLED("ActuatorManager_CanStartFan");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return, unsigned long lastStopTime, unsigned cooldownSeconds)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("ActuatorManager_CanStartFan", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return, unsigned long lastStopTime, unsigned cooldownSeconds);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, lastStopTime, cooldownSeconds);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int ActuatorManager_StartFan(void) */
EXTERN_C_LINKAGE int ActuatorManager_StartFan () ;
EXTERN_C_LINKAGE int CppTest_Stub_ActuatorManager_StartFan (void) 
{
    CPPTEST_STUB_CALLED("ActuatorManager_StartFan");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("ActuatorManager_StartFan", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = ActuatorManager_StartFan();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = ActuatorManager_StartFan();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int ActuatorManager_StartHeater(void) */
EXTERN_C_LINKAGE int ActuatorManager_StartHeater () ;
EXTERN_C_LINKAGE int CppTest_Stub_ActuatorManager_StartHeater (void) 
{
    CPPTEST_STUB_CALLED("ActuatorManager_StartHeater");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("ActuatorManager_StartHeater", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = ActuatorManager_StartHeater();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = ActuatorManager_StartHeater();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int ActuatorManager_StopAll(void) */
EXTERN_C_LINKAGE int ActuatorManager_StopAll () ;
EXTERN_C_LINKAGE int CppTest_Stub_ActuatorManager_StopAll (void) 
{
    CPPTEST_STUB_CALLED("ActuatorManager_StopAll");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("ActuatorManager_StopAll", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = ActuatorManager_StopAll();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = ActuatorManager_StopAll();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int ActuatorManager_StopHeater(void) */
EXTERN_C_LINKAGE int ActuatorManager_StopHeater () ;
EXTERN_C_LINKAGE int CppTest_Stub_ActuatorManager_StopHeater (void) 
{
    CPPTEST_STUB_CALLED("ActuatorManager_StopHeater");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("ActuatorManager_StopHeater", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = ActuatorManager_StopHeater();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = ActuatorManager_StopHeater();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: void AlarmManager_Activate(AlarmType) */
EXTERN_C_LINKAGE void AlarmManager_Activate (AlarmType alarm) ;
EXTERN_C_LINKAGE void CppTest_Stub_AlarmManager_Activate (AlarmType alarm) 
{
    CPPTEST_STUB_CALLED("AlarmManager_Activate");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, AlarmType alarm)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("AlarmManager_Activate", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     AlarmManager_Activate(alarm);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(AlarmType alarm);
        CPPTEST_STUB_INVOKE_CALLBACK(alarm);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        AlarmManager_Activate(alarm);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void AlarmManager_Clear(void) */
EXTERN_C_LINKAGE void AlarmManager_Clear () ;
EXTERN_C_LINKAGE void CppTest_Stub_AlarmManager_Clear (void) 
{
    CPPTEST_STUB_CALLED("AlarmManager_Clear");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("AlarmManager_Clear", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     AlarmManager_Clear();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        AlarmManager_Clear();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void Config_LoadDefaults(SystemConfig *) */
EXTERN_C_LINKAGE void Config_LoadDefaults (SystemConfig * config) ;
EXTERN_C_LINKAGE void CppTest_Stub_Config_LoadDefaults (SystemConfig * config) 
{
    CPPTEST_STUB_CALLED("Config_LoadDefaults");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, SystemConfig * config)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Config_LoadDefaults", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     Config_LoadDefaults(config);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(SystemConfig * config);
        CPPTEST_STUB_INVOKE_CALLBACK(config);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        Config_LoadDefaults(config);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: SystemState Controller_GetState(const Controller *) */
EXTERN_C_LINKAGE SystemState Controller_GetState (const Controller * controller) ;
EXTERN_C_LINKAGE SystemState CppTest_Stub_Controller_GetState (const Controller * controller) 
{
    CPPTEST_STUB_CALLED("Controller_GetState");

    SystemState __return = SYSTEM_IDLE;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, SystemState* __return, const Controller * controller)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Controller_GetState", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = Controller_GetState(controller);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(SystemState* __return, const Controller * controller);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, controller);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = Controller_GetState(controller);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: void Controller_Init(Controller *, const SystemConfig *) */
EXTERN_C_LINKAGE void Controller_Init (Controller * controller, const SystemConfig * config) ;
EXTERN_C_LINKAGE void CppTest_Stub_Controller_Init (Controller * controller, const SystemConfig * config) 
{
    CPPTEST_STUB_CALLED("Controller_Init");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, Controller * controller, const SystemConfig * config)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Controller_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     Controller_Init(controller, config);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(Controller * controller, const SystemConfig * config);
        CPPTEST_STUB_INVOKE_CALLBACK(controller, config);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        Controller_Init(controller, config);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void Controller_RunCycle(Controller *) */
EXTERN_C_LINKAGE void Controller_RunCycle (Controller * controller) ;
EXTERN_C_LINKAGE void CppTest_Stub_Controller_RunCycle (Controller * controller) 
{
    CPPTEST_STUB_CALLED("Controller_RunCycle");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, Controller * controller)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Controller_RunCycle", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     Controller_RunCycle(controller);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(Controller * controller);
        CPPTEST_STUB_INVOKE_CALLBACK(controller);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        Controller_RunCycle(controller);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: const char * State_ToString(SystemState) */
EXTERN_C_LINKAGE const char * State_ToString (SystemState state) ;
EXTERN_C_LINKAGE const char * CppTest_Stub_State_ToString (SystemState state) 
{
    CPPTEST_STUB_CALLED("State_ToString");

    const char * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, const char ** __return, SystemState state)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("State_ToString", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(const char ** __return, SystemState state);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, state);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int SensorManager_Read(SensorData *) */
EXTERN_C_LINKAGE int SensorManager_Read (SensorData * data) ;
EXTERN_C_LINKAGE int CppTest_Stub_SensorManager_Read (SensorData * data) 
{
    CPPTEST_STUB_CALLED("SensorManager_Read");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return, SensorData * data)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("SensorManager_Read", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = SensorManager_Read(data);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return, SensorData * data);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, data);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = SensorManager_Read(data);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
