#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/display_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/display_driver.c");

EXTERN_C_LINKAGE void TestSuite_display_driver_c_fc85efbb_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_display_driver_c_fc85efbb_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_display_driver_c_fc85efbb);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_display_driver_c_fc85efbb_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ClearAlarm_1);
        CPPTEST_TEST(TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_1);
        CPPTEST_TEST(TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_2);
        CPPTEST_TEST(TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_3);
        CPPTEST_TEST(TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_4);
        CPPTEST_TEST(TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_5);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_display_driver_c_fc85efbb_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ClearAlarm_1(void);
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_1(void);
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_2(void);
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_3(void);
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_4(void);
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_5(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_display_driver_c_fc85efbb);

void TestSuite_display_driver_c_fc85efbb_testSuiteSetUp(void);
void TestSuite_display_driver_c_fc85efbb_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_display_driver_c_fc85efbb_testSuiteTearDown(void);
void TestSuite_display_driver_c_fc85efbb_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_display_driver_c_fc85efbb_setUp(void);
void TestSuite_display_driver_c_fc85efbb_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_display_driver_c_fc85efbb_tearDown(void);
void TestSuite_display_driver_c_fc85efbb_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_DisplayDriver_ClearAlarm_1 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ClearAlarm(void) */
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ClearAlarm_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        DisplayDriver_ClearAlarm();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_DisplayDriver_ClearAlarm_1 */

/* CPPTEST_TEST_CASE_BEGIN test_DisplayDriver_ShowAlarm_1 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_1()
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
/* CPPTEST_TEST_CASE_END test_DisplayDriver_ShowAlarm_1 */

/* CPPTEST_TEST_CASE_BEGIN test_DisplayDriver_ShowAlarm_2 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_2()
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
/* CPPTEST_TEST_CASE_END test_DisplayDriver_ShowAlarm_2 */

/* CPPTEST_TEST_CASE_BEGIN test_DisplayDriver_ShowAlarm_3 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_3()
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
/* CPPTEST_TEST_CASE_END test_DisplayDriver_ShowAlarm_3 */

/* CPPTEST_TEST_CASE_BEGIN test_DisplayDriver_ShowAlarm_4 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_4()
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
/* CPPTEST_TEST_CASE_END test_DisplayDriver_ShowAlarm_4 */

/* CPPTEST_TEST_CASE_BEGIN test_DisplayDriver_ShowAlarm_5 */
/* CPPTEST_TEST_CASE_CONTEXT void DisplayDriver_ShowAlarm(int) */
void TestSuite_display_driver_c_fc85efbb_test_DisplayDriver_ShowAlarm_5()
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
/* CPPTEST_TEST_CASE_END test_DisplayDriver_ShowAlarm_5 */
