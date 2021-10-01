# MALang- Macro Abstracted Language
A (not really) high level programming language, based on C Pre Processor Macro
Expainsion.

# Getting Started
There are few diffrent ways in which you can use MALang.

## MALang file and folders in standard header directory

1. Download the source or the release.
2. Copy `MALang.h` and `MALang` folder in your standard header directory.
3. Use MALang in you C file by including it like `#include <MALang.h>`.
4. Compile normally.

## MALang file and folders in project directory

1. Download the source or the release.
2. Copy `MALang.h` and `MALang` folder in your project directory.
3. Use MALang in you C file by including it like `#include "MALang.h"`.
4. Compile normally.

## MALang file and folders in custom directory

1. Download the source or the release.
2. Copy `MALang.h` and `MALang` folder in any directory.
3. Use MALang in you C file by including it like `#include <MALang.h>`.
4. Compile with `-I<your-directory>` (for GCC) option.

# Writing First MALang program
_You can use any Text Editor to write MALang programs, I'll use VSCode. 

### Editor Setup
- Open or create a new folder from VSCode.
- Create a file named `main.c`.

### Write Some Code
- Paste or write following code in the file
```C
// <> or "" depends on where you've kept the MALang.h file
#include <MALang.h>

BEGIN
    println ("Hello World!")
    send (0)
END
```
### Compile Your Program

Compile your file normally like you compile a C program.

### Editor Setup (Windows)
- Open or create a new folder from VSCode.
- Create a file named `main.c`.

_We don't need that Language Mode workaround here because it's already a
C file_

## Documentation
Read the [MALang Basics](docs/basics.md)

## Where to use MALang
Nowhere really, MALang isn't really a programming language, it's just few
macro definitions. MALang can be used to write toy programs or have some fun writing C program in diffrent syntax.

## Warning
MALang is in experimental stage, as well as this document. More content
will be added in future