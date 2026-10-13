#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/alarm_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/alarm_manager.c");

EXTERN_C_LINKAGE void TestSuite_AlarmManager_Activate_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_AlarmManager_Activate_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_AlarmManager_Activate);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_AlarmManager_Activate_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_1);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_2);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_3);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_4);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_5);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_6);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_7);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_8);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_9);
        CPPTEST_TEST(TestSuite_AlarmManager_Activate_test_10);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_AlarmManager_Activate_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_AlarmManager_Activate_test_1(void);
void TestSuite_AlarmManager_Activate_test_2(void);
void TestSuite_AlarmManager_Activate_test_3(void);
void TestSuite_AlarmManager_Activate_test_4(void);
void TestSuite_AlarmManager_Activate_test_5(void);
void TestSuite_AlarmManager_Activate_test_6(void);
void TestSuite_AlarmManager_Activate_test_7(void);
void TestSuite_AlarmManager_Activate_test_8(void);
void TestSuite_AlarmManager_Activate_test_9(void);
void TestSuite_AlarmManager_Activate_test_10(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_AlarmManager_Activate);

void TestSuite_AlarmManager_Activate_testSuiteSetUp(void);
void TestSuite_AlarmManager_Activate_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_AlarmManager_Activate_testSuiteTearDown(void);
void TestSuite_AlarmManager_Activate_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_AlarmManager_Activate_setUp(void);
void TestSuite_AlarmManager_Activate_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_AlarmManager_Activate_tearDown(void);
void TestSuite_AlarmManager_Activate_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_NONE;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_NONE;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_ASSERT_ENUM_EQUAL(AlarmType, ALARM_NONE, ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_SENSOR_FAILURE;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_NONE;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_ASSERT_ENUM_EQUAL(AlarmType, ALARM_SENSOR_FAILURE, ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_2 */

/* CPPTEST_TEST_CASE_BEGIN test_3 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_HIGH_HUMIDITY;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_NONE;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_3 */

/* CPPTEST_TEST_CASE_BEGIN test_4 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_NONE;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_SENSOR_FAILURE;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_4 */

/* CPPTEST_TEST_CASE_BEGIN test_5 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_OVER_TEMPERATURE;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_SENSOR_FAILURE;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_5 */

/* CPPTEST_TEST_CASE_BEGIN test_6 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_NONE;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_OVER_TEMPERATURE;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_6 */

/* CPPTEST_TEST_CASE_BEGIN test_7 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_HIGH_HUMIDITY;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_OVER_TEMPERATURE;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_7 */

/* CPPTEST_TEST_CASE_BEGIN test_8 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_SENSOR_FAILURE;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_HIGH_HUMIDITY;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_8 */

/* CPPTEST_TEST_CASE_BEGIN test_9 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_ENVIRONMENT;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_HIGH_HUMIDITY;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(AlarmType, "AlarmType activeAlarm", ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_9 */

/* CPPTEST_TEST_CASE_BEGIN test_10 */
/* CPPTEST_TEST_CASE_CONTEXT void AlarmManager_Activate(AlarmType) */
void TestSuite_AlarmManager_Activate_test_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (alarm) */
    AlarmType _alarm  = ALARM_OVER_TEMPERATURE;
    /* Initializing global variable activeAlarm */
    {
         activeAlarm  = ALARM_ENVIRONMENT;
    }
    {
        /* Tested function call */
        AlarmManager_Activate(_alarm);
        /* Post-condition check */
        CPPTEST_ASSERT_ENUM_EQUAL(AlarmType, ALARM_OVER_TEMPERATURE, ( activeAlarm ));
    }
}
/* CPPTEST_TEST_CASE_END test_10 */
