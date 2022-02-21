@ECHO OFF
CALL .\activate.cmd

setlocal
set PROMPT=[MMX] $P$G
start "MMX Environment" /D %MMX_HOME% cmd.exe /K "mmx_help.cmd"

:EXIT
endlocal