@echo off

IF "%MMX_HOME%"=="" (
	REM ECHO MMX_HOME is NOT defined
	SET MMX_HOME=%homedrive%%homepath%\.mmx
)

IF "%MMX_NETWORK%"=="" (
	SET MMX_NETWORK=test4
)

ECHO MMX_HOME=%MMX_HOME%
ECHO MMX_NETWORK=%MMX_NETWORK%

if not exist "%MMX_HOME%\config\local\" (
	XCopy "config/local_init" "%MMX_HOME%\config\local\" /S /F /Y
	echo %MMX_HOME%\%MMX_NETWORK%\ > %MMX_HOME%\config\local\root_path	
	echo "Initialized %MMX_HOME%\config\local\ with defaults."
) else (
	REM
)
