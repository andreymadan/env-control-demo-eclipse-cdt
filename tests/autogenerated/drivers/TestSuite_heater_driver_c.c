#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/heater_driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/heater_driver.c");

EXTERN_C_LINKAGE void TestSuite_heater_driver_c_7029e858_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_heater_driver_c_7029e858_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_heater_driver_c_7029e858);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_heater_driver_c_7029e858_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_1);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_2);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_3);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_4);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_5);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_1);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_2);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_3);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_4);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_5);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_1);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_2);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_3);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_4);
        CPPTEST_TEST(TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_5);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_heater_driver_c_7029e858_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_1(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_2(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_3(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_4(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_5(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_1(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_2(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_3(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_4(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_5(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_1(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_2(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_3(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_4(void);
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_5(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_heater_driver_c_7029e858);

void TestSuite_heater_driver_c_7029e858_testSuiteSetUp(void);
void TestSuite_heater_driver_c_7029e858_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_heater_driver_c_7029e858_testSuiteTearDown(void);
void TestSuite_heater_driver_c_7029e858_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_heater_driver_c_7029e858_setUp(void);
void TestSuite_heater_driver_c_7029e858_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_heater_driver_c_7029e858_tearDown(void);
void TestSuite_heater_driver_c_7029e858_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_IsOn_1 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = 0;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_IsOn_1 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_IsOn_2 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_IsOn_2 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_IsOn_3 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_IsOn_3 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_IsOn_4 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = -1;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_IsOn_4 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_IsOn_5 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_IsOn(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_IsOn_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = 1;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_IsOn();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_IsOn_5 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_Off_1 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_Off(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = 0;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_Off_1 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_Off_2 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_Off(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_Off_2 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_Off_3 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_Off(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_Off_3 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_Off_4 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_Off(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = -1;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_Off_4 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_Off_5 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_Off(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_Off_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = 1;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_Off();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_Off_5 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_On_1 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_On(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = 1;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_On_1 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_On_2 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_On(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = 0;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_On_2 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_On_3 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_On(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_On_3 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_On_4 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_On(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_On_4 */

/* CPPTEST_TEST_CASE_BEGIN test_HeaterDriver_On_5 */
/* CPPTEST_TEST_CASE_CONTEXT int HeaterDriver_On(void) */
void TestSuite_heater_driver_c_7029e858_test_HeaterDriver_On_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable heaterOn */ 
    {
         heaterOn  = -1;
    }
    {
        /* Tested function call */
        int _return  = HeaterDriver_On();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_INTEGER("int heaterOn", ( heaterOn ));
    }
}
/* CPPTEST_TEST_CASE_END test_HeaterDriver_On_5 */
