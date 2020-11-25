#ifndef SNAKE_SPRITE_H_
#define SNAKE_SPRITE_H_

#include "types.h"
#include "weapon.h"
#include "adt.h"

/**
 *
 */
typedef struct {
  int x, y;
  Direction direction;
} PositionBuffer;

/**
 * 精灵（人物）数据结构
 */
typedef struct {
  int x, y, hp, totoalHp;   // 位置，血量，血量上限
  Weapon* weapon;           // 武器
  Animation* ani;           // TODO
  Direction face;           // TODO
  Direction direction;      // TODO
  PositionBuffer buffer[POSITION_BUFFER_SIZE];// TODO
  int bufferSize;           // TODO
  int lastAttack;           // todo
  double dropRate;          // todo
} Sprite;

void changeSpriteDirection(LinkNode*, Direction);
void initSprite(Sprite* model, Sprite* self, int x, int y);
Sprite* createSprite(Sprite* model, int x, int y);

#endif
