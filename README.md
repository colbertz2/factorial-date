# Factorial-Date [![GitHub license](https://img.shields.io/badge/license-MIT-lightgrey.svg)](https://raw.githubusercontent.com/colbertz2/factorial-date/colbertz2-readme/LICENSE) [![GitHub release](https://img.shields.io/github/release/colbertz2/factorial-date.svg)](https://github.com/colbertz2/factorial-date/releases) [![OS compatibility](https://img.shields.io/badge/compatibility-unix-lightgrey.svg)](https://en.wikipedia.org/wiki/List_of_Unix_systems)
Converts the factorial of an integer to a UNIX Epoch date.

## Usage
`fd <int i>` will find the factorial i! and print the corresponding UNIX Epoch date to the console.

## Installation
At present, the application is only compatible with UNIX-based systems.

1) Download the latest [release](https://github.com/colbertz2/factorial-date/releases/latest)
2) `cd` to the location of the ZIP file. Unzip it into a folder with `unzip fd-x_x_x.zip -d fd`
3) `cd` into the new folder and run `make install`

## Features
### Takes Command Line Argument
The application takes an integer from the command line, calculates the factorial of that integer, then returns the UNIX Epoch time in local time.

### Utilizes a Recursive Factorial Function
The application utilizes a custom recursive function to find the factorial of the command line argument.

This function is included in the repository for ease of use.

### Utilizes `<ctime>`
Date-Time conversions use classes and methods from the Standard Library.
