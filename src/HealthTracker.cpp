#include "HealthTracker.h"
#include <iostream>

void HealthTracker::addDailyEntry(HealthEntry entry)
{
    entries.push_back(entry);
}

void HealthTracker::getWeeklySummary()
{
    double totalSleep = 0;
    int totalWater = 0;
    int totalActivity = 0;

    for (HealthEntry entry : entries)
    {
        totalSleep += entry.getSleepHours();
        totalWater += entry.getNumberOfWaterCups();
        totalActivity += entry.getActivityMinutes();
    }

    cout << "===== Weekly Health Summary =====" << endl;

    if (entries.empty())
    {
        cout << "No health data available." << endl;
        return;
    }

    cout << "Average Sleep Hours: "
         << totalSleep / entries.size() << endl;

    cout << "Average Water Cups: "
         << (double)totalWater / entries.size() << endl;

    cout << "Total Activity Minutes: "
         << totalActivity << endl;
}
