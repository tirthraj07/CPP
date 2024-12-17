## Inheritance

The capability of a class to derive properties and characteristics from another class is called Inheritance.
Inheritance is a feature or a process in which, new classes are created from the existing classes.
The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”.
The derived class now is said to be inherited from the base class.

When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class and may add new features to its own.
These new features in the derived class will not affect the base class. The derived class is the specialized class for the base class.

Syntax:

```cpp
class  <derived_class_name> : <access-specifier> <base_class_name>
{
 //body
}
```

access-specifiers are either public, private or protected.
A derived class doesn’t inherit access to private data members

Modes of Inheritance: There are 3 modes of inheritance.

1] **Public Mode**:

When the base class is publicly inherited by the derived class:
i.e

```cpp
class  <derived_class_name> : public <base_class_name>
```

public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class (i.e it can be accessed outside of the class) as well as by the member functions of the derived class.

2] **Private Mode**:

When a base class is privately inherited by the derived class:
i.e

```cpp
class  <derived_class_name> : private <base_class_name>
```

public members of the base class becomes the private members of the derived class and therefore, the public members of the base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class. (i.e inaccessible outside of the class)

3] **Protected Mode**:

If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.

```cpp
class  <derived_class_name> : protected <base_class_name>
```

---x---x---x---
If we do not mention the access-specifier, it is assumed as private.
i.e:

```cpp
class  <derived_class_name> : <base_class_name>{
....
}
```

Here, the base class members are inherited privately by default.

SOURCE: https://www.geeksforgeeks.org/inheritance-in-c/

Types Of Inheritance:-
1] Single inheritance
2] Multilevel inheritance
3] Multiple inheritance
4] Hierarchical inheritance
5] Hybrid inheritance
