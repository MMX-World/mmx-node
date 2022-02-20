@echo off
call .\activate.cmd

.\mmx_node.exe -c config\%MMX_NETWORK% config\node\ config\light_mode\ %MMX_HOME%\config\local %*  