A template is a way to pass data type as a parameter so that we don’t need to write the same code for different data types.
For eg:

```cpp
int add(int a,int b){
    return (a+b);
}

float add(float a,float b){
    return (a+b);
}

double add(double a,double b){
    return (a+b);
}
```

Instead of having to make multiple function definitions for the same function, we can make one function and pass the data-type as a parameter.
A function template allows us to do that.

Syntax:

```cpp
template <class class-name>

<class-name> <function-name> (<class-name> variable){
//Body
}
```

The compiler will replace the class-name with the data-type at run-time depending upon the variable data-type.

However, if multiple variables are in parameter, it is a MUST that they be the same data-type.
