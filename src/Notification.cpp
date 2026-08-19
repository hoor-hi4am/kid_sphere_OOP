#include "Notification.h"
#include <iostream>

using namespace std;

string Notification::getId() const
{
    return id;
}

void Notification::markAsRead()
{
    isRead = true;
}

bool Notification::getIsRead() const
{
    return isRead;
}

string Notification::getMessage() const
{
    return message;
}

void Notification::display() const
{
    cout << "New Notification" << endl;
    cout << "ID: " << id << endl;
    cout << "Message: " << message << endl;
    cout << "Type: " << type << endl;
    cout << "Status: " << (isRead ? "Read" : "Unread") << endl;
}