#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/actuator_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/actuator_manager.c");

EXTERN_C_LINKAGE void TestSuite_ActuatorManager_StopFan_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_ActuatorManager_StopFan_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_ActuatorManager_StopFan);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_ActuatorManager_StopFan_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_ActuatorManager_StopFan_test_success);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_ActuatorManager_StopFan_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_ActuatorManager_StopFan_test_success(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_ActuatorManager_StopFan);

void TestSuite_ActuatorManager_StopFan_testSuiteSetUp(void);
void TestSuite_ActuatorManager_StopFan_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_ActuatorManager_StopFan_testSuiteTearDown(void);
void TestSuite_ActuatorManager_StopFan_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_ActuatorManager_StopFan_setUp(void);
void TestSuite_ActuatorManager_StopFan_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_ActuatorManager_StopFan_tearDown(void);
void TestSuite_ActuatorManager_StopFan_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* Stub callback for FanDriver_Off - returns success (0) */
void CppTest_StubCallback_StopFan_FanDriver_Off_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

/* CPPTEST_TEST_CASE_BEGIN test_success */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopFan(void) */
void TestSuite_ActuatorManager_StopFan_test_success(void)
{
    /* Arrange: Register stub callback */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StopFan_FanDriver_Off_Success);

    /* Act: Call the function */
    int result = ActuatorManager_StopFan();

    /* Assert: Verify return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_success */
