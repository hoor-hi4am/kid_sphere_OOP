#pragma once

#include <string>
#include <vector>

using namespace std;

class Question
{
private:
    string id;
    string text;

    vector<string> options;

    int correctAnswer;

public:
    // Constructor
    Question(
        string id,
        const string& text,
        int correctAnswer
    );

    // Getters
    string getId() const;

    string getText() const;

    int getCorrectAnswer() const;

    const vector<string>& getOptions() const;

    // Functions
    void addOption(const string& option);

    // Display
    void displayQuestionInfo() const;
    bool askQuestion() const;
};