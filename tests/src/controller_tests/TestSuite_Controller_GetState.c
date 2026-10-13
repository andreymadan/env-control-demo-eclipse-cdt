#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
#include "controller.h"
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/controller.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/controller.c");

EXTERN_C_LINKAGE void TestSuite_Controller_GetState_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_Controller_GetState_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_Controller_GetState);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_Controller_GetState_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_Controller_GetState_test_returns_controller_state);
        CPPTEST_TEST(TestSuite_Controller_GetState_test_null_controller);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_Controller_GetState_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_Controller_GetState_test_returns_controller_state(void);
void TestSuite_Controller_GetState_test_null_controller(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Controller_GetState);

void TestSuite_Controller_GetState_testSuiteSetUp(void);
void TestSuite_Controller_GetState_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Controller_GetState_testSuiteTearDown(void);
void TestSuite_Controller_GetState_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Controller_GetState_setUp(void);
void TestSuite_Controller_GetState_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Controller_GetState_tearDown(void);
void TestSuite_Controller_GetState_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}
/* CPPTEST_TEST_CASE_BEGIN test_returns_controller_state */
void TestSuite_Controller_GetState_test_returns_controller_state(void)
{
    Controller controller;

    controller.state = SYSTEM_IDLE;
    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_IDLE,
                              Controller_GetState(&controller));

    controller.state = SYSTEM_HEATING;
    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_HEATING,
                              Controller_GetState(&controller));

    controller.state = SYSTEM_COOLING;
    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_COOLING,
                              Controller_GetState(&controller));

    controller.state = SYSTEM_ALARM;
    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_ALARM,
                              Controller_GetState(&controller));
}
/* CPPTEST_TEST_CASE_END test_returns_controller_state */

/* CPPTEST_TEST_CASE_BEGIN test_null_controller */
void TestSuite_Controller_GetState_test_null_controller(void)
{
    CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_ALARM,
                              Controller_GetState(0));
}
/* CPPTEST_TEST_CASE_END test_null_controller */
