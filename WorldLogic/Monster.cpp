//
// Created by Chloé Belguermi on 19/11/2017.
//

#include "Monster.h"

#define FIGHT_BTN_PATH "./res/FightBtn.png"

Monster::Monster(int type, bool isBoss, const char * name, const char * description, const char * entityImage,
                 unsigned int attack, unsigned int defense, unsigned int life) :
        Room(type, name, description, entityImage), _attack(attack), _defense(defense), _life(life)
{
    _isBoss = isBoss;
    _bigCard = new BigCard(true, FIGHT_BTN_PATH, ENTITY_PATH, getSkillsString(), name, description);
}

bool Monster::isBoss() const
{
    return _isBoss;
}

const char * Monster::getSkillsString()
{
    auto * skills = new char(30);
    sprintf(skills, "ATT %d - DEF %d - PV %d", _attack, _defense, _life);
    return skills;
}