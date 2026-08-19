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

void Parent::viewChildScreenTime(Child* child) const
{
    if (child == nullptr)
    {
        cout << "Invalid child." << endl;
        return;
    }

    cout << "\n===== Child Screen Time =====" << endl;
    cout << "Child: " << child->getName() << endl;

    cout << "Daily Limit: "
         << child->getScreenTime().getDailyLimit()
         << " minutes" << endl;

    cout << "Used Today: "
         << child->getScreenTime().getMinutesUsed()
         << " minutes" << endl;

    cout << "Remaining: "
         << child->getScreenTime().getRemainingMinutes()
         << " minutes" << endl;

    if (child->getScreenTime().isLimitExceeded())
    {
        cout << "Status: Limit Exceeded!" << endl;
    }
    else
    {
        cout << "Status: Within Limit" << endl;
    }
}
