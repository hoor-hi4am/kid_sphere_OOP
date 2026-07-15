#pragma once

#include <string>

using namespace std;

class User
{
protected:
    string id;
    string name;
    string email;
    string password;

public:
    User(string id, string name, string email, string password);

    virtual ~User();

    string getId() const;
    string getName() const;
    string getEmail() const;
    string getPassword() const;

    void setName(string name);
    void setEmail(string email);
    void setPassword(string password);

    virtual void displayProfile() const;
};