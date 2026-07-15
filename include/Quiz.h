#pragma once

#include <string>
#include <vector>

using namespace std;

class Question;

class Quiz
{
private:
    string id;
    string title;
    int passingScore;
    int totalMarks;

    vector<Question*> questions;

public:
    // Constructor
    Quiz(
        string id,
        const string& title,
        int passingScore,
        int totalMarks
    );

    // Getters
    string getId() const;
    string getTitle() const;
    int getPassingScore() const;
    int getTotalMarks() const;

    const vector<Question*>& getQuestions() const;

    // Functions
    void addQuestion(Question* question);

    void displayQuizInfo() const;
    
    int solveQuiz() const;
};