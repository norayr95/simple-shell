# SimpleShell

SimpleShell is a simple Unix-like shell implemented in C. It supports basic command execution, built-in commands, and output redirection.

## Features

- Execute commands with arguments
- Built-in commands: `cd` and `exit`
- Output redirection using `>`

## Requirements

- GCC (GNU Compiler Collection)
- Make

## Project Structure

## Project Structure

| Directory/File   | Description                     |
|------------------|---------------------------------|
| `build/`         | Compiled object files           |
| `include/`       | Header files                    |
| `include/builtins.h` | Header for built-in commands  |
| `include/executor.h` | Header for command execution   |
| `include/parser.h`   | Header for parsing commands     |
| `include/shell.h`    | Header for shell functions       |
| `src/`          | Source files                    |
| `src/builtins.c` | Implementation of built-in commands |
| `src/executor.c` | Implementation of command execution |
| `src/parser.c`   | Implementation of command parsing  |
| `src/shell.c`    | Main shell loop and related functions |
| `Makefile`       | Build script                    |
| `README.md`      | This file                       |


## Build 

## Build and Run

### Build Instructions

To compile and build MyShell, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/norayr95/simple-shell.git
   cd simple-shell
   ```

2. Create the build directory and compile the project using the Makefile

    ```bash
    make
    ./shell
    ```


