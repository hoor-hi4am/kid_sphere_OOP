#include "../include/KidSphereSystem.h"

#include <iostream>

using namespace std;

void KidSphereSystem::addChild(Child* child)
{
    children.push_back(child);
}

void KidSphereSystem::addParent(Parent* parent)
{
    parents.push_back(parent);
}

void KidSphereSystem::addTeacher(Teacher* teacher)
{
    teachers.push_back(teacher);
}

void KidSphereSystem::addCourse(Course* course)
{
    courses.push_back(course);
}

const vector<Child*>& KidSphereSystem::getChildren() const
{
    return children;
}

const vector<Parent*>& KidSphereSystem::getParents() const
{
    return parents;
}

const vector<Teacher*>& KidSphereSystem::getTeachers() const
{
    return teachers;
}

const vector<Course*>& KidSphereSystem::getCourses() const
{
    return courses;
}

void KidSphereSystem::displaySystemInfo() const
{
    cout << "========== KidSphere System ==========\n";

    cout << "\nTeachers:\n";
    for (int i = 0; i < teachers.size(); i++)
    {
        teachers[i]->displayProfile();
        cout << endl;
    }

    cout << "\nParents:\n";
    for (int i = 0; i < parents.size(); i++)
    {
        parents[i]->displayProfile();
        cout << endl;
    }

    cout << "\nChildren:\n";
    for (int i = 0; i < children.size(); i++)
    {
        children[i]->displayProfile();
        cout << endl;
    }

    cout << "\nCourses:\n";
    for (int i = 0; i < courses.size(); i++)
    {
        courses[i]->displayCourseInfo();
        cout << endl;
    }

    cout << "======================================" << endl;
}