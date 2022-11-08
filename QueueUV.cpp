#include "QueueUV.h"

template <typename T>
QueueUV<T>::QueueUV()
	: item_size(0), front(0), rear(0), max_size(1)
{
	queue_array = new T[max_size];
}

template <typename T>
QueueUV<T>::QueueUV(int size)
	: item_size(0), front(0), rear(0), max_size(size)
{
	queue_array = new T[max_size];
}

template <typename T>
void QueueUV<T>::push(T data)
{
	if (rear == max_size && front == 0)
	{
		T* arr2 = new T[max_size * 2];
		for (int i = 0; i < item_size; i++)
			arr2[i] = queue_array[i];
		delete[] queue_array;
		queue_array = arr2;
		arr2 = NULL;
		queue_array[rear++] = data;
		max_size = max_size * 2;
		item_size++;
	}
	else if (rear == max_size && front != 0 && front != rear)
	{
		rear = 0;
		queue_array[rear++] = data;
		item_size++;
	}
	else if (rear == front && item_size != 0)
	{
		T* arr2 = new T[max_size * 2];
		for (int i = front; i < max_size; i++)
			arr2[i - front] = queue_array[i];
		for (int i = 0; i < rear; i++)
			arr2[i + max_size - front] = queue_array[i];
		rear = item_size;
		front = 0;
		arr2[rear++] = data;
		item_size++;
		max_size = max_size * 2;
		delete[] queue_array;
		queue_array = arr2;
	}
	else if (rear == front && item_size == 0)
	{
		front = rear = 0;
		queue_array[rear++] = data;
		item_size++;
	}
	else if (rear < max_size)
	{
		queue_array[rear++] = data;
		item_size++;
	}
}

template <typename T>
T QueueUV<T>::pop()
{
	if ((front != rear && item_size > 0))
	{
		T value = queue_array[front];
		front++;
		item_size--;
		return value;
	}
	else if (front == item_size && rear != item_size && item_size > 0)
	{
		front = 0;
		T value = queue_array[front];
		front++;
		item_size--;
		return value;
	}
	else if (rear == front && item_size == 0)
	{
		throw std::out_of_range("Queue is Empty");
	}
	else 
	{
		throw std::overflow_error("Unexpected Error");
	}
	//if (rear != 0 && front != rear) {
	//	T val = queue_array[front];
	//	front++; 
	//	item_size--;
	//	return val;
	//}
	//else if (front == rear && item_size == max_size)
	//{
	//	T val = queue_array[front];
	//	front++;
	//	item_size--;
	//	return val;
	//}
	//else if (front == rear && item_size == 0)
	//{
	//	throw std::out_of_range("List is Empty");
	//}
}

template <typename T>
int QueueUV<T>::capacity()
{
	return max_size;
}

template <typename T>
int QueueUV<T>::size()
{
	return item_size;
}

template <typename T>
void QueueUV<T>::display()
{
	if (rear <= front) {
		for (int i = front; i < max_size; i++)
		{
			std::cout << queue_array[i] << " ";
		}
		for (int i = 0; i < rear; i++)
		{
			std::cout << queue_array[i] << " ";
		}
	}
	else {
		for (int i = front; i < rear; i++)
		{
			std::cout << queue_array[i] << " ";
		}
	}
	std::cout << "\n";
}

template <typename T>
QueueUV<T>::~QueueUV()
{
	delete[] queue_array;
}
