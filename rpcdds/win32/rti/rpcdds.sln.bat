:: This script execute Visual Studio getting first the version of the product.

:: Get the current vesion of RPCDDS
call %EPROSIMADIR%\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONCDR ..\..\include\rpcdds_version.h
if not %errorstatus%==0 goto :EOF

set VERSION=-%VERSIONCDR%

start "C:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\IDE\devenv.exe" rpcdds.sln
