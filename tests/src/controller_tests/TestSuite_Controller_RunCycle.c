#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
#include "controller.h"
#include "sensor_manager.h"
#include "actuator_manager.h"
#include "alarm_manager.h"
#include "clock_driver.h"
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/controller.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/controller.c");

EXTERN_C_LINKAGE void TestSuite_Controller_RunCycle_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_Controller_RunCycle_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_Controller_RunCycle);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_Controller_RunCycle_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_null_controller);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_sensor_read_failure);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_sensor_failures_below_limit);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_sensor_failure_limit_reached);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_over_temperature);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_high_humidity);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_invalid_humidity_skips_alarm);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_starts_heater);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_starts_fan_when_cooldown_allows);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_keeps_state_when_cooling_blocked);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_cooling_transitions_to_idle);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_at_thresholds_returns_to_idle);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_Controller_RunCycle_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_Controller_RunCycle_test_null_controller(void);
void TestSuite_Controller_RunCycle_test_sensor_read_failure(void);
void TestSuite_Controller_RunCycle_test_sensor_failures_below_limit(void);
void TestSuite_Controller_RunCycle_test_sensor_failure_limit_reached(void);
void TestSuite_Controller_RunCycle_test_over_temperature(void);
void TestSuite_Controller_RunCycle_test_high_humidity(void);
void TestSuite_Controller_RunCycle_test_invalid_humidity_skips_alarm(void);
void TestSuite_Controller_RunCycle_test_starts_heater(void);
void TestSuite_Controller_RunCycle_test_starts_fan_when_cooldown_allows(void);
void TestSuite_Controller_RunCycle_test_keeps_state_when_cooling_blocked(void);
void TestSuite_Controller_RunCycle_test_cooling_transitions_to_idle(void);
void TestSuite_Controller_RunCycle_test_at_thresholds_returns_to_idle(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Controller_RunCycle);

void TestSuite_Controller_RunCycle_testSuiteSetUp(void);
void TestSuite_Controller_RunCycle_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Controller_RunCycle_testSuiteTearDown(void);
void TestSuite_Controller_RunCycle_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Controller_RunCycle_setUp(void);
void TestSuite_Controller_RunCycle_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Controller_RunCycle_tearDown(void);
void TestSuite_Controller_RunCycle_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}
static SensorData s_controllerRunCycleSensorData;
static int s_controllerRunCycleSensorReadResult;
static unsigned int s_controllerRunCycleSensorReadCalls;
static unsigned int s_controllerRunCycleStopAllCalls;
static unsigned int s_controllerRunCycleStopHeaterCalls;
static unsigned int s_controllerRunCycleStartFanCalls;
static unsigned int s_controllerRunCycleStartHeaterCalls;
static unsigned int s_controllerRunCycleCanStartFanCalls;
static unsigned int s_controllerRunCycleAlarmActivateCalls;
static unsigned int s_controllerRunCycleAlarmClearCalls;
static unsigned int s_controllerRunCycleClockCalls;
static unsigned long s_controllerRunCycleLastStopTime;
static unsigned int s_controllerRunCycleCooldownSeconds;
static int s_controllerRunCycleCanStartFanResult;
static unsigned long s_controllerRunCycleClockSeconds;
static AlarmType s_controllerRunCycleLastAlarm;

static void TestSuite_Controller_RunCycle_resetObservations(void)
{
    s_controllerRunCycleSensorReadResult = 0;
    s_controllerRunCycleSensorReadCalls = 0U;
    s_controllerRunCycleStopAllCalls = 0U;
    s_controllerRunCycleStopHeaterCalls = 0U;
    s_controllerRunCycleStartFanCalls = 0U;
    s_controllerRunCycleStartHeaterCalls = 0U;
    s_controllerRunCycleCanStartFanCalls = 0U;
    s_controllerRunCycleAlarmActivateCalls = 0U;
    s_controllerRunCycleAlarmClearCalls = 0U;
    s_controllerRunCycleClockCalls = 0U;
    s_controllerRunCycleLastStopTime = 0UL;
    s_controllerRunCycleCooldownSeconds = 0U;
    s_controllerRunCycleCanStartFanResult = 0;
    s_controllerRunCycleClockSeconds = 0UL;
    s_controllerRunCycleLastAlarm = ALARM_NONE;
    s_controllerRunCycleSensorData.temperature = 22.0f;
    s_controllerRunCycleSensorData.humidity = 50.0f;
    s_controllerRunCycleSensorData.temperatureValid = 1;
    s_controllerRunCycleSensorData.humidityValid = 1;
}

static void TestSuite_Controller_RunCycle_makeConfig(SystemConfig *config)
{
    config->targetTemperature = 22.0f;
    config->temperatureTolerance = 2.0f;
    config->maxTemperature = 30.0f;
    config->minTemperature = 16.0f;
    config->maxHumidity = 70.0f;
    config->fanCooldownSeconds = 60U;
    config->sensorFailureLimit = 3U;
}

static void TestSuite_Controller_RunCycle_makeController(
    Controller *controller,
    SystemState initialState)
{
    SystemConfig config;

    TestSuite_Controller_RunCycle_makeConfig(&config);
    Controller_Init(controller, &config);
    controller->state = initialState;
}

static void CppTest_StubCallback_ControllerRunCycle_SensorManager_Read(
    CppTest_StubCallInfo *stubCallInfo,
    int *__return,
    SensorData *data)
{
    (void)stubCallInfo;
    s_controllerRunCycleSensorReadCalls++;
    if (data != 0)
    {
        *data = s_controllerRunCycleSensorData;
    }
    *__return = s_controllerRunCycleSensorReadResult;
}

static void CppTest_StubCallback_ControllerRunCycle_ActuatorManager_StopAll(
    CppTest_StubCallInfo *stubCallInfo,
    int *__return)
{
    (void)stubCallInfo;
    s_controllerRunCycleStopAllCalls++;
    *__return = 0;
}

static void CppTest_StubCallback_ControllerRunCycle_ActuatorManager_StopHeater(
    CppTest_StubCallInfo *stubCallInfo,
    int *__return)
{
    (void)stubCallInfo;
    s_controllerRunCycleStopHeaterCalls++;
    *__return = 0;
}

static void CppTest_StubCallback_ControllerRunCycle_ActuatorManager_StartFan(
    CppTest_StubCallInfo *stubCallInfo,
    int *__return)
{
    (void)stubCallInfo;
    s_controllerRunCycleStartFanCalls++;
    *__return = 0;
}

static void CppTest_StubCallback_ControllerRunCycle_ActuatorManager_StartHeater(
    CppTest_StubCallInfo *stubCallInfo,
    int *__return)
{
    (void)stubCallInfo;
    s_controllerRunCycleStartHeaterCalls++;
    *__return = 0;
}

static void CppTest_StubCallback_ControllerRunCycle_ActuatorManager_CanStartFan(
    CppTest_StubCallInfo *stubCallInfo,
    int *__return,
    unsigned long lastStopTime,
    unsigned int cooldownSeconds)
{
    (void)stubCallInfo;
    s_controllerRunCycleCanStartFanCalls++;
    s_controllerRunCycleLastStopTime = lastStopTime;
    s_controllerRunCycleCooldownSeconds = cooldownSeconds;
    *__return = s_controllerRunCycleCanStartFanResult;
}

static void CppTest_StubCallback_ControllerRunCycle_AlarmManager_Activate(
    CppTest_StubCallInfo *stubCallInfo,
    AlarmType alarm)
{
    (void)stubCallInfo;
    s_controllerRunCycleAlarmActivateCalls++;
    s_controllerRunCycleLastAlarm = alarm;
}

static void CppTest_StubCallback_ControllerRunCycle_AlarmManager_Clear(
    CppTest_StubCallInfo *stubCallInfo)
{
    (void)stubCallInfo;
    s_controllerRunCycleAlarmClearCalls++;
}

static void CppTest_StubCallback_ControllerRunCycle_Clock_GetSeconds(
    CppTest_StubCallInfo *stubCallInfo,
    unsigned long *__return)
{
    (void)stubCallInfo;
    s_controllerRunCycleClockCalls++;
    *__return = s_controllerRunCycleClockSeconds;
}

static void TestSuite_Controller_RunCycle_registerStubs(void)
{
    CPPTEST_REGISTER_STUB_CALLBACK(
        "SensorManager_Read",
        &CppTest_StubCallback_ControllerRunCycle_SensorManager_Read);
    CPPTEST_REGISTER_STUB_CALLBACK(
        "ActuatorManager_StopAll",
        &CppTest_StubCallback_ControllerRunCycle_ActuatorManager_StopAll);
    CPPTEST_REGISTER_STUB_CALLBACK(
        "ActuatorManager_StopHeater",
        &CppTest_StubCallback_ControllerRunCycle_ActuatorManager_StopHeater);
    CPPTEST_REGISTER_STUB_CALLBACK(
        "ActuatorManager_StartFan",
        &CppTest_StubCallback_ControllerRunCycle_ActuatorManager_StartFan);
    CPPTEST_REGISTER_STUB_CALLBACK(
        "ActuatorManager_StartHeater",
        &CppTest_StubCallback_ControllerRunCycle_ActuatorManager_StartHeater);
    CPPTEST_REGISTER_STUB_CALLBACK(
        "ActuatorManager_CanStartFan",
        &CppTest_StubCallback_ControllerRunCycle_ActuatorManager_CanStartFan);
    CPPTEST_REGISTER_STUB_CALLBACK(
        "AlarmManager_Activate",
        &CppTest_StubCallback_ControllerRunCycle_AlarmManager_Activate);
    CPPTEST_REGISTER_STUB_CALLBACK(
        "AlarmManager_Clear",
        &CppTest_StubCallback_ControllerRunCycle_AlarmManager_Clear);
    CPPTEST_REGISTER_STUB_CALLBACK(
        "Clock_GetSeconds",
        &CppTest_StubCallback_ControllerRunCycle_Clock_GetSeconds);
}

/* CPPTEST_TEST_CASE_BEGIN test_null_controller */
void TestSuite_Controller_RunCycle_test_null_controller(void)
{
    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(0);

    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleSensorReadCalls);
}
/* CPPTEST_TEST_CASE_END test_null_controller */

/* CPPTEST_TEST_CASE_BEGIN test_sensor_read_failure */
void TestSuite_Controller_RunCycle_test_sensor_read_failure(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_HEATING);
    controller.consecutiveSensorFailures = 1U;
    s_controllerRunCycleSensorReadResult = -1;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleSensorReadCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, controller.consecutiveSensorFailures);
    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_HEATING, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleStopAllCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleAlarmActivateCalls);
}
/* CPPTEST_TEST_CASE_END test_sensor_read_failure */

/* CPPTEST_TEST_CASE_BEGIN test_sensor_failures_below_limit */
void TestSuite_Controller_RunCycle_test_sensor_failures_below_limit(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_IDLE);
    controller.consecutiveSensorFailures = 1U;
    s_controllerRunCycleSensorData.temperatureValid = 0;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_INTEGER_EQUAL(2U, controller.consecutiveSensorFailures);
    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_IDLE, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleStopAllCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleAlarmActivateCalls);
}
/* CPPTEST_TEST_CASE_END test_sensor_failures_below_limit */

/* CPPTEST_TEST_CASE_BEGIN test_sensor_failure_limit_reached */
void TestSuite_Controller_RunCycle_test_sensor_failure_limit_reached(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_IDLE);
    controller.consecutiveSensorFailures = 2U;
    s_controllerRunCycleSensorData.temperatureValid = 0;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_INTEGER_EQUAL(3U, controller.consecutiveSensorFailures);
    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_ALARM, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleStopAllCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleAlarmActivateCalls);
    CPPTEST_ASSERT_ENUM_EQUAL(AlarmType, ALARM_SENSOR_FAILURE,
                              s_controllerRunCycleLastAlarm);
}
/* CPPTEST_TEST_CASE_END test_sensor_failure_limit_reached */

/* CPPTEST_TEST_CASE_BEGIN test_over_temperature */
void TestSuite_Controller_RunCycle_test_over_temperature(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_IDLE);
    controller.consecutiveSensorFailures = 2U;
    s_controllerRunCycleSensorData.temperature = 31.0f;
    s_controllerRunCycleSensorData.humidity = 90.0f;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_INTEGER_EQUAL(0U, controller.consecutiveSensorFailures);
    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_ALARM, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleStopHeaterCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleStartFanCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleAlarmActivateCalls);
    CPPTEST_ASSERT_ENUM_EQUAL(AlarmType, ALARM_OVER_TEMPERATURE,
                              s_controllerRunCycleLastAlarm);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleStopAllCalls);
}
/* CPPTEST_TEST_CASE_END test_over_temperature */

/* CPPTEST_TEST_CASE_BEGIN test_high_humidity */
void TestSuite_Controller_RunCycle_test_high_humidity(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_IDLE);
    s_controllerRunCycleSensorData.humidity = 71.0f;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_ALARM, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleAlarmActivateCalls);
    CPPTEST_ASSERT_ENUM_EQUAL(AlarmType, ALARM_HIGH_HUMIDITY,
                              s_controllerRunCycleLastAlarm);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleStopAllCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleAlarmClearCalls);
}
/* CPPTEST_TEST_CASE_END test_high_humidity */

/* CPPTEST_TEST_CASE_BEGIN test_invalid_humidity_skips_alarm */
void TestSuite_Controller_RunCycle_test_invalid_humidity_skips_alarm(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_IDLE);
    s_controllerRunCycleSensorData.humidity = 90.0f;
    s_controllerRunCycleSensorData.humidityValid = 0;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_IDLE, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleAlarmActivateCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleAlarmClearCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleStopAllCalls);
}
/* CPPTEST_TEST_CASE_END test_invalid_humidity_skips_alarm */

/* CPPTEST_TEST_CASE_BEGIN test_starts_heater */
void TestSuite_Controller_RunCycle_test_starts_heater(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_IDLE);
    s_controllerRunCycleSensorData.temperature = 19.0f;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_HEATING, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleStartHeaterCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleStartFanCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleStopAllCalls);
}
/* CPPTEST_TEST_CASE_END test_starts_heater */

/* CPPTEST_TEST_CASE_BEGIN test_starts_fan_when_cooldown_allows */
void TestSuite_Controller_RunCycle_test_starts_fan_when_cooldown_allows(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_IDLE);
    controller.lastFanStopTime = 100UL;
    s_controllerRunCycleSensorData.temperature = 25.0f;
    s_controllerRunCycleCanStartFanResult = 1;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_COOLING, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleCanStartFanCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(100UL, s_controllerRunCycleLastStopTime);
    CPPTEST_ASSERT_INTEGER_EQUAL(60U, s_controllerRunCycleCooldownSeconds);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleStartFanCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleClockCalls);
}
/* CPPTEST_TEST_CASE_END test_starts_fan_when_cooldown_allows */

/* CPPTEST_TEST_CASE_BEGIN test_keeps_state_when_cooling_blocked */
void TestSuite_Controller_RunCycle_test_keeps_state_when_cooling_blocked(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_HEATING);
    s_controllerRunCycleSensorData.temperature = 25.0f;
    s_controllerRunCycleCanStartFanResult = 0;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_HEATING, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleCanStartFanCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleStartFanCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleStopAllCalls);
}
/* CPPTEST_TEST_CASE_END test_keeps_state_when_cooling_blocked */

/* CPPTEST_TEST_CASE_BEGIN test_cooling_transitions_to_idle */
void TestSuite_Controller_RunCycle_test_cooling_transitions_to_idle(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_COOLING);
    controller.lastFanStopTime = 100UL;
    s_controllerRunCycleClockSeconds = 987UL;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_IDLE, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(987UL, controller.lastFanStopTime);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleClockCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleStopAllCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleAlarmClearCalls);
}
/* CPPTEST_TEST_CASE_END test_cooling_transitions_to_idle */

/* CPPTEST_TEST_CASE_BEGIN test_at_thresholds_returns_to_idle */
void TestSuite_Controller_RunCycle_test_at_thresholds_returns_to_idle(void)
{
    Controller controller;

    TestSuite_Controller_RunCycle_resetObservations();
    TestSuite_Controller_RunCycle_makeController(&controller, SYSTEM_IDLE);
    s_controllerRunCycleSensorData.temperature = 20.0f;
    s_controllerRunCycleSensorData.humidity = 70.0f;
    TestSuite_Controller_RunCycle_registerStubs();

    Controller_RunCycle(&controller);

    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_IDLE, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleStartHeaterCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleCanStartFanCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleAlarmActivateCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleStopAllCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(1U, s_controllerRunCycleAlarmClearCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, s_controllerRunCycleClockCalls);
}
/* CPPTEST_TEST_CASE_END test_at_thresholds_returns_to_idle */
