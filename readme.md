# Random Number Generator Program

This program generates random numbers and counts their occurrences in a list.

## Table of Contents

- [Random Number Generator Program](#random-number-generator-program)
	- [Table of Contents](#table-of-contents)
	- [Description](#description)
	- [Usage](#usage)
	- [Prerequisites](#prerequisites)
	- [Installation](#installation)
	- [Running the Program](#running-the-program)
	- [License](#license)

## Description

This program generates random numbers using a custom random number generator algorithm and counts the occurrences of each number in a list. It uses the C programming language and relies on the standard libraries `stdio.h`, `stdlib.h`, and `time.h`.

The algorithm for generating random numbers involves performing arithmetic operations on a static variable `rnd` and a variable `rnd2`. The program measures the execution time of the random number generation using the `clock()` function. The generated random numbers are then stored in an array, and the count of each number is maintained.

## Usage

The program can be used to simulate the generation of random numbers and observe their distribution in the generated list.

## Prerequisites

To compile and run this program, you need the following:

- A C compiler that supports C99 or later.
- Standard C libraries (`stdio.h`, `stdlib.h`, and `time.h`).

## Installation

1. Download the source code file containing the program.
2. Save the file with a `.c` extension, for example, `random_numbers.c`.

## Running the Program

To compile and run the program, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory where the source code file is located.
3. Use the following command to compile the program:
   ```
   gcc random_numbers.c -o random_numbers
   ```
   This command will create an executable file named `random_numbers` in the current directory.
4. Run the program using the following command:
   ```
   ./random_numbers
   ```
   The program will generate random numbers, count their occurrences, and display the result in the terminal.

## License

This program is released under the [MIT License](https://opensource.org/licenses/MIT). Feel free to modify and distribute it according to the terms of the license.