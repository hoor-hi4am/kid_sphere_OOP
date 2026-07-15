#include "../include/Badge.h"

Badge::Badge(string name)
{
    this->name = name;
}

string Badge::getName() const
{
    return name;
}