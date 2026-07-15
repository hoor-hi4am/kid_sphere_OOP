#pragma once

#include <string>

using namespace std;

class Badge
{
private:
    string name;

public:
    Badge(string name);

    string getName() const;
};