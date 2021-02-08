# David Calc
## David's Calculator for the command line!

### About
Welcome to the website for David Calc.

### Downloads
Downloads are available at [DavidDGTNTDL](https://daviddgtnt.github.io/dl)

### Features planned
* Divide by zero protection
* GUI with Visual C++

### File explanation:
terminal.cpp: Main file for all operating systems.  
windows-desktop.cpp: Windows Desktop file, only works on Windows / DOS and made to run with a double-click on the desktop.  
Dockerfile: File to build the docker image.

### How to build

#### Windows
First, ask this question. Are you going to double-click this in the file manager / on the desktop or type `calc` in the command line to run it? If you are gonna use the command line, use main.cpp. If you are going to use your file manager / the desktop, use windows-desktop.cpp.

`g++ <main.cpp / windows-desktop.cpp> -o calc.exe`
To run it, type `calc` at the prompt, or double-click the executable.

#### Linux / macOS:
`g++ main.cpp -o calc`
To run it, type `./calc` at the prompt, or double-click the executable.
