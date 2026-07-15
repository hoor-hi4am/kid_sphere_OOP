#include "../include/Quiz.h"
#include "../include/Question.h"

#include <iostream>


using namespace std;

Quiz::Quiz(
    string id,
    const string& title,
    int passingScore,
    int totalMarks
)
    : id(id),
      title(title),
      passingScore(passingScore),
      totalMarks(totalMarks)
{
}

string Quiz::getId() const
{
    return id;
}

string Quiz::getTitle() const
{
    return title;
}

int Quiz::getPassingScore() const
{
    return passingScore;
}

int Quiz::getTotalMarks() const
{
    return totalMarks;
}

const vector<Question*>& Quiz::getQuestions() const
{
    return questions;
}

void Quiz::addQuestion(Question* question)
{
    questions.push_back(question);
}

void Quiz::displayQuizInfo() const
{
    cout << "===== Quiz =====" << endl;
    cout << "ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Passing Score: " << passingScore << endl;
    cout << "Total Marks: " << totalMarks << endl;

    cout << "\nQuestions:\n";

    for (int i = 0; i < questions.size(); i++)
    {
        cout << "\nQuestion " << i + 1 << endl;
        questions[i]->displayQuestionInfo();
    }
}

int Quiz::solveQuiz() const
{
    int score = 0;

    cout << "\n===== " << title << " =====\n";

    for (int i = 0; i < questions.size(); i++)
    {
        cout << "\nQuestion " << i + 1 << endl;

        if (questions[i]->askQuestion())
        {
            cout << "Correct!\n";
            score++;
        }
        else
        {
            cout << "Wrong!\n";
        }
    }

    cout << "\nYour Score: " << score << " / " << totalMarks << endl;

    if (score >= passingScore)
    {
        cout << "Congratulations, You Passed!\n";
    }
    else
    {
        cout << "Sorry, You Failed.\n";
    }

    return score;
}
