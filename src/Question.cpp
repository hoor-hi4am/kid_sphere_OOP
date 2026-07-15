#include "../include/Question.h"

#include <iostream>

using namespace std;

Question::Question(
    string id,
    const string& text,
    int correctAnswer
)
    : id(id),
      text(text),
      correctAnswer(correctAnswer)
{
}

string Question::getId() const
{
    return id;
}

string Question::getText() const
{
    return text;
}

int Question::getCorrectAnswer() const
{
    return correctAnswer;
}

const vector<string>& Question::getOptions() const
{
    return options;
}

void Question::addOption(const string& option)
{
    options.push_back(option);
}

void Question::displayQuestionInfo() const
{
    cout << "===== Question =====" << endl;
    cout << "ID: " << id << endl;
    cout << "Question: " << text << endl;

    cout << "Options:" << endl;

    for (int i = 0; i < options.size(); i++)
    {
        cout << i + 1 << ". " << options[i] << endl;
    }

    cout << "Correct Answer: " << correctAnswer + 1 << endl;
}
bool Question::askQuestion() const
{
    cout << text << endl;

    for (int i = 0; i < options.size(); i++)
    {
        cout << i + 1 << ". " << options[i] << endl;
    }

    int answer;

    cout << "Your Answer: ";
    cin >> answer;

    return (answer - 1) == correctAnswer;
}