#include "../include/Report.h"
#include "../include/Child.h"

#include <iostream>

using namespace std;

Report::Report(Child* child, const string& periodLabel)
{
    this->child = child;
    this->periodLabel = periodLabel;

    lessonsCompleted = 0;
    coursesCompleted = 0;
    coins = 0;

    generate();
}

void Report::generate()
{
    if (child == nullptr)
    {
        return;
    }

    lessonsCompleted = child->getProgress().getCompletedLessons().size();
    coursesCompleted = child->getProgress().getCompletedCourses().size();
    coins = child->getReward().getCoins();
}

void Report::display() const
{
    if (child == nullptr)
    {
        return;
    }

    cout << "\n===== Child Report =====" << endl;
    cout << "Child: " << child->getName() << endl;
    cout << "Period: " << periodLabel << endl;
    cout << "Lessons Completed: " << lessonsCompleted << endl;
    cout << "Courses Completed: " << coursesCompleted << endl;
    cout << "Coins: " << coins << endl;
}