REM running static code analysis

C:\Apps\Parasoft\professional\cpptest\cpptestcli.exe -config "builtin://MISRA C 2025" -report MISRA_C_2025_REPORTS -settings toolsettings\settings4cli.properties -resource "env-control-demo-eclipse-cdt" -data "C:\sandbox\workspaces\2024_2"

REM running UT analysis

C:\Apps\Parasoft\professional\cpptest\cpptestcli.exe -config toolsettings\RunUnitTests-allcov.properties -report UT_REPORTS -settings toolsettings\settings4cli.properties -resource "env-control-demo-eclipse-cdt" -data "C:\sandbox\workspaces\2024_2"