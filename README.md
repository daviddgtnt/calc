# David Calc for Windows Command Prompt and Docker
## Information
https://hub.docker.com/r/dugo3number2/calc
`docker pull dugo3number2/calc`
Repl.it: https://repl.it/@DavidDGTNT/calc
## Building
### GNU G++
#### With GNU Make
`make`
#### Without GNU Make
`g++ -o calc main.cpp`
### MinGW
#### With included make
`mingw32-make -f Makefile.win`
#### Without make or building desktop version
`g++ -o calc.exe <main.cpp / windows-desktop.cpp>`
### Visual Studio (all modern versions)
#### CLI or building desktop version
`cl <main.cpp / windows-desktop.cpp>`
#### IDE
Open up the IDE and open the solution file. You can build it as you would normally from there.
