#include "HealthEntry.h"

HealthEntry::HealthEntry(double sleepHours, int numberOfWaterCups, int activityMinutes)
{
    this->sleepHours = sleepHours;
    this->numberOfWaterCups = numberOfWaterCups;
    this->activityMinutes = activityMinutes;
}

double HealthEntry::getSleepHours()
{
    return sleepHours;
}

int HealthEntry::getNumberOfWaterCups()
{
    return numberOfWaterCups;
}

int HealthEntry::getActivityMinutes()
{
    return activityMinutes;
}