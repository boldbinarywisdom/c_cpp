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
 
### Introduction to C programming

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


### Arithmetic in C
The C **arithmetic operators** are summarized in the fugure below.


|C Operation |Arithmetic Operator|Algebraic expression|C Expression|
|-----------------------|-------------- |-----------------------|-------------- |
|Addition |+|$$f+ 7$$| $$f + 7$$ |
|Substraction|-|$$p-c$$| $$p - c$$|
|Multiplication|*|$$bm$$| $$b*m$$|
|Division|/|  $$ x/y$$ or$$  \frac{x}{y}$$ or $$  x ÷ y$$| $$ x/y$$|
|Remainder |%|r  mod  s |r % s |

*Arithmetic Operators*

|Operator(s)|Operation(s)|Order of evaluation (precedence)|
|--------------|-------------- |-----------------------|
|$$()$$ |Parantheses|Evaluated first. If the parentheses are nested, the expression in the innermost pair is evaluated first. If there are several pairs of parantheses "on the same level"(i.e.,not nested)|
|$$*$$|Multiplication| Evaluated second. If there are several, they are evaluated left to right.|
|$$/$$|Division|Evaluated second. If there are several, they are evaluated left to right.|
|$$\%$$|Remainder| |
|$$+$$ |Addition |Evaluated last. If there are several, they are evaluated left to right. |
|$$-$$ |Substraction |Evaluated last. If there are several, they are evaluated left to right.|

*Precedence of arithmetic operators*

### Decision Making: Equality and Relational Operators
Executable C statements either perform **actions** or make **decisions**. We might make decision in a program, for example, to determine if a person's grade on an exam is greater than or equal to 60 and if it is to print the message "Congratulations! You passed." At this point we will talk about a simple version of C's **if statement** that allows a program to make a decision based on the truth or falsity of a statement of fact called **condition**. If the condition is met(i.e.,the condition is **true**) the statement in the body of the if statement is executed. If the condition is not met(i.e.,the condition is **false**) the body statement is not executed. Whether the body statement is executed or not , after the if statementcompletes, execution proceeds with the next statement after the if statement.
Conditions in if statements are formed by using the **equality operators** and **relational operators**. The relational operators all have the same level of predecence and they associate left to right. The equality operators have a lower level of predecence than the relational operators and they also associate left to right.


|Standard algebraic equality operator or relational operator| C equality or relational oerator| Example of C condition| Meaning of C condition|
|--------------------|---------------------|----------------------|----------------------------|
*Equality operators*
|=|==|x==y|x is equal to y|
|≠| !=| x != y | x is not equal to y |
*Relational operators*
|>| >| x > y| x is greater than y|
|<|<| x< y| x is less than y|
|≥| >=| x >= y| x greater than or equal to y|
|≤| <=| x <= y| x is less than or equal to y|

 *Equality and relational operators*



Equality operator (==) can be confused with the assignment operator(=). To avoid this confusion, the equality operator should be read "double equals" and the assignment operator should be read "gets". 

**A Simple C program:Operators**
*Using if statements, relational operators, and equality operators*

code:
~~~
/* Using if statements, relational
   operators, ans equality operators */

#include <stdio.h>

/* function main begins program execution */

int main(void)
{
	int num1; /* first number to be read from user */
	int num2; /* second number to be read from user */

	printf("Enter two integers, and I will tell you\n");
	printf("the relationships they satisfy: ");

	scanf("%d%d",&num1, &num2); /*read two integers*/

	if (num1 == num2){
		printf("%d is not equal to %d\n", num1, num2);
	}/*end if*/

	if (num1 != num2){
		printf("%d is not equal to %d\n", num1, num2);
	}/*end if*/

	if (num1 < num2){
		printf("%d is less than %d\n", num1, num2);
	}/*end if*/

	if (num1 > num2){
		printf("%d is greater than %d\n", num1, num2);
	}/*end if*/

	if (num1 <= num2){
		printf("%d is less than or equal to %d\n", num1, num2);
	}/*end if*/

	if (num1 >= num2){
		printf("%d is greater than or equal to %d\n", num1, num2);
	}/*end if*/

	return 0; /*indicate that program ended successfully*/

}/*end function main*/
~~~
output:
![opr1](c/images/Operators1.png  "opr1")
![opr2](c/images/Operators2.png  "opr2")
![opr3](c/images/Operators3.png  "opr3")

|Operators| Associativity|
|--------|-------|
|()|left to right|
|*	/	%|left to right|
|+	-left to right|
|<	<=	>	>=|left to right|
|==	 	!=|left to right|
|=|left to right|

*Precedence and associativity of the operators discussed so far*

|Keywords||||
|-----|------|------|----|
|auto|double|int|struct|
|break|else|long|switch|
|case|enum|register|typedef|
|char|extern|return|union|
|const|float|short|unsigned|
|continue|for|signed|void|
|default|goto|sizeof|volatile|
|do|if|static|while|

*C's keywords*

C keywords have special meaning to the C compiler, so you must be careful not to use these as identifiers such as variable names.

### Structured Program Development in C

#### Algorithms
The solution to any computing problem involves executing a series of actions in a specific order. A **procedure** for solving a problem in terms of

- the **actions** to be executed, and
- the **order** in which these actions are to e executed 

is called an **algorithm**. Specifying the order in which statements are to be executed in a computer program is called **program control**.

#### Pseudocode
**Pseudocode** is an artificial and informal language that help you develop algorithms. Pseudocode is similar to everyday English.Pseudocode programs are not executed on computers. Rather, they merely help you "think out"a program before attempting to write it in a programming language such as C. Pseudocode consists only of action statements.

#### Control Structures
Normally, statements in a program are executed one after the other in the order in which they are written. This is called **sequential execution**. Various C statements enable you to specify that the next statement to be executed may be other than the next in sequence. This is called **transfer of control**.

The sequence structure is essentially built into C. Unless directed otherwise , the computer automatically executes C statements one after the other in the order which they are written.

A **flowchart** is a graphical representation of an algorithm or of a portion of an algorithm. Flowcharts aredrawn using certain special-purpose symbols such as rectangles, diamonds, ovals, and small circles; these symbols are connected by arrows called flowlines.
When drawing a flowchart that represents a complete algorithm, an oval symbol containing the word "Begin" is the first symbol used in the flowchart; an oval symbol containing the word "End" is the last symbol used. Perhaps the most important flowcharting symbol is the **diamond symbol** also called the **decision symbol**, which indicates that a decision is to be made.

C provides three types of selection structures in the form of statements. The if selection statement either performs an action if a condition is true or skips the action if the condition is false. The if...else selection statement performs an action if a condition is true and performs a different action if the condition is false. The switch selection statement performs one of many different actions depending on the value of an expression. The if statement is called a **single-selection statement** because it selects or ignores a single action. The if...else statement is called a **double-selection statement**  because it selects between two different actions. 

C provides three types of repetition structures in the form of statements, namely while, do...while, and for. 

#### The *if* Selection Statement
Selection structures are used to choose among alternative courses of action. For example, suppose the passing grade on an exam is 60. The pseudocode statement

> *If Student's grade is greater than or equal to 60*
>>*Print "Passed"*

Determines if the condition "student's grade is greater than or equal to 60"  is true or false. If the condition is true, then "Passed" is printed , and the next pseudocode statement in order is "performed". If the condition is false printing is ignored, and the next pseudocode statement in order is performed.

The preceding pseudocode *If* statement may be written in C as 

~~~
if ( grade >= 60 ){
	printf( "Passed\n" );
}
~~~

#### The *if...else* Selection Statement
The *if...else* selection statement allows you to specify that different actions are to be performed when the condition is true than when the condition is false. For example, the  pseudocode statement 

>*If student's grade is greater than or equal to 60*
>>*Print "Passed"*

> *else*
>> *Print "Failed"*

prints *Passed* if the student's grade is greater than or equal to 60 and prints *Failed*  if the student's grade is less than 60. In either case, after printing occurs, the next pseudocode statement in the sequence is "performed."

The preceding pseudocode *If...else* statement may be written in C as

~~~
if ( grade >= 60 )
{
	printf( "Passed\n" );
}
else
{
	printf( "Failed!\n" );
}
~~~

C provides the conditional operator (?:) which is closely related to the *if...else* statement. The conditional operator is C's only **ternary operator**. The operands together with the conditional operator form a conditional expression. The first operand is a condition. The second operand is the value for the entire conditional expression if the condition is true and the third operand is the value for the entire conditional expression if the condition is false. For example the printf statement 

~~~
printf( "%s\n", grade >= 60 ? "Passed" : "Failed" ); 
~~~

**Nested *if..else* statements** test for multiple cases by placing if...else statements inside if...else statements. Many programmers prefer to write *if...else if...else* statements instead of using nested if..else statements. 

#### The *while* Repetition Statements
A **repetition statement** allows you to specify that an action is to be repeated while some condition remains true. The pseudocode statement

>*While there are more items on my shopping list*
>>*Purchase next item and cross it off my list*
 
describes the repetition that occurs during a shopping trip. The condition, "there are more items on my shopping list" may be true or false. If it is true, then the action "Purchase next item and cross it off my list" is performed. This action will be performed repeatedly while the condition remains true. Eventually, the condition become false. At this point, the repetition terminates, and the first pseudocode statement after the repetition structure is executed.

***Note:*** Counter-controlled repetition is often called *definite repetition* because the number of repetitions is known before the loop begins executing.

Here are some examples and outputs:

- [Class Average Code](c/Average.c) 

![Class Average](c/images/Average.png  "Class Average")

- [Class Average with Sentinel](c/Average_sentinel.c)

![as1](c/images/Average_sentinel1.png  "as1")
![as2](c/images/Average_sentinel2.png  "as2")

- [Examination (Calculates overall passes and fails)](c/Examination.c)

![exm](c/images/Exemination1.png  "exm")
![exm2](c/images/Examination2.png  "exm2")

#### Assignment Operators
C provides several assignment operators for abbreviating assignment expressions.












