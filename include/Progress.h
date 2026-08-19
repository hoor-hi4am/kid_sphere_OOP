#pragma once

#include <vector>

class Course;
class Lesson;

using namespace std;

class Progress
{
private:
    vector<Lesson*> completedLessons;
    vector<Course*> completedCourses;

public:
    Progress();

    void completeLesson(Lesson* lesson);
    void completeCourse(Course* course);

    bool isLessonCompleted(Lesson* lesson) const;
    bool isCourseCompleted(Course* course) const;

    const vector<Lesson*>& getCompletedLessons() const;
    const vector<Course*>& getCompletedCourses() const;
};