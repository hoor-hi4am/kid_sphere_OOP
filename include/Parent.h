#pragma once

#include "User.h"
#include "Child.h"
#include <vector>

class Parent : public User{
private:
    vector<Child*> children;
public:
    Parent(
        const string& id,
        const string& name,
        const string& email,
        const string& password
    );
    void addChild(Child* child);
    const vector<Child*>& getChildren() const;
    void displayProfile() const override;
};