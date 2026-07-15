#include <iostream>

#include "../include/Child.h"
#include "../include/Teacher.h"
#include "../include/Course.h"
#include "../include/Parent.h"
#include "../include/KidSphereSystem.h"
#include "../include/Lesson.h"
#include "../include/Quiz.h"
#include "../include/Question.h"

using namespace std;

int main()
{
    KidSphereSystem system;

    Teacher teacher(
        "T001",
        "Ahmed",
        "ahmed@gmail.com",
        "1234");

    Child child(
        "CH001",
        "Hoor",
        "hoor@gmail.com",
        "1234");

    Parent parent(
        "P001",
        "Mona",
        "mona@gmail.com",
        "1234");

    Course cppCourse(
        "C001",
        "C++ Fundamentals",
        "Learn C++ from scratch",
        &teacher,
        "Programming",
        10,
        100,
        false);

    Lesson lesson1(
        "L001",
        "Introduction to C++",
        "Introduction to the C++ language",
        15);

    Lesson lesson2(
        "L002",
        "Variables",
        "Learn how to declare and use variables",
        20);

    Quiz quiz(
        "QZ001",
        "C++ Basics Quiz",
        1,
        2);

    Question question1(
        "Q001",
        "What is C++?",
        0);

    question1.addOption("Programming Language");
    question1.addOption("Database");
    question1.addOption("Browser");
    question1.addOption("Operating System");

    Question question2(
        "Q002",
        "Which symbol ends a statement in C++?",
        2);

    question2.addOption(",");
    question2.addOption(":");
    question2.addOption(";");
    question2.addOption(".");

    quiz.addQuestion(&question1);
    quiz.addQuestion(&question2);

    lesson2.setQuiz(&quiz);

    cppCourse.addLesson(&lesson1);
    cppCourse.addLesson(&lesson2);

    system.addTeacher(&teacher);
    system.addChild(&child);
    system.addParent(&parent);
    system.addCourse(&cppCourse);

    parent.addChild(&child);

    child.enrollCourse(&cppCourse);
    child.earnCoins(50);

    system.displaySystemInfo();

    cout << "\n=========================\n";
    cout << "Child starts solving quiz\n";
    cout << "=========================\n";

    child.solveLessonQuiz(&lesson2);

    cout << "\n=========================\n";
    cout << "Child Profile After Quiz\n";
    cout << "=========================\n";

    child.displayProfile();

    cout << "\n=========================\n";
    cout << "Course Information\n";
    cout << "=========================\n";

    cppCourse.displayCourseInfo();

    return 0;
}