#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/buzzer_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/buzzer_driver.c");

EXTERN_C_LINKAGE void TestSuite_buzzer_driver_c_705ca493_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_buzzer_driver_c_705ca493_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_buzzer_driver_c_705ca493);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_buzzer_driver_c_705ca493_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_buzzer_driver_c_705ca493_test_BuzzerDriver_Disable_1);
        CPPTEST_TEST(TestSuite_buzzer_driver_c_705ca493_test_BuzzerDriver_Enable_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_buzzer_driver_c_705ca493_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_buzzer_driver_c_705ca493_test_BuzzerDriver_Disable_1(void);
void TestSuite_buzzer_driver_c_705ca493_test_BuzzerDriver_Enable_1(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_buzzer_driver_c_705ca493);

void TestSuite_buzzer_driver_c_705ca493_testSuiteSetUp(void);
void TestSuite_buzzer_driver_c_705ca493_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_buzzer_driver_c_705ca493_testSuiteTearDown(void);
void TestSuite_buzzer_driver_c_705ca493_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_buzzer_driver_c_705ca493_setUp(void);
void TestSuite_buzzer_driver_c_705ca493_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_buzzer_driver_c_705ca493_tearDown(void);
void TestSuite_buzzer_driver_c_705ca493_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_BuzzerDriver_Disable_1 */
/* CPPTEST_TEST_CASE_CONTEXT void BuzzerDriver_Disable(void) */
void TestSuite_buzzer_driver_c_705ca493_test_BuzzerDriver_Disable_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        BuzzerDriver_Disable();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_BuzzerDriver_Disable_1 */

/* CPPTEST_TEST_CASE_BEGIN test_BuzzerDriver_Enable_1 */
/* CPPTEST_TEST_CASE_CONTEXT void BuzzerDriver_Enable(void) */
void TestSuite_buzzer_driver_c_705ca493_test_BuzzerDriver_Enable_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        BuzzerDriver_Enable();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_BuzzerDriver_Enable_1 */
