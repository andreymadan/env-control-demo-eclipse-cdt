#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/heater_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/heater_driver.c");

EXTERN_C_LINKAGE void TestSuite_HeaterDriver_IsOn_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_HeaterDriver_IsOn_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_HeaterDriver_IsOn);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_HeaterDriver_IsOn_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_HeaterDriver_IsOn_test_1);
        CPPTEST_TEST(TestSuite_HeaterDriver_IsOn_test_2);
        CPPTEST_TEST(TestSuite_HeaterDriver_IsOn_test_3);
        CPPTEST_TEST(TestSuite_HeaterDriver_IsOn_test_4);
        CPPTEST_TEST(TestSuite_HeaterDriver_IsOn_test_5);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_HeaterDriver_IsOn_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_HeaterDriver_IsOn_test_1(void);
void TestSuite_HeaterDriver_IsOn_test_2(void);
void TestSuite_HeaterDriver_IsOn_test_3(void);
void TestSuite_HeaterDriver_IsOn_test_4(void);
void TestSuite_HeaterDriver_IsOn_test_5(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_HeaterDriver_IsOn);

void TestSuite_HeaterDriver_IsOn_testSuiteSetUp(void);
void TestSuite_HeaterDriver_IsOn_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_HeaterDriver_IsOn_testSuiteTearDown(void);
void TestSuite_HeaterDriver_IsOn_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_HeaterDriver_IsOn_setUp(void);
void TestSuite_HeaterDriver_IsOn_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_HeaterDriver_IsOn_tearDown(void);
void TestSuite_HeaterDriver_IsOn_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_HeaterDriver_IsOn_test_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */
    {
         heaterOn  = 0;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_HeaterDriver_IsOn_test_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */
    {
         heaterOn  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_2 */

/* CPPTEST_TEST_CASE_BEGIN test_3 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_HeaterDriver_IsOn_test_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */
    {
         heaterOn  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_3 */

/* CPPTEST_TEST_CASE_BEGIN test_4 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_HeaterDriver_IsOn_test_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */
    {
         heaterOn  = -1;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_4 */

/* CPPTEST_TEST_CASE_BEGIN test_5 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_HeaterDriver_IsOn_test_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */
    {
         heaterOn  = 1;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_5 */
