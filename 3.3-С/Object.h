#pragma once
#include <iostream>
using namespace std;
class Object
{
	static unsigned int count;

public:
	
	Object() { count++; };
	~Object() { count--; };
	static unsigned int Count() { return count; };
	
};

	