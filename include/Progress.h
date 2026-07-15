#pragma once

#include <vector>

class Course;

using namespace std;

class Progress
{
private:
    vector<Course*> completedCourses;

public:
    Progress();

    void completeCourse(Course* course);

    const vector<Course*>& getCompletedCourses() const;
};