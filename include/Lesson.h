#pragma once

#include <string>

using namespace std;

class Quiz;
class Course;

class Lesson
{
private:
    string id;
    string title;
    string description;
    int duration;

    Quiz *quiz;
    Course *course;

public:
    // Constructor
    Lesson(
        string id,
        const string &title,
        const string &description,
        int duration);

    // Getters
    string getId() const;

    string getTitle() const;

    string getDescription() const;

    int getDuration() const;

    Quiz *getQuiz() const;
    Course *getCourse() const;

    // Functions
    void setQuiz(Quiz *quiz);
    void setCourse(Course *course);
    

    // Display
    void displayLessonInfo() const;
};