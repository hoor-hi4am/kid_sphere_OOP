#pragma once

#include <string>
#include <vector>

using namespace std;

// Forward Declarations
class Teacher;
class Lesson;
class Quiz;

class Course
{
private:
    string id;
    string title;
    string description;

    Teacher* instructor;

    vector<Lesson*> lessons;
    vector<Quiz*> quizzes;

    string category;
    int minimumAge;
    int rewardCoins;
    bool isPremium;

public:
    // Constructor
    Course(
        string id,
        const string& title,
        const string& description,
        Teacher* instructor,
        const string& category,
        int minimumAge,
        int rewardCoins,
        bool isPremium
    );

    // Getters
    string getId() const;

    string getTitle() const;

    string getDescription() const;

    Teacher* getInstructor() const;

    string getCategory() const;

    int getMinimumAge() const;

    int getRewardCoins() const;

    bool isPremiumCourse() const;

    const vector<Lesson*>& getLessons() const;

    const vector<Quiz*>& getQuizzes() const;

    // Functions
    void addLesson(Lesson* lesson);

    void addQuiz(Quiz* quiz);

    void displayCourseInfo() const;
};