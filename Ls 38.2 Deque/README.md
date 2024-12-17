## STL Deque

A queue data structure allows insertion only at the end and deletion from the front.
i.e members are removed from the front and added at the back.
Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.

Deque or Double-ended queues are sequence containers with the feature of expansion and contraction on both ends.

They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
Unlike vectors, contiguous storage allocation may not be guaranteed.

The time complexities for doing various operations on deques are-

Accessing Elements- O(1)
Insertion or removal of elements- O(N)
Insertion or removal of elements at start or end- O(1)

Vector
Provides insertion and deletion methods at middle and end
Bad performance for insertion and deletion at the front
Stores elements contiguously
Good performance for addition and deletion of elements at the end
It is stored in <vector> header file in C++
Its time complexity of insertion is O(N)
Its time complexity of deletion is O(N)

Deque:
Provides insertion and deletion methods at middle, end, beginning
Good performance for insertion and deletion at the front
It contains lists of memory chunks where elements are stored contiguously
Good performance for addition and deletion of elements at the end
It is stored in <deque> header file in C++
Its time complexity of insertion is O(1)
Its time complexity of deletion is O(N)

When should we choose Deque over Vector?
We must choose Deque when our operations are adding and deleting elements in the beginning and at the end (Double-ended queue ADT).

1. insert() function

It is used to insert elements in the deque. The insert() function can be used in three ways:

Extends deque by inserting a new element val at a position.
Extends deque by inserting n new element of value val in the deque.
Extends deque by inserting new element in the range [first, last).

deque_name.insert (iterator position, val)

deque_name.insert (iterator position, number of elements to insert, value)

2. emplace_front() and emplace_back() function

emplace_front()
This function is used to insert a new element into the deque container, the new element is added to the beginning of the deque

dequename.emplace_front(value)

emplace_back()
This function is used to insert a new element into the deque container, the new element is added to the end of the deque.

dequename.emplace_back(value)

3. resize() Function
   It is an inbuilt function in C++ STL which changes the size of the deque.
   If the given size is greater than the current size, then new elements are inserted at the end of the deque.
   If the given size is smaller than the current size, then extra elements are destroyed.

Syntax:

deque_name.resize(n)

4. push_front() Function

push_front() function is used to push elements into a deque from the front.
The new value is inserted into the deque at the beginning, before the current first element and the container size is increased by 1.

dequename.push_front(value)

5. push_back() Function

push_back() function is used to push elements into a deque from the back.
The new value is inserted into the deque at the end, before the current last element and the container size is increased by 1.

dequename.push_back(value)

6. pop_front() Function

pop_front() function is used to pop or remove elements from a deque from the front. The value is removed from the deque from the beginning, and the container size is decreased by 1.

7. pop_back() Function

pop_back() function is used to pop or remove elements from a deque from the back. The value is removed from the deque from the end, and the container size is decreased by 1.

dequename.pop_back()

8. front() Function

front() is used to reference the first element of the deque container. This function can be used to fetch the first element of a deque.

dequename.front()

9. back() Function

back() function is used to reference the last element of the deque container. This function can be used to fetch the first element from the back of a deque.

dequename.back()

10. clear() Function

The clear() function is used to remove all the elements of the deque container, thus making its size 0.

dequename.clear()

11. erase() Function

The erase() function is used to remove elements from a container from the specified position or range.

Syntax :

1. dequename.erase(position)
2. dequename.erase(startingposition, endingposition)

3. operator=

This operator is used to assign new contents to the container by replacing the existing contents.
It also modifies the size according to the new contents.

Syntax :
dequename1 = (dequename2)

13. operator[]
    This operator is used to reference the element present at position given inside the operator.

Syntax:
dequename[position]

14. at() Function

at() function is used reference the element present at the position given as the parameter to the function. Syntax :

dequename.at(position)

15. swap() Function

This function is used to swap the contents of one deque with another deque of same type and size. Syntax :

Synatx:
dequename1.swap(dequename2)

16. begin() Function

begin() function is used to return an iterator pointing to the first element of the deque container. begin() function returns a bidirectional iterator to the first element of the container. Syntax :

Syntax:
dequename.begin()

17. end() Function

end() function is used to return an iterator pointing to the last element of the deque container. end() function returns a bidirectional iterator to the last element of the container

Syntax:
dequename.end()
