#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/buzzer_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/buzzer_driver.c");

EXTERN_C_LINKAGE void TestSuite_BuzzerDriver_Enable_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_BuzzerDriver_Enable_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_BuzzerDriver_Enable);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_BuzzerDriver_Enable_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_BuzzerDriver_Enable_test_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_BuzzerDriver_Enable_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_BuzzerDriver_Enable_test_1(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_BuzzerDriver_Enable);

void TestSuite_BuzzerDriver_Enable_testSuiteSetUp(void);
void TestSuite_BuzzerDriver_Enable_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_BuzzerDriver_Enable_testSuiteTearDown(void);
void TestSuite_BuzzerDriver_Enable_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_BuzzerDriver_Enable_setUp(void);
void TestSuite_BuzzerDriver_Enable_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_BuzzerDriver_Enable_tearDown(void);
void TestSuite_BuzzerDriver_Enable_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT void BuzzerDriver_Enable(void) */
void TestSuite_BuzzerDriver_Enable_test_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        BuzzerDriver_Enable();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_1 */
