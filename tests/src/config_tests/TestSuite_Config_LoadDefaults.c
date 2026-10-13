#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/config.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/config.c");

EXTERN_C_LINKAGE void TestSuite_Config_LoadDefaults_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_Config_LoadDefaults_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_Config_LoadDefaults);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_Config_LoadDefaults_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_Config_LoadDefaults_test_1);
        CPPTEST_TEST(TestSuite_Config_LoadDefaults_test_2);
        CPPTEST_TEST(TestSuite_Config_LoadDefaults_test_case_1234);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_Config_LoadDefaults_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_Config_LoadDefaults_test_1(void);
void TestSuite_Config_LoadDefaults_test_2(void);
void TestSuite_Config_LoadDefaults_test_case_1234(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Config_LoadDefaults);

void TestSuite_Config_LoadDefaults_testSuiteSetUp(void);
void TestSuite_Config_LoadDefaults_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Config_LoadDefaults_testSuiteTearDown(void);
void TestSuite_Config_LoadDefaults_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Config_LoadDefaults_setUp(void);
void TestSuite_Config_LoadDefaults_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Config_LoadDefaults_tearDown(void);
void TestSuite_Config_LoadDefaults_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Config_LoadDefaults(SystemConfig *) */
void TestSuite_Config_LoadDefaults_test_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (config) */
    SystemConfig * _config  = 0 ;
    {
        /* Tested function call */
        Config_LoadDefaults(_config);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("SystemConfig * _config ", ( _config ));
    }
}
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Config_LoadDefaults(SystemConfig *) */
void TestSuite_Config_LoadDefaults_test_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (config) */
    SystemConfig _config_0 ;
    SystemConfig * _config  = & _config_0;
    {
        /* Tested function call */
        Config_LoadDefaults(_config);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("SystemConfig * _config ", ( _config ));
    }
}
/* CPPTEST_TEST_CASE_END test_2 */

/* CPPTEST_TEST_CASE_BEGIN test_case_1234 */
void TestSuite_Config_LoadDefaults_test_case_1234()
{
   //
         SystemConfig _config_0 ;
            SystemConfig * _config  = & _config_0;

         Config_LoadDefaults(0);
          CPPTEST_ASSERT(0 != ( _config ));


}
/* CPPTEST_TEST_CASE_END test_case_1234 */
