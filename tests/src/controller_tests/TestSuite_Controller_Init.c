#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
#include "controller.h"
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/controller.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/controller.c");

EXTERN_C_LINKAGE void TestSuite_Controller_Init_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_Controller_Init_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_Controller_Init);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_Controller_Init_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_Controller_Init_test_initializes_controller);
        CPPTEST_TEST(TestSuite_Controller_Init_test_null_controller);
        CPPTEST_TEST(TestSuite_Controller_Init_test_null_config);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_Controller_Init_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_Controller_Init_test_initializes_controller(void);
void TestSuite_Controller_Init_test_null_controller(void);
void TestSuite_Controller_Init_test_null_config(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Controller_Init);

void TestSuite_Controller_Init_testSuiteSetUp(void);
void TestSuite_Controller_Init_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Controller_Init_testSuiteTearDown(void);
void TestSuite_Controller_Init_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Controller_Init_setUp(void);
void TestSuite_Controller_Init_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Controller_Init_tearDown(void);
void TestSuite_Controller_Init_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}
static SystemConfig TestSuite_Controller_Init_makeConfig(void)
{
    SystemConfig config;

    config.targetTemperature = 22.0f;
    config.temperatureTolerance = 2.0f;
    config.maxTemperature = 30.0f;
    config.minTemperature = 16.0f;
    config.maxHumidity = 70.0f;
    config.fanCooldownSeconds = 60U;
    config.sensorFailureLimit = 3U;
    return config;
}

/* CPPTEST_TEST_CASE_BEGIN test_initializes_controller */
void TestSuite_Controller_Init_test_initializes_controller(void)
{
    Controller controller;
    SystemConfig config = TestSuite_Controller_Init_makeConfig();

    controller.state = SYSTEM_ALARM;
    controller.consecutiveSensorFailures = 9U;
    controller.lastFanStopTime = 123UL;

    Controller_Init(&controller, &config);

    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_IDLE, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(0U, controller.consecutiveSensorFailures);
    CPPTEST_ASSERT_INTEGER_EQUAL(0UL, controller.lastFanStopTime);
    CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(config.targetTemperature,
                                      controller.config.targetTemperature, 0.001);
    CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(config.temperatureTolerance,
                                      controller.config.temperatureTolerance, 0.001);
    CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(config.maxTemperature,
                                      controller.config.maxTemperature, 0.001);
    CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(config.minTemperature,
                                      controller.config.minTemperature, 0.001);
    CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(config.maxHumidity,
                                      controller.config.maxHumidity, 0.001);
    CPPTEST_ASSERT_INTEGER_EQUAL(config.fanCooldownSeconds,
                                  controller.config.fanCooldownSeconds);
    CPPTEST_ASSERT_INTEGER_EQUAL(config.sensorFailureLimit,
                                  controller.config.sensorFailureLimit);
}
/* CPPTEST_TEST_CASE_END test_initializes_controller */

/* CPPTEST_TEST_CASE_BEGIN test_null_controller */
void TestSuite_Controller_Init_test_null_controller(void)
{
    SystemConfig config = TestSuite_Controller_Init_makeConfig();

    Controller_Init(0, &config);
}
/* CPPTEST_TEST_CASE_END test_null_controller */

/* CPPTEST_TEST_CASE_BEGIN test_null_config */
void TestSuite_Controller_Init_test_null_config(void)
{
    Controller controller;

    controller.config.targetTemperature = 18.0f;
    controller.state = SYSTEM_COOLING;
    controller.consecutiveSensorFailures = 2U;
    controller.lastFanStopTime = 456UL;

    Controller_Init(&controller, 0);

    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_COOLING, controller.state);
    CPPTEST_ASSERT_INTEGER_EQUAL(2U, controller.consecutiveSensorFailures);
    CPPTEST_ASSERT_INTEGER_EQUAL(456UL, controller.lastFanStopTime);
    CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(18.0,
                                      controller.config.targetTemperature, 0.001);
}
/* CPPTEST_TEST_CASE_END test_null_config */
