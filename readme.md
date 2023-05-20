[![C/C++ CI](https://github.com/jensbouma/rand42/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/jensbouma/rand42/actions/workflows/c-cpp.yml)
# Random Number Generator Program :1234:

This program generates random numbers and counts their occurrences in a list. :game_die:

## Table of Contents :bookmark_tabs:

- [Random Number Generator Program :1234:](#random-number-generator-program-1234)
	- [Table of Contents :bookmark\_tabs:](#table-of-contents-bookmark_tabs)
	- [Description :page\_with\_curl:](#description-page_with_curl)
	- [Usage :computer:](#usage-computer)
	- [Prerequisites :memo:](#prerequisites-memo)
	- [Installation :floppy\_disk:](#installation-floppy_disk)
	- [Running the Program :arrow\_forward:](#running-the-program-arrow_forward)
	- [But is it random :question:](#is-it-random-question)
	- [License :scroll:](#license-scroll)

## Description :page_with_curl:

This program generates random numbers using a custom random number generator algorithm and counts the occurrences of each number in a list. :arrows_counterclockwise:

The algorithm for generating random numbers involves performing arithmetic operations on a static variable `rnd` and a variable `rnd2`. The program measures the execution time of the random number generation using the `clock()` function. The generated random numbers are then stored in an array, and the count of each number is maintained. :1234:

## Usage :computer:

The program can be used to simulate the generation of random numbers and observe their distribution in the generated list. :bar_chart:

## Prerequisites :memo:

To compile and run this program, you need the following:

- A C compiler that supports C99 or later.
- Standard C libraries (`stdio.h`, `stdlib.h`, and `time.h`).

## Installation :floppy_disk:

1. Download the source code file containing the program.
2. Save the file with a `.c` extension, for example, `random_numbers.c`.

## Running the Program :arrow_forward:

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
   The program will generate random numbers, count their occurrences, and display the result in the terminal. :chart_with_upwards_trend:
## Is it random :question:

Random generators, despite their name, are not truly random. They operate based on algorithms or predefined patterns, producing sequences that appear random but are actually deterministic. These generators use initial values known as seeds, and given the same seed, they will always produce the same sequence of numbers. Therefore, they are considered pseudorandom. To achieve true randomness, external factors like atmospheric noise or radioactive decay must be incorporated into the generation process.

Processing time can sometimes be a factor in random generation. The speed at which a random generator produces numbers can impact the perceived randomness of the generated sequence. If a generator is too fast, it may not have enough time to gather sufficient entropy or adequately mix the generated numbers, potentially leading to patterns or predictability. On the other hand, if a generator is too slow, it may introduce biases or delays that can affect the randomness of the output. Therefore, finding an appropriate balance between processing time and generating high-quality random numbers is crucial for achieving reliable randomness.

## License :scroll:

This program is released under the [MIT License](https://github.com/jensbouma/rand42/blob/master/LICENSE). Feel free to modify and distribute it according to the terms of the license. :balance_scale:
