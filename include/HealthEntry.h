#pragma once

class HealthEntry
{
private:
    double sleepHours;
    int numberOfWaterCups;
    int activityMinutes;

public:
    HealthEntry(double sleepHours, int numberOfWaterCups, int activityMinutes);

    double getSleepHours();
    int getNumberOfWaterCups();
    int getActivityMinutes();
};