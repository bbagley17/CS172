#pragma once

#ifndef VECTOR_H_
#define VECTOR_H_
template<typename T>
class vector
{
private:
	T* vectorItself[];
	int size;
	int capacity;

public:
	vector<T>()
	{
		capacity = 10;
		vectorItself = new T[capacity];
		size = 0;
	}

	vector<T>(int inputSize)
	{
		capacity = inputSize;
		vectorItself = new T[capacity];
		size = 0;
	}
	
	vector<T>(int inputSize, T defaultValue)
	{
		capacity = inputSize;
		vectorItself = new T[capacity];
		size = 0;
		for (int n = 0; n < capacity; n++)
		{
			vectorItself[n] = defaultValue;
			size++;
		}
	}

	void push_back(T newElement)
	{
		vectorItself[size] = newElement;
		size++;
	}

	void pop_back()
	{
		delete vectorItself[size - 1];
		size--;
	}

	const int size()
	{
		return size;
	}

	const T at(int index)
	{
		return vectorItself[index];
	}

	const bool empty()
	{
		bool isEmpty;
		if (size == 0)
			isEmpty = true;
		else
			isEmpty = false;
		return isEmpty;
	}
	//Is this an acceptable method of clearing the vector??
	//
	//
	//
	//			?????????
	//
	//
	void clear()
	{
		for (int n = 0; n < size; n++)
		{
			delete[] vectorItself;
		}
	}

	void swap(vector v2)
	{
		T* temp = vectorItself;
		vectorItself = v2;
		v2 = temp;
	}
};
#endif
