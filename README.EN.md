# C_Plus_Plus
It is a commit that organizes the basics of C++ into code. / It's a commit that cleans up the C++ basics into code.
###### Please note that all translations have been made using Google Translator.

## HelloWorld

~~~Cpp

#include <iostream>
using namespace std;

int main() {

cout<<"HelloWorld""<<endl;
return 0;
}

~~~

## Code interpretation

### before start

**Helllo Wolrd** will be the first output method that most programmers use every time they start a new language.<br />
In C++, you have to write a lot of code to print HelloWorld compared to Python.<br />
And if you tell me the biggest difference between C++ and Python, I am the way the language is executed. <br /><br />
First of all, in the case of Python, it is an interpreter language, and an interpreter language is a language method that executes source code at once. <br />
Typically, the language of Python is an interpreter language. Let's look at the characteristics of the interpreter language

1. The speed is slow because it is executed immediately without compiling.
2. It can be executed without a build process.

<br />

Now, if you look at the compilation language, representatively, there are Java, C, C++, etc. <br />
Compilation language is a language method that compiles source code and then reads and executes machine language through CPU/memory.<br />
Let's look at the characteristics of the compiled language
1. Large programs can take a long time to compile.
2. After compilation, all source codes are converted into machine language, so execution time is fast.
<br />

## Main()
In int **main**, main is processed from the bottom of the main function in C++ in principle. <br />
In C++ code, there is a part that becomes the main body of the program. This is the code right below.<br />

~~~Cpp

int main() {

return 0;

}
~~~

The code above is the body of the program in C++. <br />
In C++, execution ends when code execution reaches **return 0;**. <br />
The part surrounded by curly braces {} is called a **block**.
<br />
## include files
If you look at the top part of the HelloWorld code, there is such a code.
~~~Cpp
#include <iostream>
~~~
This part is called include, and **iostream** refers to the file that defines the function to output to the screen. <br />
Reading this file is called **Include**.<br />
Without **iostream**, **cout** that outputs the data type cannot function properly.
<br />
And in C++, files that are read in advance like iostream are called **header files**.<br />
Also, the line with # in #include next to iostream is read before being translated into other code by a special part of the preprocessor included in the compiler. <br />

## using namespace std;
Originally, in C++, to print something, you have to write it like the code below.
~~~ Cpp
std.cout<<"HelloWorld"<<endl;
~~~
However, if you use the **using namespace std;** in the second line, you can at least say **cout** as if you were just using it.

---

## Variable

~~~ cpp

#include <iostream>
using namespace std;

int main() {

int a;
a = 3;

cout<<"a = "<<a<<endl;
return 0;
}
~~~

## Code interpretation
At first, if you look at the block part, it was declared that there is a variable called a in the data type of **int.** <br />
In the line immediately below that, the variable a was assigned the value of **3**. <br />
And if you look at the cout output line, you can see, but first, it prints as **a =**, and after that, the substitution value of a, **3**, comes out.<br />

## Variable value initialization
Initializing the variable value seems to be very complicated, but once you know it, it is very easy.<br />
Again, an example will be shown in code. <br />

~~~Cpp
#include <iostream>
using namespace std;

int main() {

int a;
a = 3;

int b;
b = 5;

cout<<"a = "<< a << endl;
cout<<"b = "<< b << endl;

a = 5;
b = 3;

cout<<"a = "<< a << endl;
cout<<"b = "<< b << endl;

return 0;
}
~~~
The code above is to change the assignment value of the **int type variable a and b.** <br />
The output result is sequentially descended from the inside of the block, so the initialized value of the variable assignment value immediately above the return is output.

### Rules for variable names

1. Do not start with a number.
2. Do not use a function name that already exists in C++.
3. Do not use white space or tap or space. To do this, use underbar_.

## literal
First of all, **literal** is called **literal** that outputs like strings or ints in C++. <br />

~~~ cpp
#include <iostream>
using namespace std;

int main()
{
cout <<'A' <<'\n';
cout << "Welcome to the C++ world! \n";
cout << 123 <<'\n';

return 0;
}

~~~

If you look at the code above, you know, but when you run that code, the value is

~~~
A
Welcome to the C++ world!
123

~~~

This is the result. In simple terms as above, you can think of it as **like C++ words** used when expressing a certain'value'. <br />
Literals are classified into a total of 4 categories. <br />
1. String literal
2. Character literal
3. Numeric literals
4. Logical literal

### character literal
In C++, literals are classified into two categories. <br />
1. One character
2. Consecutive characters (string)

First, let's start with **how to express a single character**.<br />
One character is called a **character literal**.

The use of character literals is very simple. **'(str)'**(str is omitted) can be used. <br />
If you print it, you can see that the result value is printed with the quotation marks omitted.

## a constant
### const designation
First of all, in a variable in C++, if you change the value in the same name and type, the variable value changes.<br />
This time, let's create a variable whose value cannot be changed.
First of all, I'll explain with code.

~~~cpp
#include <iostream>
using namespace std;

int main() {
const double pi = 3.1415;

cout<<"The value of pi is "<< pi << "" << endl;

//pi = 1.44;

return 0;
}
~~~

What would happen if you delete the commented pi?<br />
First of all, if you uncomment, **compile** is impossible.

## expressions and operators
Computers do a variety of things by **calculating**. <br />
This time, we will look at **calculation**.<br />
In c++, **expression** is mostly divided into two.
1. Operator (operating thing: operator)
2. Operand (operation target: operand)

It is a combination of these two. Let me give you an example? <br />
**1+2** If there is such a calculation, the **operator is +**. Then ** operands would be 1, 2**.

### Output the value of an expression

~~~cpp
#include <iostream>
using namespace std;

int main() {

cout<< "1 + 2 is" << 1 + 2 << "." <<< endl;
cout<< "1-2 is" << 1-2 << "." <<< endl;
cout<< "1 * 2 is" << 1 * 2 << "." <<< endl;
cout<< "1/2 is" << 1/2 << "." <<< endl;

return 0;
}

~~~

You can write code like this.
