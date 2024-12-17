Static keyword has different meanings when used with different types. We can use static keyword with:

Static Variables : Variables in a function, Variables in a class
Static Members of Class : Class objects and Functions in a class

1] Static Variables
Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program.
Even if the function is called multiple times, space for the static variable is allocated only once.
A static variable is initialized only once.
The value of variable in the previous call gets carried through the next function call

Syntax:
static <data-type> variable-name = <value>;
