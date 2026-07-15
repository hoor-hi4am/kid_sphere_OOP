#pragma once

#include <vector>
#include "Badge.h"

using namespace std;

class Reward
{
private:
    int coins;
    vector<Badge> badges;

public:
    Reward();

    int getCoins() const;

    void addCoins(int amount);

    void addBadge(Badge badge);

const vector<Badge>& getBadges() const;
};