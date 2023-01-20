# C++ Data Structures and Algorithms

**MyString Class**

This is a custom C++ class that represents a string. It has the following features:

- A default constructor that creates an empty string.
- A constructor that takes a const char\* as an argument and creates a string with the same content.
- A copy constructor that creates a new string as a copy of an existing MyString object.
- An overloaded operator[] function that allows for direct access to individual characters in the string.
- An overloaded assignment operator that assigns the contents of one MyString object to another.
- A friend function that overloads the "<<" operator for easy printing of MyString objects to a stream.
- A destructor that properly releases any allocated memory.

**Usage**

To use the MyString class, include the header file "MyString.h" in your code and create a new object of the MyString class. You can then use the object to store and manipulate strings as desired.

Here is an example of how to use the class:

```c
#include "MyString.h"
#include <iostream>

int main()
{
    MyString str("Hello, world!");
    std::cout << str << std::endl; // Outputs "Hello, world!"
    str[7] = 'J';
    std::cout << str << std::endl; // Outputs "Hello, Jorld!"
    return 0;
}
``` 

**Note**

This is a basic implementation of string class, and it doesn't handle all the edge cases. Feel free to add more functionality as per your requirement

**Dependencies**

This class has no external dependencies. The only required header is **<iostream>** for overloading the "<<" operator.

**Compilation**

This class can be compiled using a C++ compiler such as g++ or clang++. Simply include the MyString.h and MyString.cpp file in your project and compile as usual.

**Stack Class**

This is a custom C++ class that implements a stack data structure using a linked list. It has the following features:

- A default constructor that creates an empty stack.
- A push() method that adds an element to the top of the stack.
- A pop() method that removes the top element from the stack. An optional index parameter can be used to remove a specific element from the stack.
- A top() method that returns the value of the top element of the stack without removing it.
- A front() method that returns the value of the front element of the stack without removing it.
- A display() method that prints the contents of the stack to the console.
- A getsize() method that returns the number of elements in the stack.
- A destructor that properly releases any allocated memory.

**Usage**

To use the Stack class, include the header file "Stack.h" in your code and create a new object of the Stack class. You can then use the object to push and pop elements from the stack as desired.

Here is an example of how to use the class:

```c
#include "Stack.h"
#include <iostream>

int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.display(); // Outputs "15 10 5"
    int top = s.top();
    std::cout << "Top element: " << top << std::endl; // Outputs "Top element: 15"
    int popped = s.pop();
    std::cout << "Popped element: " << popped << std::endl; // Outputs "Popped element: 15"
    s.display(); // Outputs "10 5"
    return 0;
}
```

**Note**

This is a basic implementation of stack class, and it doesn't handle all the edge cases. Feel free to add more functionality as per your requirement

**Dependencies**

This class has no external dependencies. The only required headers are **<iostream>** and **<string>**.

**Compilation**

This class can be compiled using a C++ compiler such as g++ or clang++. Simply include the Stack.h and Stack.cpp file in your project and compile as usual.

**StackUV Class**

This is a generic C++ class that implements a stack data structure using an array. It has the following features:

- A default constructor that creates an empty stack with the size of 10.
- A constructor that takes an integer as an argument to specify the initial size of the stack.
- A push() method that adds an element to the top of the stack. If the stack is full, the array is resized to twice its previous size to accommodate the new element.
- A pop() method that removes the top element from the stack and returns its value.
- A capacity() method that returns the current capacity of the stack.
- A size() method that returns the number of elements in the stack.
- A display() method that prints the contents of the stack to the console.
- A destructor that properly releases any allocated memory.

**Usage**

To use the StackUV class, include the header file "StackUV.h" in your code and create a new object of the StackUV class. You can then use the object to push and pop elements from the stack as desired.

Here is an example of how to use the class:

```c
#include "StackUV.h"
#include <iostream>

int main()
{
    StackUV<int> s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    s.display(); // Outputs "15 10 5"
    int top = s.pop();
    std::cout << "Popped element: " << top << std::endl; // Outputs "Popped element: 15"
    s.display(); // Outputs "10 5"
    return 0;
}
```

In this example, the stack is created with an initial size of 5 and can hold 5 elements. When the 6th element is pushed, the array is resized to twice its previous size (10) to accommodate the new element.

**Note**

This is a basic implementation of stack class using array, and it doesn't handle all the edge cases. Feel free to add more functionality as per your requirement.

**Dependencies**

This class has no external dependencies. The only required header is **<iostream>**.

**Compilation**

This class can be compiled using a C++ compiler such as g++ or clang++. Simply include the StackUV.h file in your project and compile as usual.

**Queue Class**

This is a custom C++ class that implements a queue data structure using a linked list. It has the following features:

- A default constructor that creates an empty queue.
- A push() method that adds an element to the back of the queue.
- A pop() method that removes the front element from the queue and returns its value. An optional index parameter can be used to remove a specific element from the queue.
- A top() method that returns the value of the last element of the queue without removing it.
- A front() method that returns the value of the front element of the queue without removing it.
- A display() method that prints the contents of the queue to the console.
- A getsize() method that returns the number of elements in the queue.
- A destructor that properly releases any allocated memory.

**Usage**

To use the Queue class, include the header file "Queue.h" in your code and create a new object of the Queue class. You can then use the object to push and pop elements from the queue as desired.

Here is an example of how to use the class:

```c
#include "Queue.h"
#include <iostream>

int main()
{
    Queue q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.display(); // Outputs "5 10 15"
    int front = q.front();
    std::cout << "Front element: " << front << std::endl; // Outputs "Front element: 5"
    int popped = q.pop();
    std::cout << "Popped element: " << popped << std::endl; // Outputs "Popped element: 5"
    q.display(); // Outputs "10 15"
    return 0;
}
```

**Note**

This is a basic implementation of queue class, and it doesn't handle all the edge cases. Feel free to add more functionality as per your requirement

**Dependencies**

This class has no external dependencies. The only required header is **<iostream>**.

**Compilation**

This class can be compiled using a C++ compiler such as g++ or clang++. Simply include the Queue.h and Queue.cpp file in your project and compile as usual.

**QueueUV Class**

This is a generic C++ class that implements a queue data structure using an array. It has the following features:

- A default constructor that creates an empty queue with a default size of 10.
- A constructor that takes an integer as an argument to specify the initial size of the queue.
- A push() method that adds an element to the back of the queue. If the queue is full, the array is resized to twice its previous size to accommodate the new element.
- A pop() method that removes the front element from the queue and returns its value.
- A capacity() method that returns the current capacity of the queue.
- A size() method that returns the number of elements in the queue.
- A display() method that prints the contents of the queue to the console.
- A destructor that properly releases any allocated memory.

**Usage**

To use the QueueUV class, include the header file "QueueUV.h" in your code and create a new object of the QueueUV class, specifying the type of element that the queue will hold. You can then use the object to push and pop elements from the queue as desired.

Here is an example of how to use the class:

```c
#include "QueueUV.h"
#include <iostream>

int main()
{
    QueueUV<int> q(5);
    q.push(5);
    q.push(10);
    q.push(15);
    q.display(); // Outputs "5 10 15"
    int front = q.pop();
    std::cout << "Popped element: " << front << std::endl; // Outputs "Popped element: 5"
    q.display(); // Outputs "10 15"
    return 0;
}
```

In this example, the queue is created with an initial size of 5 and can hold 5 elements. When the 6th element is pushed, the array is resized to twice its previous size (10) to accommodate the new element.

**Note**

This is a basic implementation of queue class using array, and it doesn't handle all the edge cases. Feel free to add more functionality as per your requirement.

**Dependencies**

This class has no external dependencies. The only required header is **<iostream>**.

**Compilation**

This class can be compiled using a C++ compiler such as g++ or clang++. Simply include the QueueUV.h file in your project and compile as usual.

**Binary Tree Class**

This is a C++ class that implements a binary tree data structure. It has the following features:

- An insert() method that adds a new node to the tree.
- A remove() method that removes a specified node from the tree.
- A search() method that searches for a specified value in the tree and returns true if found and false if not.
- A bfs() method that performs a breadth-first search of the tree.
- A dfs() method that performs a depth-first search of the tree.
- A deleteTree() method that deletes all nodes in the tree and releases allocated memory.
- A getSize() method that returns the number of nodes in the tree.
- A in\_order\_traversal() method that performs in-order traversal of the tree.
- A pre\_order\_traversal() method that performs pre-order traversal of the tree.
- A post\_order\_traversal() method that performs post-order traversal of the tree.

The class uses a **QueueUV** and **StackUV** class to implement bfs and dfs methods respectively.

**Usage**

To use the binary tree class, include the header file "binary\_tree.h" in your code and create a new object of the tree\_node class. You can then use the object to insert and remove elements from the tree as desired. The class uses **QueueUV** and **StackUV** to implement bfs and dfs methods respectively.

Here is an example of how to use the class:

```c
	////////// TREES //////////
	tree_node* root = NULL;
	tree::insert(root, 5);
	tree::insert(root, 3);
	tree::insert(root, 1);
	tree::insert(root, 2);
	tree::insert(root, 4);
	tree::insert(root, 7);
	tree::insert(root, 9);
	tree::insert(root, 11);
	tree::insert(root, 6);
	tree::insert(root, 8);
	tree::insert(root, 10);

	unsigned int size = 0;
	size = tree::getSize(root);

	// By default 20 capacity of queue
	queue* q = new queue();  
	tree::bfs(root, q);

	// By default 20 capcity of stack
	stack* s = new stack();
	tree::dfs(root, s);
	std::cout << "\n";

	// IN_ORDER_TRAVERSAL
	queue* v = new queue();
	tree::in_order_traversal(root, v);
	while (v->getSize()) std::cout << v->pop()->data << " ";
	std::cout << "\n";

	// PRE_ORDER_TRAVERSAL
	queue* v1 = new queue();
	tree::pre_order_traversal(root, v1);
	while (v1->getSize()) std::cout << v1->pop()->data << " ";
	std::cout << "\n";

	// POST_ORDER_TRAVERSAL
	queue* v2 = new queue();
	tree::post_order_traversal(root, v2);
	while (v2->getSize()) std::cout << v2->pop()->data << " ";
	std::cout << "\n";
```

**Note** 

- In the above code, `QueueUV` and `StackUV` are classes implemented to use queue and stack respectively. 
- Also, you will need to include the header and source files for the `QueueUV` and `StackUV` classes along with the `binary\_tree.h` and `binary\_tree.cpp` files in your project. 
- Make sure to call the `deleteTree()` method after you are done with the tree to avoid any memory leaks. 

**Circular Linked List Class**

This is a Circular Linked List class implemented in C++. It allows you to perform various operations such as inserting, removing, and searching for elements in the list.

**Methods**

- **Insert(const int& data)**: This method inserts a new node at the end of the list, before the head node.
- **InsertBeforehead(const int& data)**: This method inserts a new node before the head node.
- **InsertAfterHead(const int& data)**: This method inserts a new node after the head node.
- **InsertBefore(const int& value, const int& data)**: This method inserts a new node before the node with the given value.
- **InsertAfter(const int& value, const int& data)**: This method inserts a new node after the node with the given value.
- **RemoveHead()**: This method removes the head node from the list.
- **RemoveNode(const int& data)**: This method removes the first node with the given data from the list.
- **Find(const int& data)**: This method searches for a node with the given data and returns true if it is found, and false otherwise.
- **Replace(const int& val, const int& val2)**: This method replaces the first node with the value of val to val2.
- **ReplaceAll(const int& val, const int& val2)**: This method replaces all nodes with the value of val to val2
- **FindMax()**: This method finds the maximum value of the list and returns the data of the node
- **FindMin()**: This method finds the minimum value of the list and returns the data of the node
- **ShowList()**: This method displays the entire list on the terminal
- **~CircularLinkedList()**: This is the class destructor, it deletes all nodes including head and set head and tail to NULL

**Usage**

```c
#include "CircularLinkedList.h"

int main()
{
    CircularLinkedList list;

    list.Insert(5);
    list.Insert(10);
    list.Insert(15);
    list.Insert(20);

    list.InsertAfter(5, 25);
    list.InsertBefore(10, 7);

    if (list.Find(20))
        std::cout << "Found element 20 in the list" << std::endl;

    list.ReplaceAll(5, 50);

    list.RemoveNode(20);

    list.ShowList();

    std::cout << "Max value of list is : " << list.FindMax() << std::endl;
    std::cout << "Min value of list is : " << list.FindMin() << std::endl;

    return 0;
}
```

**Note**

- In the above code, **\_Node** is a struct that stores data and next pointer for each node in the list.
- Make sure to call the destructor after you are done with the list to avoid any memory leaks.

**Doubly Linked List Class**

This class implements a doubly linked list data structure. The class is defined in the file **DoublyLinkedList.h** and implemented in **DoublyLinkedList.cpp**. The class provides the following functionality:

- Initialization of class variables
- Adding a new node at the tail of the list
- Adding a new node at the head of the list
- Adding a new node at a specific index in the list
- Displaying the list in ascending order (by default) or descending order
- Finding the index of a specific node in the list
- Accessing the data at a specific index in the list
- Replacing the data of a specific node in the list
- Removing a node at a specific index in the list
- Finding the length of the list
- Removing the last element of the list
- Destroying the entire list and setting the head and tail to NULL

**Usuage**

To use the class, include the header file in your program and create an instance of the class:

```c
#include "DoublyLinkedList.h"

DoublyLinkedList myList;
```

You can then use the various class methods to manipulate the list, for example:

```c
myList.AddAtTail(5);
myList.AddAtHead(3);
myList.AddAtIndex(1, 4);
myList.Display();
```

**Complete Usage**

Here is an example of how you can use the DoublyLinkedList class:

```c
#include "DoublyLinkedList.h"

int main()
{
    DoublyLinkedList list;

    list.AddAtTail(5);
    list.AddAtTail(7);
    list.AddAtHead(3);
    list.AddAtIndex(1, 4);
    list.Replace(7, 8);
    list.RemoveAt(2);

    list.Display();
    std::cout << "List length: " << list.Length() << std::endl;

    int index = list.Find(4);
    if (index != -1)
        std::cout << "Value 4 found at index: " << index << std::endl;
    else
        std::cout << "Value 4 not found in list" << std::endl;
        
    return 0;
}
```

The output of the program is 
```c
3 4 5 8 
List length: 3
Value 4 found at index: 1
```

**Compilation**

Just include the required file into your project. And go through the usage provided above to use the library.

**License**

This class is provided under the [MIT License](https://choosealicense.com/licenses/mit/)