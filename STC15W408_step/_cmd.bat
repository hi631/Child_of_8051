@echo off
PATH = C:\app\SDCC\bin;%PATH%
set src=step
@echo on
sdcc %src%.c
@echo off
if %ERRORLEVEL% equ 0 (GOTO END)
timeout 999

:END
echo.
echo エラーは有りません。
set work=work
If not exist %work% mkdir %work%
if exist %src%.asm (move %src%.asm %work% > NUL)
if exist %src%.lk  (move %src%.lk  %work% > NUL)
if exist %src%.lst (move %src%.lst %work% > NUL)
if exist %src%.map (move %src%.map %work% > NUL)
if exist %src%.mem (move %src%.mem %work% > NUL)
if exist %src%.rel (move %src%.rel %work% > NUL)
if exist %src%.sym (move %src%.sym %work% > NUL)
if exist %src%.hex (move %src%.hex %work% > NUL)
if exist %src%.ihx (ren %src%.ihx %src%.hex > NUL)
timeout 3
