#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/main.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/main.c");

EXTERN_C_LINKAGE void TestSuite_State_ToString_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_State_ToString_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_State_ToString);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_State_ToString_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_State_ToString_test_1);
        CPPTEST_TEST(TestSuite_State_ToString_test_2);
        CPPTEST_TEST(TestSuite_State_ToString_test_3);
        CPPTEST_TEST(TestSuite_State_ToString_test_4);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_State_ToString_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_State_ToString_test_1(void);
void TestSuite_State_ToString_test_2(void);
void TestSuite_State_ToString_test_3(void);
void TestSuite_State_ToString_test_4(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_State_ToString);

void TestSuite_State_ToString_testSuiteSetUp(void);
void TestSuite_State_ToString_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_State_ToString_testSuiteTearDown(void);
void TestSuite_State_ToString_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_State_ToString_setUp(void);
void TestSuite_State_ToString_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_State_ToString_tearDown(void);
void TestSuite_State_ToString_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT const char * State_ToString(SystemState) */
void TestSuite_State_ToString_test_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (state) */
    SystemState _state  = SYSTEM_IDLE;
    {
        /* Tested function call */
        const char * _return  = State_ToString(_state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT const char * State_ToString(SystemState) */
void TestSuite_State_ToString_test_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (state) */
    SystemState _state  = SYSTEM_HEATING;
    {
        /* Tested function call */
        const char * _return  = State_ToString(_state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_2 */

/* CPPTEST_TEST_CASE_BEGIN test_3 */
/* CPPTEST_TEST_CASE_CONTEXT const char * State_ToString(SystemState) */
void TestSuite_State_ToString_test_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (state) */
    SystemState _state  = SYSTEM_COOLING;
    {
        /* Tested function call */
        const char * _return  = State_ToString(_state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_3 */

/* CPPTEST_TEST_CASE_BEGIN test_4 */
/* CPPTEST_TEST_CASE_CONTEXT const char * State_ToString(SystemState) */
void TestSuite_State_ToString_test_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (state) */
    SystemState _state  = SYSTEM_ALARM;
    {
        /* Tested function call */
        const char * _return  = State_ToString(_state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_4 */
