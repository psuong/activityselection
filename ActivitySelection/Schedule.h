#ifndef SCHEDULE_H
#define SCHEDULE_H
#include "Activity.h"
#include <vector>

class Schedule
{
public:
	void addActivity(Activity &activity);
	void sortActivities();
	void optimizeActivity();
	void setTableSize();

private:
	int maxSize;
	std::vector<Activity> schedule;
	Activity *table;
};

#endif