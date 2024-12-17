B. **Static functions in a class**:

Just like the static data members or static variables inside the class, static member functions also does not depend on object of class.

They are independent of the object of the class.
We are allowed to invoke a static member function using the object and the ‘.’ operator (obj.<static-member-function>)
but it is recommended to invoke the static members using the class name and the scope resolution operator.
( class_name::<static-member-function> )

Static member functions are allowed to access only the static data members or other static member functions
They CANNOT access the non-static data members or member functions of the class.
