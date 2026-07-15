#include "../include/Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher(
    string id,
    const string& name,
    const string& email,
    const string& password
)
    : User(id, name, email, password)
{
}

void Teacher::displayProfile() const
{
    cout << "===== Teacher =====\n";
    cout << "ID: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Email: " << getEmail() << endl;
}