#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/env-control-demo-eclipse-cdt/src/controller.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/env-control-demo-eclipse-cdt/src/controller.c");

EXTERN_C_LINKAGE void TestSuite_controller_c_e20e8355_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_controller_c_e20e8355_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_controller_c_e20e8355);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_controller_c_e20e8355_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_controller_c_e20e8355_test_Controller_GetState_1);
        CPPTEST_TEST(TestSuite_controller_c_e20e8355_test_Controller_GetState_2);
        CPPTEST_TEST(TestSuite_controller_c_e20e8355_test_Controller_Init_1);
        CPPTEST_TEST(TestSuite_controller_c_e20e8355_test_Controller_Init_2);
        CPPTEST_TEST(TestSuite_controller_c_e20e8355_test_Controller_Init_3);
        CPPTEST_TEST(TestSuite_controller_c_e20e8355_test_Controller_Init_4);
        CPPTEST_TEST(TestSuite_controller_c_e20e8355_test_Controller_RunCycle_1);
        CPPTEST_TEST(TestSuite_controller_c_e20e8355_test_Controller_RunCycle_2);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_controller_c_e20e8355_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_controller_c_e20e8355_test_Controller_GetState_1(void);
void TestSuite_controller_c_e20e8355_test_Controller_GetState_2(void);
void TestSuite_controller_c_e20e8355_test_Controller_Init_1(void);
void TestSuite_controller_c_e20e8355_test_Controller_Init_2(void);
void TestSuite_controller_c_e20e8355_test_Controller_Init_3(void);
void TestSuite_controller_c_e20e8355_test_Controller_Init_4(void);
void TestSuite_controller_c_e20e8355_test_Controller_RunCycle_1(void);
void TestSuite_controller_c_e20e8355_test_Controller_RunCycle_2(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_controller_c_e20e8355);

void TestSuite_controller_c_e20e8355_testSuiteSetUp(void);
void TestSuite_controller_c_e20e8355_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_controller_c_e20e8355_testSuiteTearDown(void);
void TestSuite_controller_c_e20e8355_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_controller_c_e20e8355_setUp(void);
void TestSuite_controller_c_e20e8355_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_controller_c_e20e8355_tearDown(void);
void TestSuite_controller_c_e20e8355_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_Controller_GetState_1 */
/* CPPTEST_TEST_CASE_CONTEXT SystemState Controller_GetState(const Controller *) */
void TestSuite_controller_c_e20e8355_test_Controller_GetState_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */ 
    const Controller * _controller  = 0 ;
    {
        /* Tested function call */
        SystemState _return  = Controller_GetState(_controller);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(SystemState, "SystemState _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Controller_GetState_1 */

/* CPPTEST_TEST_CASE_BEGIN test_Controller_GetState_2 */
/* CPPTEST_TEST_CASE_CONTEXT SystemState Controller_GetState(const Controller *) */
void TestSuite_controller_c_e20e8355_test_Controller_GetState_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */ 
    Controller _controller_0 ;
    const Controller * _controller  = & _controller_0;
    {
        /* Tested function call */
        SystemState _return  = Controller_GetState(_controller);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(SystemState, "SystemState _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Controller_GetState_2 */

/* CPPTEST_TEST_CASE_BEGIN test_Controller_Init_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Controller_Init(Controller *, const SystemConfig *) */
void TestSuite_controller_c_e20e8355_test_Controller_Init_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */ 
    Controller * _controller  = 0 ;
    /* Initializing argument 2 (config) */ 
    const SystemConfig * _config  = 0 ;
    {
        /* Tested function call */
        Controller_Init(_controller, _config);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("Controller * _controller ", ( _controller ));
    }
}
/* CPPTEST_TEST_CASE_END test_Controller_Init_1 */

/* CPPTEST_TEST_CASE_BEGIN test_Controller_Init_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Controller_Init(Controller *, const SystemConfig *) */
void TestSuite_controller_c_e20e8355_test_Controller_Init_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */ 
    Controller _controller_0 ;
    Controller * _controller  = & _controller_0;
    /* Initializing argument 2 (config) */ 
    const SystemConfig * _config  = 0 ;
    {
        /* Tested function call */
        Controller_Init(_controller, _config);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("Controller * _controller ", ( _controller ));
    }
}
/* CPPTEST_TEST_CASE_END test_Controller_Init_2 */

/* CPPTEST_TEST_CASE_BEGIN test_Controller_Init_3 */
/* CPPTEST_TEST_CASE_CONTEXT void Controller_Init(Controller *, const SystemConfig *) */
void TestSuite_controller_c_e20e8355_test_Controller_Init_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */ 
    Controller * _controller  = 0 ;
    /* Initializing argument 2 (config) */ 
    SystemConfig _config_0 ;
    const SystemConfig * _config  = & _config_0;
    {
        /* Tested function call */
        Controller_Init(_controller, _config);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("Controller * _controller ", ( _controller ));
    }
}
/* CPPTEST_TEST_CASE_END test_Controller_Init_3 */

/* CPPTEST_TEST_CASE_BEGIN test_Controller_Init_4 */
/* CPPTEST_TEST_CASE_CONTEXT void Controller_Init(Controller *, const SystemConfig *) */
void TestSuite_controller_c_e20e8355_test_Controller_Init_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */ 
    Controller _controller_0 ;
    Controller * _controller  = & _controller_0;
    /* Initializing argument 2 (config) */ 
    SystemConfig _config_1 ;
    const SystemConfig * _config  = & _config_1;
    {
        /* Tested function call */
        Controller_Init(_controller, _config);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("Controller * _controller ", ( _controller ));
    }
}
/* CPPTEST_TEST_CASE_END test_Controller_Init_4 */

/* CPPTEST_TEST_CASE_BEGIN test_Controller_RunCycle_1 */
/* CPPTEST_TEST_CASE_CONTEXT void Controller_RunCycle(Controller *) */
void TestSuite_controller_c_e20e8355_test_Controller_RunCycle_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */ 
    Controller * _controller  = 0 ;
    {
        /* Tested function call */
        Controller_RunCycle(_controller);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("Controller * _controller ", ( _controller ));
    }
}
/* CPPTEST_TEST_CASE_END test_Controller_RunCycle_1 */

/* CPPTEST_TEST_CASE_BEGIN test_Controller_RunCycle_2 */
/* CPPTEST_TEST_CASE_CONTEXT void Controller_RunCycle(Controller *) */
void TestSuite_controller_c_e20e8355_test_Controller_RunCycle_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (controller) */ 
    Controller _controller_0 ;
    Controller * _controller  = & _controller_0;
    {
        /* Tested function call */
        Controller_RunCycle(_controller);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("Controller * _controller ", ( _controller ));
    }
}
/* CPPTEST_TEST_CASE_END test_Controller_RunCycle_2 */
