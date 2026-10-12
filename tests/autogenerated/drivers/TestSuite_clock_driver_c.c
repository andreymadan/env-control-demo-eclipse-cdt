#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/clock_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/clock_driver.c");

EXTERN_C_LINKAGE void TestSuite_clock_driver_c_39b99122_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_clock_driver_c_39b99122_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_clock_driver_c_39b99122);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_clock_driver_c_39b99122_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_clock_driver_c_39b99122_test_Clock_DelayMs_1);
        CPPTEST_TEST(TestSuite_clock_driver_c_39b99122_test_Clock_DelayMs_2);
        CPPTEST_TEST(TestSuite_clock_driver_c_39b99122_test_Clock_DelayMs_3);
        CPPTEST_TEST(TestSuite_clock_driver_c_39b99122_test_Clock_GetSeconds_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_clock_driver_c_39b99122_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_clock_driver_c_39b99122_test_Clock_DelayMs_1(void);
void TestSuite_clock_driver_c_39b99122_test_Clock_DelayMs_2(void);
void TestSuite_clock_driver_c_39b99122_test_Clock_DelayMs_3(void);
void TestSuite_clock_driver_c_39b99122_test_Clock_GetSeconds_1(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_clock_driver_c_39b99122);

void TestSuite_clock_driver_c_39b99122_testSuiteSetUp(void);
void TestSuite_clock_driver_c_39b99122_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_clock_driver_c_39b99122_testSuiteTearDown(void);
void TestSuite_clock_driver_c_39b99122_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_clock_driver_c_39b99122_setUp(void);
void TestSuite_clock_driver_c_39b99122_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_clock_driver_c_39b99122_tearDown(void);
void TestSuite_clock_driver_c_39b99122_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_Clock_DelayMs_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Clock_DelayMs(unsigned int) */
void TestSuite_clock_driver_c_39b99122_test_Clock_DelayMs_1()
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
/* CPPTEST_TEST_CASE_END test_Clock_DelayMs_1 */

/* CPPTEST_TEST_CASE_BEGIN test_Clock_DelayMs_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Clock_DelayMs(unsigned int) */
void TestSuite_clock_driver_c_39b99122_test_Clock_DelayMs_2()
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
/* CPPTEST_TEST_CASE_END test_Clock_DelayMs_2 */

/* CPPTEST_TEST_CASE_BEGIN test_Clock_DelayMs_3 */
/* CPPTEST_TEST_CASE_CONTEXT void Clock_DelayMs(unsigned int) */
void TestSuite_clock_driver_c_39b99122_test_Clock_DelayMs_3()
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
/* CPPTEST_TEST_CASE_END test_Clock_DelayMs_3 */

/* CPPTEST_TEST_CASE_BEGIN test_Clock_GetSeconds_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned long Clock_GetSeconds(void) */
void TestSuite_clock_driver_c_39b99122_test_Clock_GetSeconds_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        unsigned long _return  = Clock_GetSeconds();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned long _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Clock_GetSeconds_1 */
