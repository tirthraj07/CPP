When you use sizeof(arr) in a function, you get a warning:
sizeof on array function parameter will return size of 'int \*' instead of 'int '

What does this mean?
When the function receives an array parameter ‘arr[]’ and tries to find out the number of elements in arr[] using sizeof operator.

But in C, array parameters are treated as pointers.
So, the expression sizeof(arr)/sizeof(arr[0]) becomes sizeof(int _)/sizeof(int) which results in 2
(size of int_ is 8 bytes because its an pointer and pointer occupies the 8 bytes of memory and int is 4)

Why Does C Treat Array Parameters as Pointers?
In C, array parameters are treated as pointers mainly to,

1. To increase the efficiency of code
2. To save time

Solution:

1. Using a separate parameter:
   A separate parameter of size for array size or length should be passed to the function()

2. Using Macros:
   We can even define Macros using #define to find the size of arrays

```cpp
#define SIZEOF(arr) sizeof(arr) / sizeof(\*arr)
```
