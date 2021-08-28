# MALang- Macro Abstracted Language
A (not really) high level programming language, based on C Pre Processor Macro
Expainsion.

# Getting Started
There are many ways in which you can use MALang.

## Installtion

### Linux
1. Download the source or the release.
2. Run `install.sh` as `root`.
3. Done.

### Windows
_No windows installation, if someone could write a windows port of the scripts
you are welcome to do so._

## Without Installtion
You don't need to install the scripts to use MALang, just get the MALang.h file
and a C compiler.

# Writing First MALang program
_You can use any Text Editor to write MALang programs, I'll use VSCode. 
I am working on a VSCode extension that can provide syntax highlighting and auto-completion for `.mln` files till then we have to rely on a workaround._
### Editor Setup
- Open or create a new folder from VSCode.
- Create a file named `main.mln`.

_Here comes the workaround_

- On the bottom of the screen there will be a blue bar and on the right side
of it there will be a _Select Language Mode_ button with _Plain Text_ written
on it, click and select C from the list of languages. (As MALang is nothing
but few macro definitions our file is in reality a C source file so
selecting C in the language mode will give us syntax highlighting and
auto-completion.)
### Write Some Code
- Paste or write following code in the file
```C
#include <MALang.h>

BEGIN
    println("Hello World!")
END
```
### Compile Your Program
_YES! I have installed the `mln` script._
- If you have installed te MLang compiler script `mln` then just run the command.
```shell
$ mln main.mln -o main
```
- It will generate an output file `main`.
- Run the `main` file by running-
```shell
$ ./main
```
- It will output-
```
Hello World!
```
_Help! I am using Windows._

_Windows users can use cygwin to install and run the `mln` script but I am not
sure if that will work unless one struggles with the PATH variables.
Someone must write a Windows equivalent of install scripts, till
then we will be using workarounds to compile MALang on Windows. I will
be testing MALang and writing install scripts or something equivalent
for Windows soon, till then let's see what we can do._

- A Windows user can get the `MALang.h` file and create a ordinary C file
names `main.c` and include the `MALang.h` file and start
using MALang.

### Editor Setup (Windows)
- Open or create a new folder from VSCode.
- Create a file named `main.c`.

_We don't need that Language Mode workaround here because it's already a
C file_

### Write Some Code (Windows)
- If you have put the `MALang.h` file in the same directory as `main.c`,
paste or write the following code
```C
#include "MALang.h"

BEGIN
    println("Hello World!")
END
```
- or if you have put the `MALang.h` file somewhere else you can either write
the full path inside the double quotes or later specify the directory your
compiler will search it for, in the later case you have to put `MALang.h` inside angle brackets in the `include` directive.
- Compile your program with any C compiler, in my case I'll use gcc-
```shell
$ gcc main.c -o main
```
- It will produce a file named `main.exe`
- Run it with-
```shell
$ main.exe
```
- It will produce the same output as above.

# UNCOMPLETED!
