#ifndef _STACKUV_H_
#define _STACKUV_H_

#include <iostream>

#define NULL 0 

template <typename T>
class StackUV
{
private:
	T* stack_array;
	int item_size;
	int front, rear, max_size;

public:
	StackUV();
	StackUV(int size);
	void push(T data);
	T pop();
	int capacity();
	int size();
	void display();
	~StackUV();
};


#endif
