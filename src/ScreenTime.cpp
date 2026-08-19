#include "../include/ScreenTime.h"

ScreenTime::ScreenTime(int dailyLimitMinutes)
{
    this->dailyLimitMinutes = dailyLimitMinutes;
    minutesUsedToday = 0;
}

void ScreenTime::addUsage(int minutes)
{
    if (minutes > 0)
    {
        minutesUsedToday += minutes;
    }
}

void ScreenTime::resetDaily()
{
    minutesUsedToday = 0;
}

bool ScreenTime::isLimitExceeded() const
{
    return minutesUsedToday >= dailyLimitMinutes;
}

int ScreenTime::getRemainingMinutes() const
{
    int remaining = dailyLimitMinutes - minutesUsedToday;

    if (remaining < 0)
    {
        return 0;
    }

    return remaining;
}

int ScreenTime::getDailyLimit() const
{
    return dailyLimitMinutes;
}

int ScreenTime::getMinutesUsed() const
{
    return minutesUsedToday;
}