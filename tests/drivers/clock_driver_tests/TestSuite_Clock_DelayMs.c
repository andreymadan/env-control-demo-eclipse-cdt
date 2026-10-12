#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/clock_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/clock_driver.c");

EXTERN_C_LINKAGE void TestSuite_Clock_DelayMs_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_Clock_DelayMs_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_Clock_DelayMs);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_Clock_DelayMs_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_Clock_DelayMs_test_1);
        CPPTEST_TEST(TestSuite_Clock_DelayMs_test_2);
        CPPTEST_TEST(TestSuite_Clock_DelayMs_test_3);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_Clock_DelayMs_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_Clock_DelayMs_test_1(void);
void TestSuite_Clock_DelayMs_test_2(void);
void TestSuite_Clock_DelayMs_test_3(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Clock_DelayMs);

void TestSuite_Clock_DelayMs_testSuiteSetUp(void);
void TestSuite_Clock_DelayMs_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Clock_DelayMs_testSuiteTearDown(void);
void TestSuite_Clock_DelayMs_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Clock_DelayMs_setUp(void);
void TestSuite_Clock_DelayMs_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Clock_DelayMs_tearDown(void);
void TestSuite_Clock_DelayMs_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Clock_DelayMs(unsigned int) */
void TestSuite_Clock_DelayMs_test_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (milliseconds) */
    unsigned _milliseconds  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        Clock_DelayMs(_milliseconds);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Clock_DelayMs(unsigned int) */
void TestSuite_Clock_DelayMs_test_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (milliseconds) */
    unsigned _milliseconds  = 1u;
    {
        /* Tested function call */
        Clock_DelayMs(_milliseconds);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_2 */

/* CPPTEST_TEST_CASE_BEGIN test_3 */
/* CPPTEST_TEST_CASE_CONTEXT void Clock_DelayMs(unsigned int) */
void TestSuite_Clock_DelayMs_test_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (milliseconds) */
    unsigned _milliseconds  = 0u;
    {
        /* Tested function call */
        Clock_DelayMs(_milliseconds);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_3 */
