#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/actuator_manager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/actuator_manager.c");

EXTERN_C_LINKAGE void TestSuite_ActuatorManager_CanStartFan_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_ActuatorManager_CanStartFan_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_ActuatorManager_CanStartFan);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_ActuatorManager_CanStartFan_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_ActuatorManager_CanStartFan_test_cooldown_expired);
        CPPTEST_TEST(TestSuite_ActuatorManager_CanStartFan_test_cooldown_active);
        CPPTEST_TEST(TestSuite_ActuatorManager_CanStartFan_test_exact_boundary);
        CPPTEST_TEST(TestSuite_ActuatorManager_CanStartFan_test_just_below_boundary);
        CPPTEST_TEST(TestSuite_ActuatorManager_CanStartFan_test_zero_cooldown);
        CPPTEST_TEST(TestSuite_ActuatorManager_CanStartFan_test_large_cooldown);
        CPPTEST_TEST(TestSuite_ActuatorManager_CanStartFan_test_zero_elapsed);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_ActuatorManager_CanStartFan_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_ActuatorManager_CanStartFan_test_cooldown_expired(void);
void TestSuite_ActuatorManager_CanStartFan_test_cooldown_active(void);
void TestSuite_ActuatorManager_CanStartFan_test_exact_boundary(void);
void TestSuite_ActuatorManager_CanStartFan_test_just_below_boundary(void);
void TestSuite_ActuatorManager_CanStartFan_test_zero_cooldown(void);
void TestSuite_ActuatorManager_CanStartFan_test_large_cooldown(void);
void TestSuite_ActuatorManager_CanStartFan_test_zero_elapsed(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_ActuatorManager_CanStartFan);

void TestSuite_ActuatorManager_CanStartFan_testSuiteSetUp(void);
void TestSuite_ActuatorManager_CanStartFan_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_ActuatorManager_CanStartFan_testSuiteTearDown(void);
void TestSuite_ActuatorManager_CanStartFan_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_ActuatorManager_CanStartFan_setUp(void);
void TestSuite_ActuatorManager_CanStartFan_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_ActuatorManager_CanStartFan_tearDown(void);
void TestSuite_ActuatorManager_CanStartFan_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* Stub callback for Clock_GetSeconds - returns configurable time value, scoped to this suite only */
static unsigned long s_canStartFan_clockSeconds = 1000UL;

void CppTest_StubCallback_CanStartFan_Clock_GetSeconds(CppTest_StubCallInfo* stubCallInfo, unsigned long* __return)
{
    *__return = s_canStartFan_clockSeconds;
}

/* ============================================================================
 * TEST CASE IMPLEMENTATIONS - int ActuatorManager_CanStartFan(unsigned long, unsigned int)
 * ============================================================================ */

/* CPPTEST_TEST_CASE_BEGIN test_cooldown_expired */
void TestSuite_ActuatorManager_CanStartFan_test_cooldown_expired(void)
{
    /* Arrange: Set current time to 1000, last stop time 900, cooldown 50 seconds */
    s_canStartFan_clockSeconds = 1000UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_CanStartFan_Clock_GetSeconds);

    unsigned long lastStopTime = 900UL;
    unsigned int cooldownSeconds = 50U;

    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);

    /* Assert: Verify result is 1 (true) - (1000 - 900 = 100) >= 50 ? 1 : 0 = 1 */
    CPPTEST_ASSERT_EQUAL(1, result);
}
/* CPPTEST_TEST_CASE_END test_cooldown_expired */

/* CPPTEST_TEST_CASE_BEGIN test_cooldown_active */
void TestSuite_ActuatorManager_CanStartFan_test_cooldown_active(void)
{
    /* Arrange: Set current time to 1000, last stop time 970, cooldown 50 seconds */
    s_canStartFan_clockSeconds = 1000UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_CanStartFan_Clock_GetSeconds);

    unsigned long lastStopTime = 970UL;
    unsigned int cooldownSeconds = 50U;

    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);

    /* Assert: Verify result is 0 (false) - (1000 - 970 = 30) >= 50 ? 1 : 0 = 0 */
    CPPTEST_ASSERT_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_cooldown_active */

/* MC/DC: boundary value for >= operator - exact equality */
/* CPPTEST_TEST_CASE_BEGIN test_exact_boundary */
void TestSuite_ActuatorManager_CanStartFan_test_exact_boundary(void)
{
    /* Arrange: Elapsed time equals exactly the cooldown (boundary condition) */
    s_canStartFan_clockSeconds = 1100UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_CanStartFan_Clock_GetSeconds);

    unsigned long lastStopTime = 1000UL;
    unsigned int cooldownSeconds = 100U;

    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);

    /* Assert: Verify result is 1 - (1100 - 1000 = 100) >= 100 ? 1 : 0 = 1 */
    CPPTEST_ASSERT_EQUAL(1, result);
}
/* CPPTEST_TEST_CASE_END test_exact_boundary */

/* MC/DC: boundary value just below the cooldown threshold */
/* CPPTEST_TEST_CASE_BEGIN test_just_below_boundary */
void TestSuite_ActuatorManager_CanStartFan_test_just_below_boundary(void)
{
    /* Arrange: Elapsed time is just below cooldown (boundary -1) */
    s_canStartFan_clockSeconds = 1099UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_CanStartFan_Clock_GetSeconds);

    unsigned long lastStopTime = 1000UL;
    unsigned int cooldownSeconds = 100U;

    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);

    /* Assert: Verify result is 0 - (1099 - 1000 = 99) >= 100 ? 1 : 0 = 0 */
    CPPTEST_ASSERT_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_just_below_boundary */

/* MC/DC: zero cooldown edge case (always allowed) */
/* CPPTEST_TEST_CASE_BEGIN test_zero_cooldown */
void TestSuite_ActuatorManager_CanStartFan_test_zero_cooldown(void)
{
    /* Arrange: Cooldown is 0 seconds (always allowed) */
    s_canStartFan_clockSeconds = 500UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_CanStartFan_Clock_GetSeconds);

    unsigned long lastStopTime = 1000UL;  /* Even future stop time */
    unsigned int cooldownSeconds = 0U;

    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);

    /* Assert: Verify result is 1 - Any elapsed >= 0 is always true */
    CPPTEST_ASSERT_EQUAL(1, result);
}
/* CPPTEST_TEST_CASE_END test_zero_cooldown */

/* MC/DC: large magnitude cooldown value */
/* CPPTEST_TEST_CASE_BEGIN test_large_cooldown */
void TestSuite_ActuatorManager_CanStartFan_test_large_cooldown(void)
{
    /* Arrange: Very large cooldown that hasn't expired */
    s_canStartFan_clockSeconds = 1000UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_CanStartFan_Clock_GetSeconds);

    unsigned long lastStopTime = 0UL;
    unsigned int cooldownSeconds = 2000U;  /* 2000 seconds cooldown */

    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);

    /* Assert: Verify result is 0 - (1000 - 0 = 1000) >= 2000 ? 1 : 0 = 0 */
    CPPTEST_ASSERT_EQUAL(0, result);
}
/* CPPTEST_TEST_CASE_END test_large_cooldown */

/* MC/DC: lastStopTime equals current time (zero elapsed) */
/* CPPTEST_TEST_CASE_BEGIN test_zero_elapsed */
void TestSuite_ActuatorManager_CanStartFan_test_zero_elapsed(void)
{
    /* Arrange: lastStopTime equals current time (zero elapsed) */
    s_canStartFan_clockSeconds = 1000UL;
    CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_CanStartFan_Clock_GetSeconds);

    unsigned long lastStopTime = 1000UL;
    unsigned int cooldownSeconds = 0U;

    /* Act: Call the function */
    int result = ActuatorManager_CanStartFan(lastStopTime, cooldownSeconds);

    /* Assert: Verify result is 1 - (1000 - 1000 = 0) >= 0 ? 1 : 0 = 1 */
    CPPTEST_ASSERT_EQUAL(1, result);
}
/* CPPTEST_TEST_CASE_END test_zero_elapsed */
