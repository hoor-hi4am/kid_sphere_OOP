#pragma once

#include <string>
#include <vector>
#include "Notification.h"

using namespace std;

class User
{
protected:
    string id;
    string name;
    string email;
    string password;

private:
    vector<Notification> notifications;

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

    void addNotification(Notification notification);
    void displayNotifications() const;
    void markNotificationAsRead(string notificationId);

    virtual void displayProfile() const;
};