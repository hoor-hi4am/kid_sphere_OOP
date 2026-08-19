#include "../include/Progress.h"

Progress::Progress()
{
}

void Progress::completeLesson(Lesson* lesson)
{
    if (!isLessonCompleted(lesson))
    {
        completedLessons.push_back(lesson);
    }
}

void Progress::completeCourse(Course* course)
{
    if (!isCourseCompleted(course))
    {
        completedCourses.push_back(course);
    }
}

bool Progress::isLessonCompleted(Lesson* lesson) const
{
    for (int i = 0; i < completedLessons.size(); i++)
    {
        if (completedLessons[i] == lesson)
        {
            return true;
        }
    }

    return false;
}

bool Progress::isCourseCompleted(Course* course) const
{
    for (int i = 0; i < completedCourses.size(); i++)
    {
        if (completedCourses[i] == course)
        {
            return true;
        }
    }

    return false;
}

const vector<Lesson*>& Progress::getCompletedLessons() const
{
    return completedLessons;
}

const vector<Course*>& Progress::getCompletedCourses() const
{
    return completedCourses;
}