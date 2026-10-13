#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/display_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/display_driver.c");

EXTERN_C_LINKAGE void TestSuite_DisplayDriver_ClearAlarm_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_DisplayDriver_ClearAlarm_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_DisplayDriver_ClearAlarm);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_DisplayDriver_ClearAlarm_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_DisplayDriver_ClearAlarm_test_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_DisplayDriver_ClearAlarm_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_DisplayDriver_ClearAlarm_test_1(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_DisplayDriver_ClearAlarm);

void TestSuite_DisplayDriver_ClearAlarm_testSuiteSetUp(void);
void TestSuite_DisplayDriver_ClearAlarm_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_DisplayDriver_ClearAlarm_testSuiteTearDown(void);
void TestSuite_DisplayDriver_ClearAlarm_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_DisplayDriver_ClearAlarm_setUp(void);
void TestSuite_DisplayDriver_ClearAlarm_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_DisplayDriver_ClearAlarm_tearDown(void);
void TestSuite_DisplayDriver_ClearAlarm_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ClearAlarm(void) */
void TestSuite_DisplayDriver_ClearAlarm_test_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        DisplayDriver_ClearAlarm();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_1 */
