@ECHO OFF
CALL .\activate.cmd

.\mmx_node.exe -c config\%NETWORK% config\node\ %MMX_HOME%\config\local\ %*