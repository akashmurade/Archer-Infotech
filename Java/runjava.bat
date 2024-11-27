@echo off
if "%2" == "" (
	set filename=%1
	set classname=%1
) else (
	set filename=%1
	set classname=%2
)

javac -d Classes %filename%.java

if errorlevel 1 (
	exit /b
)
java -cp Classes %classname%