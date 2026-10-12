#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/sensor_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/sensor_manager.c");

EXTERN_C_LINKAGE void TestSuite_sensor_manager_c_928c94d4_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_sensor_manager_c_928c94d4_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_sensor_manager_c_928c94d4);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_sensor_manager_c_928c94d4_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_sensor_manager_c_928c94d4_test_SensorManager_Read_1);
        CPPTEST_TEST(TestSuite_sensor_manager_c_928c94d4_test_SensorManager_Read_2);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_sensor_manager_c_928c94d4_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_sensor_manager_c_928c94d4_test_SensorManager_Read_1(void);
void TestSuite_sensor_manager_c_928c94d4_test_SensorManager_Read_2(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_sensor_manager_c_928c94d4);

void TestSuite_sensor_manager_c_928c94d4_testSuiteSetUp(void);
void TestSuite_sensor_manager_c_928c94d4_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_sensor_manager_c_928c94d4_testSuiteTearDown(void);
void TestSuite_sensor_manager_c_928c94d4_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_sensor_manager_c_928c94d4_setUp(void);
void TestSuite_sensor_manager_c_928c94d4_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_sensor_manager_c_928c94d4_tearDown(void);
void TestSuite_sensor_manager_c_928c94d4_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_SensorManager_Read_1 */
/* CPPTEST_TEST_CASE_CONTEXT int SensorManager_Read(SensorData *) */
void TestSuite_sensor_manager_c_928c94d4_test_SensorManager_Read_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    SensorData * _data  = 0 ;
    {
        /* Tested function call */
        int _return  = SensorManager_Read(_data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("SensorData * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_SensorManager_Read_1 */

/* CPPTEST_TEST_CASE_BEGIN test_SensorManager_Read_2 */
/* CPPTEST_TEST_CASE_CONTEXT int SensorManager_Read(SensorData *) */
void TestSuite_sensor_manager_c_928c94d4_test_SensorManager_Read_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    SensorData _data_0 ;
    SensorData * _data  = & _data_0;
    {
        /* Tested function call */
        int _return  = SensorManager_Read(_data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("SensorData * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_SensorManager_Read_2 */
