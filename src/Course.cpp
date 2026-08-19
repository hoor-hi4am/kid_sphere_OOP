#include "../include/Course.h"
#include "../include/Lesson.h"

#include <iostream>

using namespace std;

Course::Course(
    string id,
    const string &title,
    const string &description,
    Teacher *instructor,
    const string &category,
    int minimumAge,
    int rewardCoins,
    bool isPremium)
    : id(id),
      title(title),
      description(description),
      instructor(instructor),
      category(category),
      minimumAge(minimumAge),
      rewardCoins(rewardCoins),
      isPremium(isPremium)
{
}

string Course::getId() const
{
    return id;
}

string Course::getTitle() const
{
    return title;
}

string Course::getDescription() const
{
    return description;
}

Teacher *Course::getInstructor() const
{
    return instructor;
}

string Course::getCategory() const
{
    return category;
}

int Course::getMinimumAge() const
{
    return minimumAge;
}

int Course::getRewardCoins() const
{
    return rewardCoins;
}

bool Course::isPremiumCourse() const
{
    return isPremium;
}

const vector<Lesson *> &Course::getLessons() const
{
    return lessons;
}

const vector<Quiz *> &Course::getQuizzes() const
{
    return quizzes;
}

void Course::addLesson(Lesson* lesson)
{
    lessons.push_back(lesson);
    lesson->setCourse(this);
}

void Course::addQuiz(Quiz *quiz)
{
    quizzes.push_back(quiz);
}

void Course::displayCourseInfo() const
{
    cout << "========== Course ==========\n";
    cout << "ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Description: " << description << endl;
    cout << "Category: " << category << endl;
    cout << "Minimum Age: " << minimumAge << endl;
    cout << "Reward Coins: " << rewardCoins << endl;
    cout << "Premium: " << (isPremium ? "Yes" : "No") << endl;
    cout << "Lessons: " << lessons.size() << endl;
    cout << "Quizzes: " << quizzes.size() << endl;
    cout << "\nLessons:\n";

    for (int i = 0; i < lessons.size(); i++)
    {
        cout << "Lesson " << i + 1 << ":" << endl;
        lessons[i]->displayLessonInfo();
        cout << endl;
    }
}