#pragma once

#include "Child.h"
#include "Parent.h"
#include "Teacher.h"
#include "Course.h"

#include <vector>

using namespace std;

class KidSphereSystem
{
private:
    vector<Child*> children;
    vector<Parent*> parents;
    vector<Teacher*> teachers;
    vector<Course*> courses;

public:
    // Add Functions
    void addChild(Child* child);

    void addParent(Parent* parent);

    void addTeacher(Teacher* teacher);

    void addCourse(Course* course);

    // Getters
    const vector<Child*>& getChildren() const;

    const vector<Parent*>& getParents() const;

    const vector<Teacher*>& getTeachers() const;

    const vector<Course*>& getCourses() const;

    // Display
    void displaySystemInfo() const;
};