#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/controller.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/controller.c");

EXTERN_C_LINKAGE void TestSuite_Controller_RunCycle_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_Controller_RunCycle_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_Controller_RunCycle);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_Controller_RunCycle_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_1);
        CPPTEST_TEST(TestSuite_Controller_RunCycle_test_2);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_Controller_RunCycle_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_Controller_RunCycle_test_1(void);
void TestSuite_Controller_RunCycle_test_2(void);

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


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Controller_RunCycle(Controller *) */
void TestSuite_Controller_RunCycle_test_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */
    Controller * _controller  = 0 ;
    {
        /* Tested function call */
        Controller_RunCycle(_controller);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("Controller * _controller ", ( _controller ));
    }
}
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Controller_RunCycle(Controller *) */
void TestSuite_Controller_RunCycle_test_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */
    Controller _controller_0 ;
    Controller * _controller  = & _controller_0;
    {
        /* Tested function call */
        Controller_RunCycle(_controller);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("Controller * _controller ", ( _controller ));
    }
}
/* CPPTEST_TEST_CASE_END test_2 */
