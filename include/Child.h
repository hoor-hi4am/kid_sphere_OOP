#pragma once

#include "User.h"
#include "Reward.h"
#include "Progress.h"
#include "Course.h"

#include <vector>

using namespace std;

class Child : public User
{
private:
    Reward reward;
    Progress progress;
    vector<Course*> enrolledCourses;

public:
    Child(
        string id,
        const string& name,
        const string& email,
        const string& password
    );

    void enrollCourse(Course* course);

    void earnCoins(int coins);

    Reward& getReward();

    Progress& getProgress();

    const vector<Course*>& getEnrolledCourses() const;

    void displayProfile() const override;

    bool solveLessonQuiz(Lesson* lesson);
};