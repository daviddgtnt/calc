# David Calc
## David's Calculator for the command line!

### About
Welcome to the website for David Calc.

#### [Windows Command Prompt](https://github.com/daviddgtnt/calc/releases/download/1.0/calc.exe)  
#### [Docker](https://hub.docker.com/r/dugo3number2/calc)

### Features planned
* Divide by zero protection
* GUI with Visual C++

### File explanation:
main.cpp: Version for running from the desktop
terminal.cpp: Version for running from the Command Prompt / Terminal (naming depends on OS)
Dockerfile: File to build the docker image.

### How to build

#### Regular
First, ask this question. Are you going to double-click this in the file manager / on the desktop or type `calc` in the command line to run it? If you are gonna use the command line, use terminal.cpp. If you are going to use your file manager / the desktop, use main.cpp.

Windows:
`g++ <main.cpp / terminal.cpp> -o calc.exe`
To run it, type `calc` at the prompt, or double-click the executable.

Linux / macOS:
`g++ <main.cpp / terminal.cpp> -o calc`
To run it, type `./calc` at the prompt, or double-click the executable.
