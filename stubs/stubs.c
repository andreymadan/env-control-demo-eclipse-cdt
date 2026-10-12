#include "cpptest.h"

/**
 * This file contains user stub definitions.
 *
 * To create a user stub:
 * 1. Open stub template list:
 *    - Eclipse IDE: type 'stub' and press <Ctrl> <Space>
 *    - Microsoft Visual Studio IDE: use context menu C++test->Insert Snippet...
 * 2. Choose the stub template from the list.
 * 3. #include the header file where the function you want to stub is originally 
 *    declared as well as any supporting header files as necessary.
 * 4. Fill out the stub signature to match that of the original function, 
 *    while keeping the CppTest_Stub prefix when it applies.
 *    Note: for C++ operators, use appropriate stub names - e.g.:
 *        CppTest_Stub_operator_new    for operator new
 *        CppTest_Stub_operator_delete for operator delete
 *        CppTest_Stub_operator_plus   for operator +
 *    Refer to C++test User's Guide for a complete list of stub names for operators. 
 * 5. Fill out the body of the stub according to intent.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */

/** User stub definition for function: int FanDriver_Off(void) */
EXTERN_C_LINKAGE int FanDriver_Off () ;
EXTERN_C_LINKAGE int CppTest_Stub_FanDriver_Off (void) 
{
    CPPTEST_STUB_CALLED("FanDriver_Off");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_Off", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = FanDriver_Off();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = FanDriver_Off();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int FanDriver_On(void) */
EXTERN_C_LINKAGE int FanDriver_On () ;
EXTERN_C_LINKAGE int CppTest_Stub_FanDriver_On (void) 
{
    CPPTEST_STUB_CALLED("FanDriver_On");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("FanDriver_On", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = FanDriver_On();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = FanDriver_On();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int HeaterDriver_IsOn(void) */
EXTERN_C_LINKAGE int HeaterDriver_IsOn () ;
EXTERN_C_LINKAGE int CppTest_Stub_HeaterDriver_IsOn (void) 
{
    CPPTEST_STUB_CALLED("HeaterDriver_IsOn");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_IsOn", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HeaterDriver_IsOn();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HeaterDriver_IsOn();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int HeaterDriver_Off(void) */
EXTERN_C_LINKAGE int HeaterDriver_Off () ;
EXTERN_C_LINKAGE int CppTest_Stub_HeaterDriver_Off (void) 
{
    CPPTEST_STUB_CALLED("HeaterDriver_Off");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_Off", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HeaterDriver_Off();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HeaterDriver_Off();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: int HeaterDriver_On(void) */
EXTERN_C_LINKAGE int HeaterDriver_On () ;
EXTERN_C_LINKAGE int CppTest_Stub_HeaterDriver_On (void) 
{
    CPPTEST_STUB_CALLED("HeaterDriver_On");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HeaterDriver_On", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HeaterDriver_On();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HeaterDriver_On();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: unsigned long Clock_GetSeconds(void) */
EXTERN_C_LINKAGE unsigned long Clock_GetSeconds () ;
EXTERN_C_LINKAGE unsigned long CppTest_Stub_Clock_GetSeconds (void) 
{
    CPPTEST_STUB_CALLED("Clock_GetSeconds");

    unsigned long __return = 0UL;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, unsigned long* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Clock_GetSeconds", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = Clock_GetSeconds();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(unsigned long* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = Clock_GetSeconds();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
