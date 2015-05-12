#include "Schedule.h"

void Schedule::addActivity(Activity &activity)
{
	schedule.push_back(activity);
}

void Schedule::sortActivities()
{
	Activity temp;
	for (int i = 1; i <= schedule.size(); i++)
	{
		int copyIndex = i;
		while (copyIndex > 0 && (schedule[copyIndex - 1].getEnd() > schedule[copyIndex].getEnd()))
		{
			temp = schedule[copyIndex];
			schedule[copyIndex] = schedule[copyIndex - 1];
			schedule[copyIndex - 1] = temp;
			copyIndex--;
		}
	}
}

void Schedule::setTableSize()
{
	int size = schedule.size();
	maxSize = size;
	table = new Activity[size];
}

void Schedule::optimizeActivity()
{
	table[0] = Activity(0, 0, 0);
	for (int i = 1; i < maxSize; i++)
	{
		
	}
}