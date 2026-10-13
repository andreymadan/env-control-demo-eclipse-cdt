#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/actuator_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/actuator_manager.c");

EXTERN_C_LINKAGE void TestSuite_ActuatorManager_StartFan_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_ActuatorManager_StartFan_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_ActuatorManager_StartFan);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_ActuatorManager_StartFan_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_ActuatorManager_StartFan_test_success);
        CPPTEST_TEST(TestSuite_ActuatorManager_StartFan_test_heater_off_fails);
        CPPTEST_TEST(TestSuite_ActuatorManager_StartFan_test_fan_on_fails);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_ActuatorManager_StartFan_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_ActuatorManager_StartFan_test_success(void);
void TestSuite_ActuatorManager_StartFan_test_heater_off_fails(void);
void TestSuite_ActuatorManager_StartFan_test_fan_on_fails(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_ActuatorManager_StartFan);

void TestSuite_ActuatorManager_StartFan_testSuiteSetUp(void);
void TestSuite_ActuatorManager_StartFan_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_ActuatorManager_StartFan_testSuiteTearDown(void);
void TestSuite_ActuatorManager_StartFan_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_ActuatorManager_StartFan_setUp(void);
void TestSuite_ActuatorManager_StartFan_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_ActuatorManager_StartFan_tearDown(void);
void TestSuite_ActuatorManager_StartFan_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* ============================================================================
 * STUB CALLBACK DEFINITIONS - Dynamic Stub Configuration
 * ============================================================================ */

/* Stub callback for HeaterDriver_Off - returns success (0) */
void CppTest_StubCallback_StartFan_HeaterDriver_Off_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

/* Stub callback for HeaterDriver_Off - returns failure (-1) */
void CppTest_StubCallback_StartFan_HeaterDriver_Off_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

/* Stub callback for FanDriver_On - returns success (0) */
void CppTest_StubCallback_StartFan_FanDriver_On_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

/* Stub callback for FanDriver_On - returns failure (-1) */
void CppTest_StubCallback_StartFan_FanDriver_On_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

/* ============================================================================
 * TEST CASE IMPLEMENTATIONS - int ActuatorManager_StartFan(void)
 * ============================================================================ */

/* CPPTEST_TEST_CASE_BEGIN test_success */
void TestSuite_ActuatorManager_StartFan_test_success(void)
{
    /* Arrange: Register stub callbacks for success path */
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StartFan_HeaterDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_On", &CppTest_StubCallback_StartFan_FanDriver_On_Success);

    /* Act: Call the function */
    int result = ActuatorManager_StartFan();

    /* Assert: Verify success return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_success */

/* CPPTEST_TEST_CASE_BEGIN test_heater_off_fails */
void TestSuite_ActuatorManager_StartFan_test_heater_off_fails(void)
{
    /* Arrange: Register stub callback for failure path */
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StartFan_HeaterDriver_Off_Failure);

    /* Act: Call the function */
    int result = ActuatorManager_StartFan();

    /* Assert: Verify failure return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_heater_off_fails */

/* MC/DC: FanDriver_On failure path, independent of HeaterDriver_Off's success */
/* CPPTEST_TEST_CASE_BEGIN test_fan_on_fails */
void TestSuite_ActuatorManager_StartFan_test_fan_on_fails(void)
{
    /* Arrange: Heater off succeeds but FanDriver_On fails */
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StartFan_HeaterDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_On", &CppTest_StubCallback_StartFan_FanDriver_On_Failure);

    /* Act: Call the function */
    int result = ActuatorManager_StartFan();

    /* Assert: FanDriver_On failure code is returned */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_fan_on_fails */
