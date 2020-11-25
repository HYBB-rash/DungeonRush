#ifndef SNAKE_WEAPON_H_
#define SNAKE_WEAPON_H_

#include "types.h"

#define WEAPONS_SIZE 128

/**
 * 武器：剑
 */
#define WEAPON_SWORD 0

/**
 * 武器：魔兽之牙
 */
#define WEAPON_MONSTER_CLAW 1

/**
 * 武器（魔法）：火球
 */
#define WEAPON_FIREBALL 2

/**
 * 武器（魔法）：雷电
 */
#define WEAPON_THUNDER 3

/**
 * 武器（魔法）：弓箭
 */
#define WEAPON_ARROW 4

/**
 * 武器：魔兽之牙2
 */
#define WEAPON_MONSTER_CLAW2 5

/**
 * 武器：飞斧
 */
#define WEAPON_THROW_AXE 6

/**
 * 武器：飞斧(群攻)
 */
#define WEAPON_MANY_AXES 7

/**
 * 武器：污泥（带减速效果）
 */
#define WEAPON_SOLID 8

/**
 * 武器：污泥（绿色）
 */
#define WEAPON_SOLID_GREEN 9

/**
 * 武器：冰锥
 */
#define WEAPON_ICEPICK 10

/**
 * 武器：火剑
 */
#define WEAPON_FIRE_SWORD 11

/**
 * 武器：冰剑
 */
#define WEAPON_ICE_SWORD 12

/**
 * 武器：圣剑
 */
#define WEAPON_HOLY_SWORD 13

/**
 * 武器：魔法球
 */
#define WEAPON_PURPLE_BALL 14

/**
 * 武器：魔法球群
 */
#define WEAPON_PURPLE_STAFF 15

/**
 * 武器：闪电群
 */
#define WEAPON_THUNDER_STAFF 16

/**
 * todo
 */
#define WEAPON_SOLID_CLAW 17

/**
 * 武器：强力弓
 */
#define WEAPON_POWERFUL_BOW 18

/**
 * 枚举类型：武器种类
 */
typedef enum {
    WEAPON_SWORD_POINT,       // 单体剑（一次攻击一个人）
    WEAPON_SWORD_RANGE,       // 狂战斧（一次攻击多人）
    WEAPON_GUN_RANGE,         // 溅射枪（一次攻击多人）
    WEAPON_GUN_POINT,         // 单体枪（一次攻击一人）
    WEAPON_GUN_POINT_MULTI,   // 连发溅射枪（多次攻击，每次攻击都为范围攻击）
} WeaponType;

/**
 * 武器的附带效果（疑似是减速的速率和时间）todo 减速效果
 */
typedef struct {
  double chance;    // 状态改变 todo
  int duration;     // 持续时间
} WeaponBuff;

/**
 * 武器数据类型
 */
typedef struct {
  WeaponType wp;

  int shootRange;   // 武器攻击范围
  int effectRange;  //武器攻击的影响范围
  int damage;       // 武器伤害
  int gap;          // 攻击间隔时间
  int bulletSpeed;  // 射速

  Animation *birthAni, *deathAni, *flyAni;  // 武器的动画效果
  int birthAudio, deathAudio;               // 武器的音效

  WeaponBuff effects[BUFF_END];// 武器效果
} Weapon;

void initWeapons();

#endif
