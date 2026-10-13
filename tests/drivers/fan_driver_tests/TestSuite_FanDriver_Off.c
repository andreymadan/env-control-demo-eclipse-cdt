#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/fan_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/fan_driver.c");

EXTERN_C_LINKAGE void TestSuite_FanDriver_Off_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_FanDriver_Off_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_FanDriver_Off);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_FanDriver_Off_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_FanDriver_Off_test_1);
        CPPTEST_TEST(TestSuite_FanDriver_Off_test_2);
        CPPTEST_TEST(TestSuite_FanDriver_Off_test_3);
        CPPTEST_TEST(TestSuite_FanDriver_Off_test_4);
        CPPTEST_TEST(TestSuite_FanDriver_Off_test_5);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_FanDriver_Off_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_FanDriver_Off_test_1(void);
void TestSuite_FanDriver_Off_test_2(void);
void TestSuite_FanDriver_Off_test_3(void);
void TestSuite_FanDriver_Off_test_4(void);
void TestSuite_FanDriver_Off_test_5(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_FanDriver_Off);

void TestSuite_FanDriver_Off_testSuiteSetUp(void);
void TestSuite_FanDriver_Off_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_FanDriver_Off_testSuiteTearDown(void);
void TestSuite_FanDriver_Off_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_FanDriver_Off_setUp(void);
void TestSuite_FanDriver_Off_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_FanDriver_Off_tearDown(void);
void TestSuite_FanDriver_Off_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_FanDriver_Off_test_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */
    {
         fanOn  = 0;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_FanDriver_Off_test_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */
    {
         fanOn  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_2 */

/* CPPTEST_TEST_CASE_BEGIN test_3 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_FanDriver_Off_test_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */
    {
         fanOn  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_3 */

/* CPPTEST_TEST_CASE_BEGIN test_4 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_FanDriver_Off_test_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */
    {
         fanOn  = -1;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_4 */

/* CPPTEST_TEST_CASE_BEGIN test_5 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_FanDriver_Off_test_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */
    {
         fanOn  = 1;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_5 */
