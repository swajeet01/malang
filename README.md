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
_I have installed the `mln` script_
- If you have installed te MLang compiler script `mln` then just run the command.
```shell
$ mln main.mln -o main
```
- It will generate an output file `main`.
- Run the `main` file by running
```shell
$ ./main
```
- It will output
```
Hello World!
```
_I am using windows_
