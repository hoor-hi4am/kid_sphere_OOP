#include "../include/Lesson.h"
#include "../include/Quiz.h"

#include <iostream>

using namespace std;

Lesson::Lesson(
    string id,
    const string &title,
    const string &description,
    int duration)
    : id(id),
      title(title),
      description(description),
      duration(duration),
      quiz(nullptr)
{
}

string Lesson::getId() const
{
    return id;
}

string Lesson::getTitle() const
{
    return title;
}

string Lesson::getDescription() const
{
    return description;
}

int Lesson::getDuration() const
{
    return duration;
}

Quiz *Lesson::getQuiz() const
{
    return quiz;
}

void Lesson::setQuiz(Quiz *quiz)
{
    this->quiz = quiz;
}

void Lesson::displayLessonInfo() const
{
    cout << "===== Lesson =====" << endl;
    cout << "ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Description: " << description << endl;
    cout << "Duration: " << duration << " minutes" << endl;

    cout << "\nQuiz:\n";

    if (quiz != nullptr)
    {
        cout << "\nQuiz: Available" << endl;
    }
    else
    {
        cout << "\nQuiz: No Quiz" << endl;
    }
}