#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/actuator_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/actuator_manager.c");

EXTERN_C_LINKAGE void TestSuite_ActuatorManager_StartHeater_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_ActuatorManager_StartHeater_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_ActuatorManager_StartHeater);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_ActuatorManager_StartHeater_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_ActuatorManager_StartHeater_test_success);
        CPPTEST_TEST(TestSuite_ActuatorManager_StartHeater_test_fan_off_fails);
        CPPTEST_TEST(TestSuite_ActuatorManager_StartHeater_test_heater_on_fails);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_ActuatorManager_StartHeater_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_ActuatorManager_StartHeater_test_success(void);
void TestSuite_ActuatorManager_StartHeater_test_fan_off_fails(void);
void TestSuite_ActuatorManager_StartHeater_test_heater_on_fails(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_ActuatorManager_StartHeater);

void TestSuite_ActuatorManager_StartHeater_testSuiteSetUp(void);
void TestSuite_ActuatorManager_StartHeater_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_ActuatorManager_StartHeater_testSuiteTearDown(void);
void TestSuite_ActuatorManager_StartHeater_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_ActuatorManager_StartHeater_setUp(void);
void TestSuite_ActuatorManager_StartHeater_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_ActuatorManager_StartHeater_tearDown(void);
void TestSuite_ActuatorManager_StartHeater_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* ============================================================================
 * STUB CALLBACK DEFINITIONS - Dynamic Stub Configuration
 * ============================================================================ */

void CppTest_StubCallback_StartHeater_FanDriver_Off_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

void CppTest_StubCallback_StartHeater_FanDriver_Off_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

void CppTest_StubCallback_StartHeater_HeaterDriver_On_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

void CppTest_StubCallback_StartHeater_HeaterDriver_On_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

/* ============================================================================
 * TEST CASE IMPLEMENTATIONS - int ActuatorManager_StartHeater(void)
 * ============================================================================ */

/* CPPTEST_TEST_CASE_BEGIN test_success */
void TestSuite_ActuatorManager_StartHeater_test_success(void)
{
    /* Arrange: Register stub callbacks for success path */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StartHeater_FanDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_On", &CppTest_StubCallback_StartHeater_HeaterDriver_On_Success);

    /* Act: Call the function */
    int result = ActuatorManager_StartHeater();

    /* Assert: Verify success return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_success */

/* CPPTEST_TEST_CASE_BEGIN test_fan_off_fails */
void TestSuite_ActuatorManager_StartHeater_test_fan_off_fails(void)
{
    /* Arrange: Register stub callback for failure path */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StartHeater_FanDriver_Off_Failure);

    /* Act: Call the function */
    int result = ActuatorManager_StartHeater();

    /* Assert: Verify failure return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_fan_off_fails */

/* MC/DC: HeaterDriver_On failure path, independent of FanDriver_Off's success */
/* CPPTEST_TEST_CASE_BEGIN test_heater_on_fails */
void TestSuite_ActuatorManager_StartHeater_test_heater_on_fails(void)
{
    /* Arrange: Fan off succeeds but HeaterDriver_On fails */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StartHeater_FanDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_On", &CppTest_StubCallback_StartHeater_HeaterDriver_On_Failure);

    /* Act: Call the function */
    int result = ActuatorManager_StartHeater();

    /* Assert: HeaterDriver_On failure code is returned */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_heater_on_fails */
