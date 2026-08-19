#pragma once

#include "HealthEntry.h"
#include <vector>

using namespace std;

class HealthTracker
{
private:
    vector<HealthEntry> entries;

public:
    void addDailyEntry(HealthEntry entry);
    void getWeeklySummary();

};