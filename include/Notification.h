#pragma once

#include <string>

using namespace std;

class Notification
{
private:
    string id;
    string message;
    string type;
    bool isRead = false;

public:
    Notification(string id, string message, string type)
    {
        this->id = id;
        this->message = message;
        this->type = type;
    }
    
    string getId() const;
    void markAsRead();
    bool getIsRead() const;
    string getMessage() const;
    void display() const;
};