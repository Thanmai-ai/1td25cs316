# Prime Number Checker

A beginner-friendly C command-line program that tells you whether an integer is prime.

## Requirements

- A C compiler, such as GCC or Clang
- A terminal or command prompt

## Build

From the project directory, compile the program:

```sh
gcc -std=c11 -Wall -Wextra -pedantic prime.c -o prime
```

On Windows, this creates `prime.exe`.

## Run

macOS or Linux:

```sh
./prime
```

Windows PowerShell:

```powershell
.\prime.exe
```

Enter an integer when prompted. Numbers less than 2 are not prime. The program checks possible divisors only up to the square root of the number.

## Example

```text
Enter an integer: 17
17 is prime.
```

## Ideas for contributors

New contributors can help by:

- Adding support for checking several numbers in one run
- Adding a mode to list primes within a range
- Improving input validation and error messages
- Adding automated tests
- Improving documentation with examples for other compilers

See [CONTRIBUTING.md](CONTRIBUTING.md) for how to propose and submit changes.
