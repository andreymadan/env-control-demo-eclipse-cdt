#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/main.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/main.c");

EXTERN_C_LINKAGE void TestSuite_main_c_7b483bc2_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_main_c_7b483bc2_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_main_c_7b483bc2);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_main_c_7b483bc2_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_main_c_7b483bc2_test_State_ToString_1);
        CPPTEST_TEST(TestSuite_main_c_7b483bc2_test_State_ToString_2);
        CPPTEST_TEST(TestSuite_main_c_7b483bc2_test_State_ToString_3);
        CPPTEST_TEST(TestSuite_main_c_7b483bc2_test_State_ToString_4);
        CPPTEST_TEST(TestSuite_main_c_7b483bc2_test_main_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_main_c_7b483bc2_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_main_c_7b483bc2_test_State_ToString_1(void);
void TestSuite_main_c_7b483bc2_test_State_ToString_2(void);
void TestSuite_main_c_7b483bc2_test_State_ToString_3(void);
void TestSuite_main_c_7b483bc2_test_State_ToString_4(void);
void TestSuite_main_c_7b483bc2_test_main_1(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_main_c_7b483bc2);

void TestSuite_main_c_7b483bc2_testSuiteSetUp(void);
void TestSuite_main_c_7b483bc2_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_main_c_7b483bc2_testSuiteTearDown(void);
void TestSuite_main_c_7b483bc2_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_main_c_7b483bc2_setUp(void);
void TestSuite_main_c_7b483bc2_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_main_c_7b483bc2_tearDown(void);
void TestSuite_main_c_7b483bc2_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_State_ToString_1 */
/* CPPTEST_TEST_CASE_CONTEXT const char * State_ToString(SystemState) */
void TestSuite_main_c_7b483bc2_test_State_ToString_1()
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
/* CPPTEST_TEST_CASE_END test_State_ToString_1 */

/* CPPTEST_TEST_CASE_BEGIN test_State_ToString_2 */
/* CPPTEST_TEST_CASE_CONTEXT const char * State_ToString(SystemState) */
void TestSuite_main_c_7b483bc2_test_State_ToString_2()
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
/* CPPTEST_TEST_CASE_END test_State_ToString_2 */

/* CPPTEST_TEST_CASE_BEGIN test_State_ToString_3 */
/* CPPTEST_TEST_CASE_CONTEXT const char * State_ToString(SystemState) */
void TestSuite_main_c_7b483bc2_test_State_ToString_3()
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
/* CPPTEST_TEST_CASE_END test_State_ToString_3 */

/* CPPTEST_TEST_CASE_BEGIN test_State_ToString_4 */
/* CPPTEST_TEST_CASE_CONTEXT const char * State_ToString(SystemState) */
void TestSuite_main_c_7b483bc2_test_State_ToString_4()
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
/* CPPTEST_TEST_CASE_END test_State_ToString_4 */

/* CPPTEST_TEST_CASE_BEGIN test_main_1 */
/* CPPTEST_TEST_CASE_CONTEXT int main(void) */
void TestSuite_main_c_7b483bc2_test_main_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        int _return  = main();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_1 */
