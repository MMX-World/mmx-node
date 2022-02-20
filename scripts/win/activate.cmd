@ECHO OFF

IF "%MMX_HOME%"=="" (
	SET MMX_HOME=%homedrive%%homepath%\.mmx\
)

@REM IF "%NETWORK%"=="" (
@REM 	SET NETWORK=testnet5
@REM )

SET NETWORK=testnet5
SET MMX_NETWORK=%NETWORK%/


ECHO NETWORK=%MMX_NETWORK%
ECHO MMX_HOME=%MMX_HOME%


IF NOT EXIST "%MMX_HOME%\config\local\" (
	XCopy "config/local_init" "%MMX_HOME%\config\local\" /S /F /Y
	@REM echo %MMX_HOME%\%MMX_NETWORK% > %MMX_HOME%\config\local\root_path	
	ECHO "Initialized config/local/ with defaults."
) ELSE (
	REM
)

SET PATH=%PATH%;%CD%