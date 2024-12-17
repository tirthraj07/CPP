## Diamond Problem

```
        Class A
        /      \
    Class B    Class C
        \      /
         Class D
```

Consider the situation where we have one class A.
This class is A is inherited by two other classes B and C.
Both these class are inherited into another in a new class D

As we can see from the figure that data members/function of class A are inherited twice to class D. One through class B and second through class C

When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C.
This confuses compiler and it displays error.

To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual as :

Syntax 1:

```cpp
class B : virtual public A
{
};
```

Syntax 2:

```cpp
class C : public virtual A
{
};
```

Note: virtual can be written before or after the public

Now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class.

Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances.

When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members.

A single copy of its data members is shared by all the base classes that use virtual base.
