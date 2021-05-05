@echo off
cl ..\main.cpp /MT "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.18362.0\um\x86\AdvAPI32.Lib"
move main.exe ..
move main.obj ..