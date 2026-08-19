#pragma once

#include <string>

using namespace std;

class Child;

class Report
{
private:
    Child* child;
    string periodLabel;
    int lessonsCompleted;
    int coursesCompleted;
    int coins;

public:
    Report(Child* child, const string& periodLabel);

    void generate();
    void display() const;
};