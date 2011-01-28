@echo off
rem
rem Script to build a Titanium app without having to use Titanium Developer on Windows.
rem
rem Where the StatusNet Desktop project lives
set APP_DIR=C:\cygwin\home\zcopley\Projects\titanium_desktop\modules\ti.Calc\CalcTest
rem Main Titanium dir 
set TITANIUM_DIR=c:\Documents and Settings\All Users\Application Data\Titanium
rem Specific SDK version dir
set SDK_DIR=%TITANIUM_DIR%\sdk\win32\1.1.0
rem Where the build script lives
set BUILD_SCRIPT=%SDK_DIR%\tibuild.py
rem Output directory for the executable
set DIST_DIR=%APP_DIR%\dist\win32

"%BUILD_SCRIPT%" "-d" "%DIST_DIR%" -a "%SDK_DIR%" "-n" "-r" "-v" -s "%TITANIUM_DIR%\sdk\.." "%APP_DIR%"
