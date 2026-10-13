#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/clock_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/clock_driver.c");

EXTERN_C_LINKAGE void TestSuite_Clock_GetSeconds_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_Clock_GetSeconds_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_Clock_GetSeconds);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_Clock_GetSeconds_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_Clock_GetSeconds_test_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_Clock_GetSeconds_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_Clock_GetSeconds_test_1(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Clock_GetSeconds);

void TestSuite_Clock_GetSeconds_testSuiteSetUp(void);
void TestSuite_Clock_GetSeconds_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Clock_GetSeconds_testSuiteTearDown(void);
void TestSuite_Clock_GetSeconds_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Clock_GetSeconds_setUp(void);
void TestSuite_Clock_GetSeconds_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Clock_GetSeconds_tearDown(void);
void TestSuite_Clock_GetSeconds_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned long Clock_GetSeconds(void) */
void TestSuite_Clock_GetSeconds_test_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        unsigned long _return  = Clock_GetSeconds();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned long _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_1 */
