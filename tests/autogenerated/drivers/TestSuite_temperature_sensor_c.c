#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/temperature_sensor.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/temperature_sensor.c");

EXTERN_C_LINKAGE void TestSuite_temperature_sensor_c_2baa7d8f_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_temperature_sensor_c_2baa7d8f_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_temperature_sensor_c_2baa7d8f);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_temperature_sensor_c_2baa7d8f_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_1);
        CPPTEST_TEST(TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_2);
        CPPTEST_TEST(TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_3);
        CPPTEST_TEST(TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_4);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_temperature_sensor_c_2baa7d8f_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_1(void);
void TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_2(void);
void TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_3(void);
void TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_4(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_temperature_sensor_c_2baa7d8f);

void TestSuite_temperature_sensor_c_2baa7d8f_testSuiteSetUp(void);
void TestSuite_temperature_sensor_c_2baa7d8f_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_temperature_sensor_c_2baa7d8f_testSuiteTearDown(void);
void TestSuite_temperature_sensor_c_2baa7d8f_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_temperature_sensor_c_2baa7d8f_setUp(void);
void TestSuite_temperature_sensor_c_2baa7d8f_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_temperature_sensor_c_2baa7d8f_tearDown(void);
void TestSuite_temperature_sensor_c_2baa7d8f_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_TemperatureSensor_ReadCelsius_1 */
/* CPPTEST_TEST_CASE_CONTEXT int TemperatureSensor_ReadCelsius(float *) */
void TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (temperature) */ 
    float _temperature_0 [1];
    float * _temperature  = (float * )cpptestMemset((void*)&_temperature_0, 0, (1 * sizeof(float)));
    {
        /* Tested function call */
        int _return  = TemperatureSensor_ReadCelsius(_temperature);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("float * _temperature", ( _temperature ), sizeof(float));
    }
}
/* CPPTEST_TEST_CASE_END test_TemperatureSensor_ReadCelsius_1 */

/* CPPTEST_TEST_CASE_BEGIN test_TemperatureSensor_ReadCelsius_2 */
/* CPPTEST_TEST_CASE_CONTEXT int TemperatureSensor_ReadCelsius(float *) */
void TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (temperature) */ 
    float _temperature_0 [16];
    float * _temperature  = (float * )cpptestMemset((void*)&_temperature_0, 0, (16 * sizeof(float)));
    {
        /* Tested function call */
        int _return  = TemperatureSensor_ReadCelsius(_temperature);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("float * _temperature", ( _temperature ), sizeof(float));
    }
}
/* CPPTEST_TEST_CASE_END test_TemperatureSensor_ReadCelsius_2 */

/* CPPTEST_TEST_CASE_BEGIN test_TemperatureSensor_ReadCelsius_3 */
/* CPPTEST_TEST_CASE_CONTEXT int TemperatureSensor_ReadCelsius(float *) */
void TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (temperature) */ 
    float _temperature_0 [256];
    float * _temperature  = (float * )cpptestMemset((void*)&_temperature_0, 0, (256 * sizeof(float)));
    {
        /* Tested function call */
        int _return  = TemperatureSensor_ReadCelsius(_temperature);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("float * _temperature", ( _temperature ), sizeof(float));
    }
}
/* CPPTEST_TEST_CASE_END test_TemperatureSensor_ReadCelsius_3 */

/* CPPTEST_TEST_CASE_BEGIN test_TemperatureSensor_ReadCelsius_4 */
/* CPPTEST_TEST_CASE_CONTEXT int TemperatureSensor_ReadCelsius(float *) */
void TestSuite_temperature_sensor_c_2baa7d8f_test_TemperatureSensor_ReadCelsius_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (temperature) */ 
    float * _temperature  = 0 ;
    {
        /* Tested function call */
        int _return  = TemperatureSensor_ReadCelsius(_temperature);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("float * _temperature", ( _temperature ), sizeof(float));
    }
}
/* CPPTEST_TEST_CASE_END test_TemperatureSensor_ReadCelsius_4 */
