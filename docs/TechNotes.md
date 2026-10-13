# General notes

Inputs:

Working Eclipse environment - working as expected
- Static Code Analysis
- Unit Testing

Checked into git.

Assumtion for now:
    Initial setup is completed with Parasoft GUI (Eclipse or Visual Studio)
    adding/removing source file is done outside of this workflow.

Skills should be a layer of intellegence to perform the following operations with Parasoft Framework:

1. Create new emply test for a function
2. Generate new test for a function given code change. Focus on 100% line coverage and 100% mc/dc coverage.
3. Create new Test Suite for a file
4. Autogenerate tests to get to 100% line code coverage
5. Autogenerate tests to get to 100% mc/dc code coverage



 framework tied to Parasoft GUI - which is Eclipse. Now, I am trying to developer a layer of skills which would perform typical operations: Create A New Test Case - just empty one. Generate tests for a function. Analyse existing test cases and then generate missing test cases for to reach certain level of code coverage . Given changes in the function, analyse existing test cases and make changes to the test suite to align with refactorying. 

