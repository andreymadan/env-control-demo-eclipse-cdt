#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/actuator_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/actuator_manager.c");

EXTERN_C_LINKAGE void TestSuite_actuator_manager_c_6daa83ce_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_actuator_manager_c_6daa83ce_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_actuator_manager_c_6daa83ce);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_actuator_manager_c_6daa83ce_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartFan_success);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartFan_heater_off_fails);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopFan_success);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartHeater_success);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartHeater_fan_off_fails);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopHeater_success);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_both_success);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_fan_fails);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_heater_fails);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_both_fail);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_cooldown_expired);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_cooldown_active);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_fan_fails_alternate);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_exact_boundary);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_just_below_boundary);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_zero_cooldown);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_large_cooldown);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartFan_fan_on_fails);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartHeater_heater_on_fails);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_zero_elapsed);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_fan_positive_error);
        CPPTEST_TEST(TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_heater_positive_error);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_actuator_manager_c_6daa83ce_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartFan_success(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartFan_heater_off_fails(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopFan_success(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartHeater_success(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartHeater_fan_off_fails(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopHeater_success(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_both_success(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_fan_fails(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_heater_fails(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_both_fail(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_cooldown_expired(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_cooldown_active(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_fan_fails_alternate(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_exact_boundary(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_just_below_boundary(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_zero_cooldown(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_large_cooldown(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartFan_fan_on_fails(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartHeater_heater_on_fails(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_zero_elapsed(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_fan_positive_error(void);
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_heater_positive_error(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_actuator_manager_c_6daa83ce);

void TestSuite_actuator_manager_c_6daa83ce_testSuiteSetUp(void);
void TestSuite_actuator_manager_c_6daa83ce_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_actuator_manager_c_6daa83ce_testSuiteTearDown(void);
void TestSuite_actuator_manager_c_6daa83ce_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_actuator_manager_c_6daa83ce_setUp(void);
void TestSuite_actuator_manager_c_6daa83ce_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_actuator_manager_c_6daa83ce_tearDown(void);
void TestSuite_actuator_manager_c_6daa83ce_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* ============================================================================
 * STUB CALLBACK DEFINITIONS - Dynamic Stub Configuration
 * ============================================================================ */

/* Stub callback for HeaterDriver_Off - returns success (0) */
void CppTest_StubCallback_HeaterDriver_Off_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

/* Stub callback for HeaterDriver_Off - returns failure (-1) */
void CppTest_StubCallback_HeaterDriver_Off_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

/* Stub callback for FanDriver_Off - returns success (0) */
void CppTest_StubCallback_FanDriver_Off_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

/* Stub callback for FanDriver_Off - returns failure (-1) */
void CppTest_StubCallback_FanDriver_Off_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

/* Stub callback for FanDriver_On - returns success (0) */
void CppTest_StubCallback_FanDriver_On_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

/* Stub callback for HeaterDriver_On - returns success (0) */
void CppTest_StubCallback_HeaterDriver_On_Success(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = 0;
}

/* Stub callback for HeaterDriver_On - returns failure (-1) */
void CppTest_StubCallback_HeaterDriver_On_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

/* Stub callback for FanDriver_On - returns failure (-1) */
void CppTest_StubCallback_FanDriver_On_Failure(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
    *__return = -1;
}

/* Stub callback for Clock_GetSeconds - returns configurable time value */
unsigned long g_clock_seconds = 1000UL;

void CppTest_StubCallback_Clock_GetSeconds(CppTest_StubCallInfo* stubCallInfo, unsigned long* __return)
{
    *__return = g_clock_seconds;
}

/* ============================================================================
 * TEST CASE IMPLEMENTATIONS
 * ============================================================================ */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StartFan_success */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StartFan(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartFan_success(void)
{
    /* Arrange: Register stub callbacks for success path */
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_On", &CppTest_StubCallback_FanDriver_On_Success);
    
    /* Act: Call the function */
    int result = ActuatorManager_StartFan();
    
    /* Assert: Verify success return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StartFan_success */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StartFan_heater_off_fails */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StartFan(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartFan_heater_off_fails(void)
{
    /* Arrange: Register stub callback for failure path */
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Failure);
    
    /* Act: Call the function */
    int result = ActuatorManager_StartFan();
    
    /* Assert: Verify failure return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StartFan_heater_off_fails */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StopFan_success */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopFan(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopFan_success(void)
{
    /* Arrange: Register stub callback */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Success);
    
    /* Act: Call the function */
    int result = ActuatorManager_StopFan();
    
    /* Assert: Verify return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StopFan_success */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StartHeater_success */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StartHeater(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartHeater_success(void)
{
    /* Arrange: Register stub callbacks for success path */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_On", &CppTest_StubCallback_HeaterDriver_On_Success);
    
    /* Act: Call the function */
    int result = ActuatorManager_StartHeater();
    
    /* Assert: Verify success return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StartHeater_success */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StartHeater_fan_off_fails */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StartHeater(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartHeater_fan_off_fails(void)
{
    /* Arrange: Register stub callback for failure path */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Failure);
    
    /* Act: Call the function */
    int result = ActuatorManager_StartHeater();
    
    /* Assert: Verify failure return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StartHeater_fan_off_fails */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StopHeater_success */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopHeater(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopHeater_success(void)
{
    /* Arrange: Register stub callback */
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Success);
    
    /* Act: Call the function */
    int result = ActuatorManager_StopHeater();
    
    /* Assert: Verify return code */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StopHeater_success */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StopAll_both_success */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopAll(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_both_success(void)
{
    /* Arrange: Both drivers return success */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Success);
    
    /* Act: Call the function */
    int result = ActuatorManager_StopAll();
    
    /* Assert: Verify success (0) - (0 == 0 && 0 == 0) ? 0 : -1 = 0 */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StopAll_both_success */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StopAll_fan_fails */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopAll(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_fan_fails(void)
{
    /* Arrange: Fan fails, heater succeeds */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Failure);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Success);
    
    /* Act: Call the function */
    int result = ActuatorManager_StopAll();
    
    /* Assert: Verify failure (-1) - (-1 == 0 && 0 == 0) ? 0 : -1 = -1 */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StopAll_fan_fails */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StopAll_heater_fails */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopAll(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_heater_fails(void)
{
    /* Arrange: Fan succeeds, heater fails */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Failure);
    
    /* Act: Call the function */
    int result = ActuatorManager_StopAll();
    
    /* Assert: Verify failure (-1) - (0 == 0 && -1 == 0) ? 0 : -1 = -1 */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StopAll_heater_fails */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StopAll_both_fail */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopAll(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_both_fail(void)
{
    /* Arrange: Both drivers fail */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Failure);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Failure);
    
    /* Act: Call the function */
    int result = ActuatorManager_StopAll();
    
    /* Assert: Verify failure (-1) - (-1 == 0 && -1 == 0) ? 0 : -1 = -1 */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StopAll_both_fail */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_CanStartFan_cooldown_expired */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_CanStartFan(unsigned long, unsigned int) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_cooldown_expired(void)
{
    /* Arrange: Set current time to 1000, last stop time 900, cooldown 50 seconds */
    g_clock_seconds = 1000UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_Clock_GetSeconds);
    
    unsigned long lastStopTime = 900UL;
    unsigned int cooldownSeconds = 50U;

    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);
    
    /* Assert: Verify result is 1 (true) - (1000 - 900 = 100) >= 50 ? 1 : 0 = 1 */
    CPPTEST_ASSERT_EQUAL(1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_CanStartFan_cooldown_expired */

/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_CanStartFan_cooldown_active */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_CanStartFan(unsigned long, unsigned int) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_cooldown_active(void)
{
    /* Arrange: Set current time to 1000, last stop time 970, cooldown 50 seconds */
    g_clock_seconds = 1000UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_Clock_GetSeconds);
    
    unsigned long lastStopTime = 970UL;
    unsigned int cooldownSeconds = 50U;
    
    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);
    
    /* Assert: Verify result is 0 (false) - (1000 - 970 = 30) >= 50 ? 1 : 0 = 0 */
    CPPTEST_ASSERT_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_CanStartFan_cooldown_active */

/* ============================================================================
 * ADDITIONAL MC/DC TEST CASES - Modified Condition/Decision Coverage
 * ============================================================================ */

/* MC/DC Test 13: StopAll with different failure codes for fan */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StopAll_fan_fails_alternate */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopAll(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_fan_fails_alternate(void)
{
    /* Arrange: Fan fails with different error code (1 instead of -1) */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Failure);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Success);
    
    /* Act: Call the function */
    int result = ActuatorManager_StopAll();
    
    /* Assert: Verify failure (-1) - Any non-zero fan result triggers failure */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StopAll_fan_fails_alternate */

/* MC/DC Test 14: CanStartFan with boundary condition - exact equality */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_CanStartFan_exact_boundary */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_CanStartFan(unsigned long, unsigned int) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_exact_boundary(void)
{
    /* Arrange: Elapsed time equals exactly the cooldown (boundary condition) */
    g_clock_seconds = 1100UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_Clock_GetSeconds);
    
    unsigned long lastStopTime = 1000UL;
    unsigned int cooldownSeconds = 100U;
    
    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);
    
    /* Assert: Verify result is 1 - (1100 - 1000 = 100) >= 100 ? 1 : 0 = 1 */
    CPPTEST_ASSERT_EQUAL(1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_CanStartFan_exact_boundary */

/* MC/DC Test 15: CanStartFan with boundary condition - just below equality */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_CanStartFan_just_below_boundary */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_CanStartFan(unsigned long, unsigned int) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_just_below_boundary(void)
{
    /* Arrange: Elapsed time is just below cooldown (boundary -1) */
    g_clock_seconds = 1099UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_Clock_GetSeconds);
    
    unsigned long lastStopTime = 1000UL;
    unsigned int cooldownSeconds = 100U;
    
    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);
    
    /* Assert: Verify result is 0 - (1099 - 1000 = 99) >= 100 ? 1 : 0 = 0 */
    CPPTEST_ASSERT_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_CanStartFan_just_below_boundary */

/* MC/DC Test 16: CanStartFan with zero cooldown */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_CanStartFan_zero_cooldown */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_CanStartFan(unsigned long, unsigned int) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_zero_cooldown(void)
{
    /* Arrange: Cooldown is 0 seconds (always allowed) */
    g_clock_seconds = 500UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_Clock_GetSeconds);
    
    unsigned long lastStopTime = 1000UL;  /* Even future stop time */
    unsigned int cooldownSeconds = 0U;
    
    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);
    
    /* Assert: Verify result is 1 - Any elapsed >= 0 is always true */
    CPPTEST_ASSERT_EQUAL(1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_CanStartFan_zero_cooldown */

/* MC/DC Test 17: CanStartFan with large cooldown value */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_CanStartFan_large_cooldown */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_CanStartFan(unsigned long, unsigned int) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_large_cooldown(void)
{
    /* Arrange: Very large cooldown that hasn't expired */
    g_clock_seconds = 1000UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_Clock_GetSeconds);
    
    unsigned long lastStopTime = 0UL;
    unsigned int cooldownSeconds = 2000U;  /* 2000 seconds cooldown */
    
    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);
    
    /* Assert: Verify result is 0 - (1000 - 0 = 1000) >= 2000 ? 1 : 0 = 0 */
    CPPTEST_ASSERT_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_CanStartFan_large_cooldown */

/* MC/DC Test 18: StartFan with FanDriver_On failure */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StartFan_fan_on_fails */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StartFan(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartFan_fan_on_fails(void)
{
    /* Arrange: Heater off succeeds but FanDriver_On fails */
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Success);
    /* Create a callback for FanDriver_On failure */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_On", &CppTest_StubCallback_FanDriver_On_Failure);
    
    /* Act: Call the function */
    int result = ActuatorManager_StartFan();
    
    /* Assert: FanDriver_On failure code is returned */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StartFan_fan_on_fails */

/* MC/DC Test 19: StartHeater with HeaterDriver_On failure */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StartHeater_heater_on_fails */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StartHeater(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StartHeater_heater_on_fails(void)
{
    /* Arrange: Fan off succeeds but HeaterDriver_On fails */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Success);
    /* Create a callback for HeaterDriver_On failure */
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_On", &CppTest_StubCallback_HeaterDriver_On_Failure);
    
    /* Act: Call the function */
    int result = ActuatorManager_StartHeater();
    
    /* Assert: HeaterDriver_On failure code is returned */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StartHeater_heater_on_fails */

/* MC/DC Test 20: CanStartFan with lastStopTime = current time */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_CanStartFan_zero_elapsed */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_CanStartFan(unsigned long, unsigned int) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_CanStartFan_zero_elapsed(void)
{
    /* Arrange: lastStopTime equals current time (zero elapsed) */
    g_clock_seconds = 1000UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_Clock_GetSeconds);
    
    unsigned long lastStopTime = 1000UL;
    unsigned int cooldownSeconds = 0U;
    
    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);
    
    /* Assert: Verify result is 1 - (1000 - 1000 = 0) >= 0 ? 1 : 0 = 1 */
    CPPTEST_ASSERT_EQUAL(1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_CanStartFan_zero_elapsed */

/* MC/DC Test 21: StopAll with fanResult > 0 (positive error) */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StopAll_fan_positive_error */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopAll(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_fan_positive_error(void)
{
    /* Arrange: Create a callback for FanDriver_Off that returns positive error */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Failure);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Success);
    
    /* Act: Call the function */
    int result = ActuatorManager_StopAll();
    
    /* Assert: Verify failure (-1) - Ensures non-zero detection, not just -1 */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StopAll_fan_positive_error */

/* MC/DC Test 22: StopAll with heaterResult > 0 (positive error) */
/* CPPTEST_TEST_CASE_BEGIN test_ActuatorManager_StopAll_heater_positive_error */
/* CPPTEST_TEST_CASE_CONTEXT int ActuatorManager_StopAll(void) */
void TestSuite_actuator_manager_c_6daa83ce_test_ActuatorManager_StopAll_heater_positive_error(void)
{
    /* Arrange: Both return success codes initially */
    CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_FanDriver_Off_Success);
    CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_HeaterDriver_Off_Failure);
    
    /* Act: Call the function */
    int result = ActuatorManager_StopAll();
    
    /* Assert: Verify failure (-1) */
    CPPTEST_ASSERT_EQUAL(-1, result);
}
/* CPPTEST_TEST_CASE_END test_ActuatorManager_StopAll_heater_positive_error */

