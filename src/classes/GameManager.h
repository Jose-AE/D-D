#pragma once

#include "Dungeon.h"
#include "Player.h"

enum GameState {
   D20,
   D10_ENEMY,
   D10_PLAYER,
   D8,
   DEAD,
   WIN,
};

class GameManager {
  private:
   static Player player;
   static Dungeon* activeDungeon;
   static LinkedList<Dungeon> dungeonList;
   static GameState gameState;

  public:
   static void startNewGame();

   static Dungeon getDungeonAtIndex(int index);
   static void generateMap();

   static int moveToRandomDungeon();
   static int playerAttack();
   static int enemyAttack();
   static int recoverPlayerLP();

   static Dungeon* getActiveDungeon();

   static void setGameState(GameState state);

   static GameState getGameState();

   static int getPlayerHp();
   static int getPlayerLp();
};
