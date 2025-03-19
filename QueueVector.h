#pragma once
#include <iostream>
#include <vector>
using namespace std;

template <class T>
class QueueVector
{

	vector<T> Internal;

public:

	void Enqueue(T data)
	{
		Internal.push_back(data);
	}

	T Dequeue()
	{
		T data = Internal.front();
		Internal.erase(Internal.begin());
		return data;
	}

	bool IsEmpty()
	{
		return Internal.size() == 0;
	}

	int Size()
	{
		return Internal.size();
	}

	T Front()
	{
		return Internal.front();
	}
	T back()
	{
		return Internal.back();
	}

};