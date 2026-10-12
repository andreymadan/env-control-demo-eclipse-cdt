#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/fan_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/fan_driver.c");

EXTERN_C_LINKAGE void TestSuite_fan_driver_c_1e0e67fb_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_fan_driver_c_1e0e67fb_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_fan_driver_c_1e0e67fb);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_fan_driver_c_1e0e67fb_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_1);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_2);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_3);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_4);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_5);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_1);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_2);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_3);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_4);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_5);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_1);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_2);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_3);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_4);
        CPPTEST_TEST(TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_5);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_fan_driver_c_1e0e67fb_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_1(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_2(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_3(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_4(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_5(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_1(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_2(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_3(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_4(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_5(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_1(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_2(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_3(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_4(void);
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_5(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_fan_driver_c_1e0e67fb);

void TestSuite_fan_driver_c_1e0e67fb_testSuiteSetUp(void);
void TestSuite_fan_driver_c_1e0e67fb_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_fan_driver_c_1e0e67fb_testSuiteTearDown(void);
void TestSuite_fan_driver_c_1e0e67fb_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_fan_driver_c_1e0e67fb_setUp(void);
void TestSuite_fan_driver_c_1e0e67fb_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_fan_driver_c_1e0e67fb_tearDown(void);
void TestSuite_fan_driver_c_1e0e67fb_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_IsOn_1 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_IsOn(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = 0;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_IsOn_1 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_IsOn_2 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_IsOn(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = FanDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_IsOn_2 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_IsOn_3 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_IsOn(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = FanDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_IsOn_3 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_IsOn_4 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_IsOn(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = -1;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_IsOn_4 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_IsOn_5 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_IsOn(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_IsOn_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = 1;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_IsOn_5 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_Off_1 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = 0;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_Off_1 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_Off_2 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_Off_2 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_Off_3 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_Off_3 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_Off_4 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = -1;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_Off_4 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_Off_5 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_Off(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_Off_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = 1;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_Off_5 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_On_1 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_On(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = 1;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_On_1 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_On_2 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_On(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = 0;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_On_2 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_On_3 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_On(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = FanDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_On_3 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_On_4 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_On(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = FanDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_On_4 */

/* CPPTEST_TEST_CASE_BEGIN test_FanDriver_On_5 */
/* CPPTEST_TEST_CASE_CONTEXT int FanDriver_On(void) */
void TestSuite_fan_driver_c_1e0e67fb_test_FanDriver_On_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable fanOn */ 
    {
         fanOn  = -1;
    }
    {
        /* Tested function call */
        int _return  = FanDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int fanOn", ( fanOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_FanDriver_On_5 */
