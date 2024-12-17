## Exception Handling in C++

One of the advantages of C++ over C is Exception Handling.
Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution.

try: Represents a block of code that can throw an exception.
throw: Used to throw an exception. Also used to list the exceptions that a function throws but doesn’t handle itself.
catch: Represents a block of code that is executed when a particular exception is thrown.

SYNTAX:

```cpp
try {
// Block of code to try

throw exception; // Throw an exception when a problem arise

}
catch () {
// Block of code to handle errors
}
```
