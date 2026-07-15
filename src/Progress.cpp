#include "../include/Progress.h"

Progress::Progress()
{
}

void Progress::completeCourse(Course* course)
{
    completedCourses.push_back(course);
}

const vector<Course*>& Progress::getCompletedCourses() const
{
    return completedCourses;
}