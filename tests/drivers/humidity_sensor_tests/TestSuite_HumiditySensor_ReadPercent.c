#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/drivers/humidity_sensor.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/drivers/humidity_sensor.c");

EXTERN_C_LINKAGE void TestSuite_HumiditySensor_ReadPercent_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_HumiditySensor_ReadPercent_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_HumiditySensor_ReadPercent);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_HumiditySensor_ReadPercent_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_HumiditySensor_ReadPercent_test_1);
        CPPTEST_TEST(TestSuite_HumiditySensor_ReadPercent_test_2);
        CPPTEST_TEST(TestSuite_HumiditySensor_ReadPercent_test_3);
        CPPTEST_TEST(TestSuite_HumiditySensor_ReadPercent_test_4);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_HumiditySensor_ReadPercent_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_HumiditySensor_ReadPercent_test_1(void);
void TestSuite_HumiditySensor_ReadPercent_test_2(void);
void TestSuite_HumiditySensor_ReadPercent_test_3(void);
void TestSuite_HumiditySensor_ReadPercent_test_4(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_HumiditySensor_ReadPercent);

void TestSuite_HumiditySensor_ReadPercent_testSuiteSetUp(void);
void TestSuite_HumiditySensor_ReadPercent_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_HumiditySensor_ReadPercent_testSuiteTearDown(void);
void TestSuite_HumiditySensor_ReadPercent_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_HumiditySensor_ReadPercent_setUp(void);
void TestSuite_HumiditySensor_ReadPercent_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_HumiditySensor_ReadPercent_tearDown(void);
void TestSuite_HumiditySensor_ReadPercent_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_1 */
/* CPPTEST_TEST_CASE_CONTEXT int HumiditySensor_ReadPercent(float *) */
void TestSuite_HumiditySensor_ReadPercent_test_1()
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
/* CPPTEST_TEST_CASE_END test_1 */

/* CPPTEST_TEST_CASE_BEGIN test_2 */
/* CPPTEST_TEST_CASE_CONTEXT int HumiditySensor_ReadPercent(float *) */
void TestSuite_HumiditySensor_ReadPercent_test_2()
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
/* CPPTEST_TEST_CASE_END test_2 */

/* CPPTEST_TEST_CASE_BEGIN test_3 */
/* CPPTEST_TEST_CASE_CONTEXT int HumiditySensor_ReadPercent(float *) */
void TestSuite_HumiditySensor_ReadPercent_test_3()
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
/* CPPTEST_TEST_CASE_END test_3 */

/* CPPTEST_TEST_CASE_BEGIN test_4 */
/* CPPTEST_TEST_CASE_CONTEXT int HumiditySensor_ReadPercent(float *) */
void TestSuite_HumiditySensor_ReadPercent_test_4()
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
/* CPPTEST_TEST_CASE_END test_4 */
