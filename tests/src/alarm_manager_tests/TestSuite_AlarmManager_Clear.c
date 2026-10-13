#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/alarm_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/alarm_manager.c");

EXTERN_C_LINKAGE void TestSuite_AlarmManager_Clear_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_AlarmManager_Clear_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_AlarmManager_Clear);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_AlarmManager_Clear_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_AlarmManager_Clear_test_1);
        CPPTEST_TEST(TestSuite_AlarmManager_Clear_test_2);
        CPPTEST_TEST(TestSuite_AlarmManager_Clear_test_3);
        CPPTEST_TEST(TestSuite_AlarmManager_Clear_test_4);
        CPPTEST_TEST(TestSuite_AlarmManager_Clear_test_5);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_AlarmManager_Clear_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_AlarmManager_Clear_test_1(void);
void TestSuite_AlarmManager_Clear_test_2(void);
void TestSuite_AlarmManager_Clear_test_3(void);
void TestSuite_AlarmManager_Clear_test_4(void);
void TestSuite_AlarmManager_Clear_test_5(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_AlarmManager_Clear);

void TestSuite_AlarmManager_Clear_testSuiteSetUp(void);
void TestSuite_AlarmManager_Clear_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_AlarmManager_Clear_testSuiteTearDown(void);
void TestSuite_AlarmManager_Clear_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_AlarmManager_Clear_setUp(void);
void TestSuite_AlarmManager_Clear_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_AlarmManager_Clear_tearDown(void);
void TestSuite_AlarmManager_Clear_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Clear(void) */
void TestSuite_AlarmManager_Clear_test_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_NONE;
    }
    {
        /* Tested function call */
        AlarmManager_Clear();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Clear(void) */
void TestSuite_AlarmManager_Clear_test_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_SENSOR_FAILURE;
    }
    {
        /* Tested function call */
        AlarmManager_Clear();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_2 */

/* CPPTEST_TEST_CASE_BEGIN test_3 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Clear(void) */
void TestSuite_AlarmManager_Clear_test_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_OVER_TEMPERATURE;
    }
    {
        /* Tested function call */
        AlarmManager_Clear();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_3 */

/* CPPTEST_TEST_CASE_BEGIN test_4 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Clear(void) */
void TestSuite_AlarmManager_Clear_test_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_HIGH_HUMIDITY;
    }
    {
        /* Tested function call */
        AlarmManager_Clear();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_4 */

/* CPPTEST_TEST_CASE_BEGIN test_5 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Clear(void) */
void TestSuite_AlarmManager_Clear_test_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_ENVIRONMENT;
    }
    {
        /* Tested function call */
        AlarmManager_Clear();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_5 */
