#ifndef _QUEUEUV_H_
#define _QUEUEUV_H_

#include <iostream>

#define NULL 0 

template <typename T>
class QueueUV
{
private:
	T* queue_array;
	int item_size;
	int front, rear, max_size;

public:
	QueueUV();
	QueueUV(int size);
	void push(T data);
	T pop();
	int capacity();
	int size();
	void display();
	~QueueUV();
};

#endif