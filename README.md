# pyramis-litterarum

[![License: Unlicense](https://img.shields.io/badge/license-Unlicense-blue.svg)](http://unlicense.org/)
[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
![Example](img.png)

A simple project written in C that builds a pyramid with any text you provide.

## What it does

You give it a word or phrase, and it prints a beautiful pyramid pattern in the terminal.

## Example

```bash
$ ./pyramis "ABC"
  A A
 BA AB
CBA ABC
```

## How to use

### Compile

```bash
gcc main.c -o pyramis
```

### Run

```bash
./pyramis "your text here"
```

### Examples

```bash
./pyramis "C"          # Single character
./pyramis "RAFA"       # One word
./pyramis "Hello world!"  # With spaces (use quotes)
```

## 📋 Requirements

- Any C compiler (GCC, Clang, etc.)
- Terminal that supports standard ASCII output

## How it works

1. Reads the string from command line arguments
2. Calculates the length of the string
3. For each line `i`, prints spaces and then the first `i+1` characters
4. Repeats until the full pyramid is built

## Author

Made by [rafarafa773](https://github.com/rafarafa773)
