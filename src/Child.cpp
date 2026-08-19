#include "../include/Child.h"
#include "../include/Lesson.h"
#include "../include/Quiz.h"

#include <iostream>

using namespace std;

Child::Child(
    string id,
    const string& name,
    const string& email,
    const string& password
)
    : User(id, name, email, password)
{
}

void Child::enrollCourse(Course* course)
{
    enrolledCourses.push_back(course);
}

void Child::earnCoins(int coins)
{
    reward.addCoins(coins);
}

Reward& Child::getReward()
{
    return reward;
}

Progress& Child::getProgress()
{
    return progress;
}

ScreenTime& Child::getScreenTime()
{
    return screenTime;
}

HealthTracker& Child::getHealthTracker()
{
    return healthTracker;
}

const vector<Course*>& Child::getEnrolledCourses() const
{
    return enrolledCourses;
}

void Child::displayProfile() const
{
    cout << "\n===== Child Profile =====\n";
    cout << "ID: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Email: " << getEmail() << endl;

    cout << "Coins: " << reward.getCoins() << endl;

    cout << "Enrolled Courses: " << enrolledCourses.size() << endl;
}

bool Child::solveLessonQuiz(Lesson* lesson)
{
    if (lesson == nullptr)
    {
        return false;
    }

    Quiz* quiz = lesson->getQuiz();

    if (quiz == nullptr)
    {
        cout << "This lesson has no quiz." << endl;
        return false;
    }

    int score = quiz->solveQuiz();

    if (score >= quiz->getPassingScore())
    {
        cout << "\nYou completed this lesson!" << endl;

        progress.completeLesson(lesson);

        cout << "You earned 100 coins!" << endl;
        earnCoins(100);

        return true;
    }

    return false;
}