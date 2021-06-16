# David Calc
## David's Calculator for the command line!

### About
Welcome to the website for David Calc.

### Downloads
Downloads are available at [the GitHub releases page](https://daviddgtnt.github.io/calc/releases);

### Features planned
* None currently planned

### File explanation:
main.cpp: Main file for all operating systems (Version 2.0).  
windows-desktop.cpp: Windows Desktop file, only works on Windows / DOS and made to run with a double-click on the desktop. (Version 1.0)  
Dockerfile: File to build the docker image (Version 2.0).

### How to build

#### Windows
First, ask this question. Are you going to double-click this in the file manager / on the desktop or type `calc` in the command line to run it? Keep in mind the one for the desktop is still version 1.0. If you are gonna use the command line, use main.cpp. If you are going to use your file manager / the desktop, use windows-desktop.cpp.

`g++ <main.cpp / windows-desktop.cpp> -o calc.exe`
To run it, type `calc` at the prompt, or double-click the executable.

#### Linux / macOS:
`g++ main.cpp -o calc`
To run it, type `./calc` at the prompt, or double-click the executable.
