#include "../include/User.h"
#include <iostream>

using namespace std;

User::User(string id, string name, string email, string password)
{
    this->id = id;
    this->name = name;
    this->email = email;
    this->password = password;
}

User::~User()
{
}

string User::getId() const
{
    return id;
}

string User::getName() const
{
    return name;
}

string User::getEmail() const
{
    return email;
}

string User::getPassword() const
{
    return password;
}

void User::setName(string name)
{
    this->name = name;
}

void User::setEmail(string email)
{
    this->email = email;
}

void User::setPassword(string password)
{
    this->password = password;
}

void User::addNotification(Notification notification)
{
    notifications.push_back(notification);
}

void User::markNotificationAsRead(string notificationId)
{
    for (Notification& notification : notifications)
    {
        if (notification.getId() == notificationId)
        {
            notification.markAsRead();
            return;
        }
    }
}

void User::displayNotifications() const
{
    cout << "===== Notifications =====" << endl;

    for (const Notification& notification : notifications)
    {
        notification.display();
        cout << endl;
    }
}

void User::displayProfile() const
{
    cout << "===== User =====" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
}