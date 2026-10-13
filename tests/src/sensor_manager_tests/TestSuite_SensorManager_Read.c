#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/sensor_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/sensor_manager.c");

EXTERN_C_LINKAGE void TestSuite_SensorManager_Read_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_SensorManager_Read_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_SensorManager_Read);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_SensorManager_Read_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_SensorManager_Read_test_null_data);
        CPPTEST_TEST(TestSuite_SensorManager_Read_test_both_sensors_valid);
        CPPTEST_TEST(TestSuite_SensorManager_Read_test_temperature_read_fails);
        CPPTEST_TEST(TestSuite_SensorManager_Read_test_humidity_read_fails);
        CPPTEST_TEST(TestSuite_SensorManager_Read_test_both_reads_fail);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_SensorManager_Read_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_SensorManager_Read_test_null_data(void);
void TestSuite_SensorManager_Read_test_both_sensors_valid(void);
void TestSuite_SensorManager_Read_test_temperature_read_fails(void);
void TestSuite_SensorManager_Read_test_humidity_read_fails(void);
void TestSuite_SensorManager_Read_test_both_reads_fail(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_SensorManager_Read);

void TestSuite_SensorManager_Read_testSuiteSetUp(void);
void TestSuite_SensorManager_Read_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_SensorManager_Read_testSuiteTearDown(void);
void TestSuite_SensorManager_Read_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_SensorManager_Read_setUp(void);
void TestSuite_SensorManager_Read_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_SensorManager_Read_tearDown(void);
void TestSuite_SensorManager_Read_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


static int s_sensorReadTempResult;
static float s_sensorReadTempValue;
static int s_sensorReadTempCalls;
static int s_sensorReadHumResult;
static float s_sensorReadHumValue;
static int s_sensorReadHumCalls;

static void CppTest_StubCallback_SensorManagerRead_TemperatureSensor_ReadCelsius(
    CppTest_StubCallInfo *stubCallInfo,
    int *__return,
    float *temperature)
{
    (void)stubCallInfo;
    s_sensorReadTempCalls++;
    *temperature = s_sensorReadTempValue;
    *__return = s_sensorReadTempResult;
}

static void CppTest_StubCallback_SensorManagerRead_HumiditySensor_ReadPercent(
    CppTest_StubCallInfo *stubCallInfo,
    int *__return,
    float *humidity)
{
    (void)stubCallInfo;
    s_sensorReadHumCalls++;
    *humidity = s_sensorReadHumValue;
    *__return = s_sensorReadHumResult;
}

static void TestSuite_SensorManager_Read_prepare(int tempResult, int humResult)
{
    s_sensorReadTempResult = tempResult;
    s_sensorReadTempValue = 21.5f;
    s_sensorReadTempCalls = 0;
    s_sensorReadHumResult = humResult;
    s_sensorReadHumValue = 55.0f;
    s_sensorReadHumCalls = 0;
    CPPTEST_REGISTER_STUB_CALLBACK(
        "TemperatureSensor_ReadCelsius",
        &CppTest_StubCallback_SensorManagerRead_TemperatureSensor_ReadCelsius);
    CPPTEST_REGISTER_STUB_CALLBACK(
        "HumiditySensor_ReadPercent",
        &CppTest_StubCallback_SensorManagerRead_HumiditySensor_ReadPercent);
}

/* CPPTEST_TEST_CASE_BEGIN test_null_data */
void TestSuite_SensorManager_Read_test_null_data(void)
{
    int result;

    TestSuite_SensorManager_Read_prepare(0, 0);

    result = SensorManager_Read(0);

    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
    CPPTEST_ASSERT_INTEGER_EQUAL(0, s_sensorReadTempCalls);
    CPPTEST_ASSERT_INTEGER_EQUAL(0, s_sensorReadHumCalls);
}
/* CPPTEST_TEST_CASE_END test_null_data */

/* CPPTEST_TEST_CASE_BEGIN test_both_sensors_valid */
void TestSuite_SensorManager_Read_test_both_sensors_valid(void)
{
    SensorData data;
    int result;

    TestSuite_SensorManager_Read_prepare(0, 0);

    result = SensorManager_Read(&data);

    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
    CPPTEST_ASSERT_INTEGER_EQUAL(1, data.temperatureValid);
    CPPTEST_ASSERT_INTEGER_EQUAL(1, data.humidityValid);
    CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(21.5f, data.temperature, 0.001f);
    CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(55.0f, data.humidity, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_both_sensors_valid */

/* CPPTEST_TEST_CASE_BEGIN test_temperature_read_fails */
void TestSuite_SensorManager_Read_test_temperature_read_fails(void)
{
    SensorData data;
    int result;

    TestSuite_SensorManager_Read_prepare(-1, 0);

    result = SensorManager_Read(&data);

    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
    CPPTEST_ASSERT_INTEGER_EQUAL(0, data.temperatureValid);
    CPPTEST_ASSERT_INTEGER_EQUAL(1, data.humidityValid);
    CPPTEST_ASSERT_INTEGER_EQUAL(1, s_sensorReadHumCalls);
}
/* CPPTEST_TEST_CASE_END test_temperature_read_fails */

/* CPPTEST_TEST_CASE_BEGIN test_humidity_read_fails */
void TestSuite_SensorManager_Read_test_humidity_read_fails(void)
{
    SensorData data;
    int result;

    TestSuite_SensorManager_Read_prepare(0, -1);

    result = SensorManager_Read(&data);

    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
    CPPTEST_ASSERT_INTEGER_EQUAL(1, data.temperatureValid);
    CPPTEST_ASSERT_INTEGER_EQUAL(0, data.humidityValid);
}
/* CPPTEST_TEST_CASE_END test_humidity_read_fails */

/* CPPTEST_TEST_CASE_BEGIN test_both_reads_fail */
void TestSuite_SensorManager_Read_test_both_reads_fail(void)
{
    SensorData data;
    int result;

    TestSuite_SensorManager_Read_prepare(-1, -1);

    result = SensorManager_Read(&data);

    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
    CPPTEST_ASSERT_INTEGER_EQUAL(0, data.temperatureValid);
    CPPTEST_ASSERT_INTEGER_EQUAL(0, data.humidityValid);
}
/* CPPTEST_TEST_CASE_END test_both_reads_fail */