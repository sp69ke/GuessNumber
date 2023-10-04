// Game.h 用来声明Game类和成员
// Game类用来控制游戏的行为
#pragma once
#ifndef GAME_H
#define GAME_H

class Game
{
private:
	int m_target, m_num;
public:
	Game(int left, int right);

	int getNum();
	int getTarget();

	void setNum();

	// 用来判断数大了还是小了，或者猜对了
	// 1大了，0相等，-1小了
	int judge(); 
	void exitGame();
};
#endif // GAME_H