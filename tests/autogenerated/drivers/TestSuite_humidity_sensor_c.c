#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/humidity_sensor.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/humidity_sensor.c");

EXTERN_C_LINKAGE void TestSuite_humidity_sensor_c_f1fe3386_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_humidity_sensor_c_f1fe3386_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_humidity_sensor_c_f1fe3386);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_humidity_sensor_c_f1fe3386_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_1);
        CPPTEST_TEST(TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_2);
        CPPTEST_TEST(TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_3);
        CPPTEST_TEST(TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_4);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_humidity_sensor_c_f1fe3386_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_1(void);
void TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_2(void);
void TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_3(void);
void TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_4(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_humidity_sensor_c_f1fe3386);

void TestSuite_humidity_sensor_c_f1fe3386_testSuiteSetUp(void);
void TestSuite_humidity_sensor_c_f1fe3386_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_humidity_sensor_c_f1fe3386_testSuiteTearDown(void);
void TestSuite_humidity_sensor_c_f1fe3386_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_humidity_sensor_c_f1fe3386_setUp(void);
void TestSuite_humidity_sensor_c_f1fe3386_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_humidity_sensor_c_f1fe3386_tearDown(void);
void TestSuite_humidity_sensor_c_f1fe3386_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_HumiditySensor_ReadPercent_1 */
/* CPPTEST_TEST_CASE_CONTEXT int HumiditySensor_ReadPercent(float *) */
void TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (humidity) */ 
    float _humidity_0 [1];
    float * _humidity  = (float * )cpptestMemset((void*)&_humidity_0, 0, (1 * sizeof(float)));
    {
        /* Tested function call */
        int _return  = HumiditySensor_ReadPercent(_humidity);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("float * _humidity", ( _humidity ), sizeof(float));
    }
}
/* CPPTEST_TEST_CASE_END test_HumiditySensor_ReadPercent_1 */

/* CPPTEST_TEST_CASE_BEGIN test_HumiditySensor_ReadPercent_2 */
/* CPPTEST_TEST_CASE_CONTEXT int HumiditySensor_ReadPercent(float *) */
void TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (humidity) */ 
    float _humidity_0 [16];
    float * _humidity  = (float * )cpptestMemset((void*)&_humidity_0, 0, (16 * sizeof(float)));
    {
        /* Tested function call */
        int _return  = HumiditySensor_ReadPercent(_humidity);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("float * _humidity", ( _humidity ), sizeof(float));
    }
}
/* CPPTEST_TEST_CASE_END test_HumiditySensor_ReadPercent_2 */

/* CPPTEST_TEST_CASE_BEGIN test_HumiditySensor_ReadPercent_3 */
/* CPPTEST_TEST_CASE_CONTEXT int HumiditySensor_ReadPercent(float *) */
void TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (humidity) */ 
    float _humidity_0 [256];
    float * _humidity  = (float * )cpptestMemset((void*)&_humidity_0, 0, (256 * sizeof(float)));
    {
        /* Tested function call */
        int _return  = HumiditySensor_ReadPercent(_humidity);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("float * _humidity", ( _humidity ), sizeof(float));
    }
}
/* CPPTEST_TEST_CASE_END test_HumiditySensor_ReadPercent_3 */

/* CPPTEST_TEST_CASE_BEGIN test_HumiditySensor_ReadPercent_4 */
/* CPPTEST_TEST_CASE_CONTEXT int HumiditySensor_ReadPercent(float *) */
void TestSuite_humidity_sensor_c_f1fe3386_test_HumiditySensor_ReadPercent_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (humidity) */ 
    float * _humidity  = 0 ;
    {
        /* Tested function call */
        int _return  = HumiditySensor_ReadPercent(_humidity);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("float * _humidity", ( _humidity ), sizeof(float));
    }
}
/* CPPTEST_TEST_CASE_END test_HumiditySensor_ReadPercent_4 */
