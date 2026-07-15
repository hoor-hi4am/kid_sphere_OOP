#pragma once

#include "User.h"

class Teacher : public User
{
public:
    Teacher(
        string id,
        const string& name,
        const string& email,
        const string& password
    );

    void displayProfile() const override;
};