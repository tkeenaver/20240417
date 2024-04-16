@echo off
setlocal enabledelayedexpansion
for %%i in ("%PATH:;=";"%") do (
    set "entry=%%~i"
    if not "!entry!"=="" echo !entry!
)
endlocal
