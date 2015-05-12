#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <stdlib.h>

class Activity
{
public:
	//default constructor
	Activity()
	{
		value = rand() % 10 + 1;
		start = rand() % 10;
		end = rand() % 15 + 5;
	}

	//Manual override, custom constructor
	Activity(int begin, int finish, int weight)
	{
		value = weight;
		start = begin;
		end = finish;
	}

	int getValue() { return value; }
	int getEnd() { return end; }
	int getStart() { return start; }

private:
	int value;
	int start;
	int end;
};

#endif