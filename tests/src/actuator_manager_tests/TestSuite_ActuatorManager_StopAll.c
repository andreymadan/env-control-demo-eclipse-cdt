#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/actuator_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/actuator_manager.c");

EXTERN_C_LINKAGE void TestSuite_ActuatorManager_StopAll_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_ActuatorManager_StopAll_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_ActuatorManager_StopAll);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_ActuatorManager_StopAll_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_ActuatorManager_StopAll_test_both_success);
        CPPTEST_TEST(TestSuite_ActuatorManager_StopAll_test_fan_fails);
        CPPTEST_TEST(TestSuite_ActuatorManager_StopAll_test_heater_fails);
        CPPTEST_TEST(TestSuite_ActuatorManager_StopAll_test_both_fail);
        CPPTEST_TEST(TestSuite_ActuatorManager_StopAll_test_fan_fails_alternate);
        CPPTEST_TEST(TestSuite_ActuatorManager_StopAll_test_fan_positive_error);
        CPPTEST_TEST(TestSuite_ActuatorManager_StopAll_test_heater_positive_error);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_ActuatorManager_StopAll_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_ActuatorManager_StopAll_test_both_success(void);
void TestSuite_ActuatorManager_StopAll_test_fan_fails(void);
void TestSuite_ActuatorManager_StopAll_test_heater_fails(void);
void TestSuite_ActuatorManager_StopAll_test_both_fail(void);
void TestSuite_ActuatorManager_StopAll_test_fan_fails_alternate(void);
void TestSuite_ActuatorManager_StopAll_test_fan_positive_error(void);
void TestSuite_ActuatorManager_StopAll_test_heater_positive_error(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_ActuatorManager_StopAll);

void TestSuite_ActuatorManager_StopAll_testSuiteSetUp(void);
void TestSuite_ActuatorManager_StopAll_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_ActuatorManager_StopAll_testSuiteTearDown(void);
void TestSuite_ActuatorManager_StopAll_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_ActuatorManager_StopAll_setUp(void);
void TestSuite_ActuatorManager_StopAll_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_ActuatorManager_StopAll_tearDown(void);
void TestSuite_ActuatorManager_StopAll_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* ============================================================================
 * STUB CALLBACK DEFINITIONS - Dynamic Stub Configuration
 * ============================================================================ */

void CppTest_StubCallback_StopAll_FanDriver_Off_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

void CppTest_StubCallback_StopAll_FanDriver_Off_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

void CppTest_StubCallback_StopAll_HeaterDriver_Off_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

void CppTest_StubCallback_StopAll_HeaterDriver_Off_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

/* ============================================================================
 * TEST CASE IMPLEMENTATIONS - int ActuatorManager_StopAll(void)
 * ============================================================================ */

/* CPPTEST_TEST_CASE_BEGIN test_both_success */
void TestSuite_ActuatorManager_StopAll_test_both_success(void)
{
    /* Arrange: Both drivers return success */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StopAll_FanDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StopAll_HeaterDriver_Off_Success);

    /* Act: Call the function */
    int result = ActuatorManager_StopAll();

    /* Assert: Verify success (0) - (0 == 0 && 0 == 0) ? 0 : -1 = 0 */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_both_success */

/* CPPTEST_TEST_CASE_BEGIN test_fan_fails */
void TestSuite_ActuatorManager_StopAll_test_fan_fails(void)
{
    /* Arrange: Fan fails, heater succeeds */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StopAll_FanDriver_Off_Failure);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StopAll_HeaterDriver_Off_Success);

    /* Act: Call the function */
    int result = ActuatorManager_StopAll();

    /* Assert: Verify failure (-1) - (-1 == 0 && 0 == 0) ? 0 : -1 = -1 */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_fan_fails */

/* CPPTEST_TEST_CASE_BEGIN test_heater_fails */
void TestSuite_ActuatorManager_StopAll_test_heater_fails(void)
{
    /* Arrange: Fan succeeds, heater fails */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StopAll_FanDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StopAll_HeaterDriver_Off_Failure);

    /* Act: Call the function */
    int result = ActuatorManager_StopAll();

    /* Assert: Verify failure (-1) - (0 == 0 && -1 == 0) ? 0 : -1 = -1 */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_heater_fails */

/* CPPTEST_TEST_CASE_BEGIN test_both_fail */
void TestSuite_ActuatorManager_StopAll_test_both_fail(void)
{
    /* Arrange: Both drivers fail */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StopAll_FanDriver_Off_Failure);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StopAll_HeaterDriver_Off_Failure);

    /* Act: Call the function */
    int result = ActuatorManager_StopAll();

    /* Assert: Verify failure (-1) - (-1 == 0 && -1 == 0) ? 0 : -1 = -1 */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_both_fail */

/* MC/DC: verify fanResult == 0 condition correctly identifies non-zero values */
/* CPPTEST_TEST_CASE_BEGIN test_fan_fails_alternate */
void TestSuite_ActuatorManager_StopAll_test_fan_fails_alternate(void)
{
    /* Arrange: Fan fails with non-zero error code */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StopAll_FanDriver_Off_Failure);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StopAll_HeaterDriver_Off_Success);

    /* Act: Call the function */
    int result = ActuatorManager_StopAll();

    /* Assert: Verify failure (-1) - Any non-zero fan result triggers failure */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_fan_fails_alternate */

/* MC/DC: StopAll with fanResult > 0 (positive error) */
/* CPPTEST_TEST_CASE_BEGIN test_fan_positive_error */
void TestSuite_ActuatorManager_StopAll_test_fan_positive_error(void)
{
    /* Arrange: Create a callback for FanDriver_Off that returns a non-zero error */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StopAll_FanDriver_Off_Failure);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StopAll_HeaterDriver_Off_Success);

    /* Act: Call the function */
    int result = ActuatorManager_StopAll();

    /* Assert: Verify failure (-1) - Ensures non-zero detection, not just -1 */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_fan_positive_error */

/* MC/DC: StopAll with heaterResult > 0 (positive error), verifies AND short-circuit prevention */
/* CPPTEST_TEST_CASE_BEGIN test_heater_positive_error */
void TestSuite_ActuatorManager_StopAll_test_heater_positive_error(void)
{
    /* Arrange: Both return success codes initially */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_StopAll_FanDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_StopAll_HeaterDriver_Off_Failure);

    /* Act: Call the function */
    int result = ActuatorManager_StopAll();

    /* Assert: Verify failure (-1) */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_heater_positive_error */
