## PASS BY VALUE AND PASS BY REFERENCE

There are three ways you can pass a variable to a function in C++

1. **Pass by Value**:

Whenever you pass a variable through a function, C++ creates a COPY of that variable. Thus, whenever you change the value of a variable through a function, it actually changes the value of the copy and not the original.

2. **Pass by Address with Pointers / Pass by Reference**:

The difference is that in case the actual parameters are passed into the function.

**Pass by Reference**: //Reference doesn't require pointers.

```cpp
int main(){
  int x = 10;
  cout<<x;
  passbyReference(x);
  cout<<x;
}
void passbyReference(int &x){
  x = 66;
}
```

**Pass by Address**: //Address requires pointers.

```cpp
int main(){
  int x = 10;
  cout<<x;
  passbyAddress(&x);
  cout<<x;
}
void passbyAddress(int *x){
  *x = 66;
}
```
