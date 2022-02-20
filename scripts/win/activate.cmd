@echo off

if not exist "config/local/" (
	XCopy "config/local_init" "config/local/" /S /F /Y
	echo "Initialized config/local/ with defaults."
) else (
	REM
)
