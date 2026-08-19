#pragma once

class ScreenTime
{
private:
    int dailyLimitMinutes;
    int minutesUsedToday;

public:
    ScreenTime(int dailyLimitMinutes = 60);

    void addUsage(int minutes);
    void resetDaily();

    bool isLimitExceeded() const;

    int getRemainingMinutes() const;
    int getDailyLimit() const;
    int getMinutesUsed() const;
};