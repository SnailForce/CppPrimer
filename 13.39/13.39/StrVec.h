#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class StrVec
{
public:
	StrVec() :elements(nullptr), first_free(nullptr), cap(nullptr) {}
	StrVec(const StrVec&);
	StrVec& operator=(const StrVec&);
	~StrVec();
	void push_back(const string&);
	size_t size() const
	{
		return first_free - elements;
	}
	size_t capacity() const
	{
		return cap - elements;
	}
	string* begin() const
	{
		return elements;
	}
	string* end() const
	{
		return first_free;
	}
private:
	static allocator<string> alloc;
	void chk_n_alloc()
	{
		if (size() == capacity())
		{
			reallocate();
		}
	}
	void reallocate();
	void free();
	string* elements;
	string* first_free;
	string* cap;
};