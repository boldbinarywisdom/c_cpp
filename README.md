# C and C++ Programming Languages and Exerciese

### General Information about C and C++

TBD

### C programming language

TBD

 - code --> object - linker -   exe
 - compile code with gcc 
 
 gcc '/home/ayshine/c_cpp/c/Welcome_C.c' -o '/home/ayshine/c_cpp/c/Welcome'

 - run output 
 
 Drag and drop the output file to terminal and your output will run. 

**A Simple C program: Printing a line of text**
*introduces printf() function*
code:
~~~
/* A first program in C
This program will print out a text "Welcome to C!" */

#include <stdio.h>

/* function main begins program execution */
int main(void)
{
	printf("Welcome to C!\n");

	return 0; /*indicate that program ended successfully*/

} /*end function main*/
~~~

output:
![welcomeC](c/images/WelcomeCOutput.png  "welcomeC")

Lines begins with`/*` and  ends with`*/` indicates those lines between are comments. Comments do not cause Computer to perform any action when the program is run.

Line: `#include <stdio.h>` is a directive to the C  **preprocessor**. Lines begins with `#` are processed by the preprocessor before the program is compiled.

Line: `#include <stdio.h>` tells the preprocessor to include the contents of the **standard input/output header (`<stdio.h>`)** in the program. 

Line: `int main(void)` is a part of every C program. The parantheses after `main` indicate that **main** is a program building block called **function**. C programs contain one or more functions, one of which must be `main`. Every program in C begins executing at the function `main` Functions can return information  The keyword `int` to the left of `main` indicates that main "returns" an integer value. Functions also can receive information when they are called upon to execute. The `void` in parantheses here means that `main` does not receive any information. 

Line:  `printf("Welcome to C!\n");` instructs the computer to perform an **action**, namely to print on the screen the **string** of characters marked by he quotation marks. A string issometimes called a **character string**, a **message** or **literal**. The entire line, including `printf`,its **argument** within the parantheses and the **semicolon (; statement terminator)** is called a **statement**.

The characters normally print exactly as they appear between the double quotes in the printf statement. `\n` weren't printed on the screen. The backslash (\) is called **escape character**. It indicates that `printf` is supposed to do something out of the ordinary.  When encountering a backslash in a string, the compiler looks ahead at the next character and combines it with the backslash to form an **escape sequence**. The escape sequence `\n` means **newline**.


|Escape Sequence|Description|
|-----------------------|-------------- |
|\n |Newline.Position the cursor at the begining of the new line.|
|\t |Horizontal tab. Move the cursor to th next tab stop.|
|\a |Alert.Sound the system bell.|
|\\\ |Backslash. Insert a backslash character in a string. |
|\" | Double quote. Insert a double-quote character in a string. |

*Some Common escape sequence*


Line: `return 0;` is included at the end of every `main` function. The keyword `return` is one of several means we will use to **exit a function**. When the `return` statement is used at the end of `main` as shown here, the value 0 indicates that the program has terminated successfully. 

**Another Simple C program: Adding Two integers**
*introduces scanf() function*

code:
~~~
/* Addition Program */
#include <stdio.h>

/*function main begins program execution */
int main( void )
{
	int integer1; /* first number to be input by user */
	int integer2; /* second number to be input by user */
	int sum;      /* variable in which sum will be stored */

	printf("Enter first integer\n"); /* prompt */
	scanf("%d", &integer1);          /* read an integer */

	printf("Enter second integer\n"); /* prompt */
	scanf("%d", &integer2);          /* read an integer */

	sum = integer1 + integer2; /* assign total to sum */

	printf("Sum is %d\n", sum); /* print sum */

	return 0; /* indicate that program ended successfully */

} /* end function main */
~~~

output:
![addition](c/images/Addition.png  "addition")


Line: `scanf("%d",&integer1);` is used to obtain a value from the user. The `scanf` reads from the standard  input, which is usually the keyboard. This `scanf` has two arguments, `"%d"` and `&integer1`
The first argument,the **format control string**, indicates the type of data that should be input by the user. The **%d conversion specifier** indicates the type of data that should be an integer. The `%` in this context is treated by scanf as a special that begins a conversion specifier. The second argument of scanf begins with an **ampersand(&)** called the **address operator** in C followed by the variable name. The ampersand, when combined with the variable name, tells scanf the location (or address) in memory at  which the variable **integer1** is stored. The computer then stores the value for **integer1** at that location.

Functions `printf()` and `scanf()` facilitate interaction betweenthe user and the computer. Because this interaction resembles a dialogue, it is often called **conversational comput,ng or interactive computing**.


