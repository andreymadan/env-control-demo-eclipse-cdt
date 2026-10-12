#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/main.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/main.c");

EXTERN_C_LINKAGE void TestSuite_main_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_main_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_main);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_main_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_main_test_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_main_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_main_test_1(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_main);

void TestSuite_main_testSuiteSetUp(void);
void TestSuite_main_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_main_testSuiteTearDown(void);
void TestSuite_main_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_main_setUp(void);
void TestSuite_main_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_main_tearDown(void);
void TestSuite_main_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT int main(void) */
void TestSuite_main_test_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        int _return  = main();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_1 */
