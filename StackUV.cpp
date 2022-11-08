#include "StackUV.h"


template <typename T>
StackUV<T>::StackUV()
	: item_size(0), front(0), rear(0), max_size(1)
{
	stack_array = new int[max_size];
}

template <typename T>
StackUV<T>::StackUV(int size)
	: item_size(0), front(0), rear(0), max_size(size)
{
	stack_array = new int[max_size];
}

template <typename T>
void StackUV<T>::push(T data)
{
	if (item_size < max_size)
	{
		stack_array[rear] = data;
		item_size++; rear++;
	}
	else if (item_size == max_size)
	{
		int* stack_array_2 = new int[max_size * 2];
		for (int i = front; i < rear; i++)
		{
			stack_array_2[i] = stack_array[i];
		}
		stack_array_2[rear] = data;
		item_size++; rear++;
		delete[] stack_array;
		stack_array = stack_array_2;
		max_size = max_size * 2;
		stack_array_2 = NULL;
	}
}

template <typename T>
T StackUV<T>::pop()
{
	if (rear != 0) {
		rear = rear - 1;
		item_size = item_size - 1;
		int val = stack_array[rear];
		return val;
	}
	else {
		return -1;
	}
}

template <typename T>
int StackUV<T>::capacity()
{
	return max_size;
}

template <typename T>
int StackUV<T>::size()
{
	return item_size;
}

template <typename T>
void StackUV<T>::display()
{
	for (int i = front; i < rear; i++)
	{
		std::cout << stack_array[i] << " ";
	}
}


template <typename T>
StackUV<T>::~StackUV()
{
	delete[] stack_array;
}