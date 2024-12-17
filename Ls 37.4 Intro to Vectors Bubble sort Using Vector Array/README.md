## Introduction to Vectors

Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.

Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end.

Inserting at the end takes differential time, as sometimes the array may need to be extended.

Removing the last element takes only constant time because no resizing happens. O(1)

Inserting and erasing at the beginning or in the middle is linear in time. O(n)

Vectors are part of STL (Standard Template Library)

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators.

How does a vector work in C++?

A Vectors in C++ can resize itself when more elements are added. It also allows deletion of elements.

Below is a very basic idea when array becomes full and user wishes to add an item.

1. Create a bigger sized memory on heap memory (for example memory of double size).

2. Copy current memory elements to the new memory.

3. New item is added now as there is bigger memory available now.

4. Delete the old memory.

However the actual library implementation may be more complex.

https://www.geeksforgeeks.org/vector-in-cpp-stl/

Capacity

size() – Returns the number of elements in the vector.

Syntax :
vectorname.size()

max_size() – Returns the maximum number of elements that the vector can hold.

vector_name.max_size()

generally about: 4611686018427387903 elements

Modifiers:

push_back() – It push the elements into a vector from the back i.e append an element to the vector

vectorname.push_back(value)

pop_back() – It is used to pop or remove elements from a vector from the back.

vectorname.push_back(value)

insert() – It inserts new elements before the element at the specified position

vector_name.insert (position, val)

erase() – It is used to remove elements from a container from the specified position or range.

1. vectorname.erase(position)
2. vectorname.erase(startingposition, endingposition)

swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.

vectorname1.swap(vectorname2)

clear() – It is used to remove all the elements of the vector container. All the elements of the vector are
removed ( or destroyed )

vectorname.clear()

Element access:

reference operator [g] – Returns a reference to the element at position ‘g’ in the vector

A.] vector::operator=

This operator is used to assign new contents to the container by replacing the existing contents.
It also modifies the size according to the new contents.

Syntax: vectorname1 = (vectorname2)

B.] vector::operator[]

This operator is used to reference the element present at position given inside the operator.

It is similar to the at() function, the only difference is that the at() function throws an out-of-range exception when the position is not in the bounds of the size of vector, while this operator causes undefined behavior.

Syntax : vectorname[position]

at(g) – Returns a reference to the element at position ‘g’ in the vector

Syntax:
vectorname.at(position)

front() – This function can be used to fetch the first element of a vector container.

Syntax :
vectorname.front()

back() – This function can be used to fetch the last element of a vector container.

Syntax :
vectorname.back()

data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

Syntax: vector_name.data()

Return value: The function returns a pointer to the first element in the array which is used internally by the vector.

Eg.

```cpp
vector<int> vec = { 10, 20, 30, 40, 50 };


// memory pointer pointing to the first element
int\* pos = vec.data();

// prints the vector
cout << "The vector elements are: ";
for (int i = 0; i < vec.size(); ++i){
cout << \*pos++ << " ";
}
```
