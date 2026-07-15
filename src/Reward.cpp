#include "../include/Reward.h"

Reward::Reward()
{
    coins = 0;
}

int Reward::getCoins() const
{
    return coins;
}

void Reward::addCoins(int amount)
{
    coins += amount;
}

void Reward::addBadge(Badge badge)
{
    badges.push_back(badge);
}

const vector<Badge>& Reward::getBadges() const
{
    return badges;
}   