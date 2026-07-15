#pragma once

class Course;

class CourseProgress
{
private:
    Course* course;
    int completedLessons;
    int completedQuizzes;
    double averageScore;
    bool completed;

public:
    CourseProgress(Course* course);

    void completeLesson();

    void completeQuiz(double score);

    double getAverageScore() const;

    bool isCompleted() const;
};