# HacknotPlusPlus
This is a clone of the game [Hacknet](https://store.steampowered.com/app/365450) created in C++.

The purpose of this project is primarily for me ([Samantha Rose](https://github.com/samantharose)) to learn C++ and general algorithmics, whilst also having fun recreating one of my favourite games.

---

## Building
### Windows
For Windows, make sure you have:
  + Microsoft Visual Studio with the "Desktop development with C++" workload installed, or the Microsoft Visual Studio C++ Build Tools
  + Microsoft Windows SDK, any version
  + GNU Compiler Collection (GCC) or LLVM Clang

This guide uses Microsoft Visual Studio 2019 Community and Microsoft Windows SDK 10.0.18362.0 as its default build configuration. Instructions on how to edit this is listed below.

For better automation and easier building for users who do not know how to use the Microsoft C/C++ Linker and/or the command line, three batch scripts have been supplied in the `windows` folder.
  + `vs-dev.bat` - Sets the command line up for use with `cl`. Run this before running `build.bat`!
  + `build.bat` - Builds the program using `cl`. The `vs-dev.bat` file must have been run before this.
  + `clean.bat` - Deletes the program exe and obj files built using `build.bat`.

### Linux
For Linux, make sure you have:
  + GNU Compiler Collection (GCC) or LLVM Clang

After verifying either compiler is installed, run `g++ main.cpp` or `clang++ main.cpp` and the `a.out` file should be created, ready to run.

---

## IMPORTANT

If your Visual Studio installation is not Visual Studio 2019 Community then follow the instructions below:
  + Open [windows/vs-dev.bat](windows/vs-dev.bat) in a text editor
  + Change the path to your Visual Studio installation's version and/or edition, for example if your computer has Visual Studio 2017 Enterprise installed, it would be `"C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\Common7\Tools\VsDevCmd.bat"`

If your Windows SDK version is not 10.0.18362.0 then follow the instructions below:
  + Open [windows/build.bat](windows/build.bat) in a text editor
  + Change the path to the AdvAPI32.Lib file to your Windows SDK installation's, for example if your computer has Windows SDK 10.0.17134.0, it would be `cl ..\main.cpp /MT "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.17134.0\um\x86\AdvAPI32.Lib"`