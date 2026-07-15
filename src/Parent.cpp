#include <iostream>
#include "Parent.h"

using namespace std;

Parent::Parent(
    const string& id,
    const string& name,
    const string& email,
    const string& password
)
    : User(id, name, email, password)
{
}

void Parent::addChild(Child *child)
{
    children.push_back(child);
}

const vector<Child *> &Parent::getChildren() const
{
    return children;
}

void Parent::displayProfile() const
{
    cout << "===== Parent =====\n";
    cout << "ID: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Email: " << getEmail() << endl;

    cout << "\nChildren: " << children.size() << endl;
    for(Child* child : children)
    {
        cout << "- " << child->getName() << endl;
    }

}
