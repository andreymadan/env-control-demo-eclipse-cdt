#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/display_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/display_driver.c");

EXTERN_C_LINKAGE void TestSuite_DisplayDriver_ShowAlarm_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_DisplayDriver_ShowAlarm_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_DisplayDriver_ShowAlarm);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_DisplayDriver_ShowAlarm_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_DisplayDriver_ShowAlarm_test_1);
        CPPTEST_TEST(TestSuite_DisplayDriver_ShowAlarm_test_2);
        CPPTEST_TEST(TestSuite_DisplayDriver_ShowAlarm_test_3);
        CPPTEST_TEST(TestSuite_DisplayDriver_ShowAlarm_test_4);
        CPPTEST_TEST(TestSuite_DisplayDriver_ShowAlarm_test_5);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_DisplayDriver_ShowAlarm_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_DisplayDriver_ShowAlarm_test_1(void);
void TestSuite_DisplayDriver_ShowAlarm_test_2(void);
void TestSuite_DisplayDriver_ShowAlarm_test_3(void);
void TestSuite_DisplayDriver_ShowAlarm_test_4(void);
void TestSuite_DisplayDriver_ShowAlarm_test_5(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_DisplayDriver_ShowAlarm);

void TestSuite_DisplayDriver_ShowAlarm_testSuiteSetUp(void);
void TestSuite_DisplayDriver_ShowAlarm_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_DisplayDriver_ShowAlarm_testSuiteTearDown(void);
void TestSuite_DisplayDriver_ShowAlarm_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_DisplayDriver_ShowAlarm_setUp(void);
void TestSuite_DisplayDriver_ShowAlarm_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_DisplayDriver_ShowAlarm_tearDown(void);
void TestSuite_DisplayDriver_ShowAlarm_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_DisplayDriver_ShowAlarm_test_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarmCode) */
    int _alarmCode  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        DisplayDriver_ShowAlarm(_alarmCode);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_DisplayDriver_ShowAlarm_test_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarmCode) */
    int _alarmCode  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        DisplayDriver_ShowAlarm(_alarmCode);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_2 */

/* CPPTEST_TEST_CASE_BEGIN test_3 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_DisplayDriver_ShowAlarm_test_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarmCode) */
    int _alarmCode  = -1;
    {
        /* Tested function call */
        DisplayDriver_ShowAlarm(_alarmCode);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_3 */

/* CPPTEST_TEST_CASE_BEGIN test_4 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_DisplayDriver_ShowAlarm_test_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarmCode) */
    int _alarmCode  = 1;
    {
        /* Tested function call */
        DisplayDriver_ShowAlarm(_alarmCode);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_4 */

/* CPPTEST_TEST_CASE_BEGIN test_5 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_DisplayDriver_ShowAlarm_test_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarmCode) */
    int _alarmCode  = 0;
    {
        /* Tested function call */
        DisplayDriver_ShowAlarm(_alarmCode);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_5 */
