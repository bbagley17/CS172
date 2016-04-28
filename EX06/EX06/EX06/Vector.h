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
	//	Joseph: I think that this could be an acceptable way, but what if you want to use the vector after you clear it?
	//          If you add a little bit more code to reinitialize the pointer to a new vector class, than it would be.
	//
	//          But with these changes, I think this is better than a lot of other ways to clear the vector.
	//
	void clear()
	{
		for (int n = 0; n < size; n++)
		{
			delete[] vectorItself;
		}

		// Joseph: capacity = 10; vectorItself = new T[capacity];
	}

	void swap(vector v2)
	{
		T* temp = vectorItself;
		vectorItself = v2;
		v2 = temp;
	}
};
#endif
