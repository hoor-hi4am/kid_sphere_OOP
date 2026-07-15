#pragma once

#include <string>

using namespace std;

class Quiz;

class Lesson
{
private:
    string id;
    string title;
    string description;
    int duration;

    Quiz* quiz;

public:
    // Constructor
    Lesson(
        string id,
        const string& title,
        const string& description,
        int duration
    );

    // Getters
    string getId() const;

    string getTitle() const;

    string getDescription() const;

    int getDuration() const;

    Quiz* getQuiz() const;

    // Functions
    void setQuiz(Quiz* quiz);

    // Display
    void displayLessonInfo() const;
};