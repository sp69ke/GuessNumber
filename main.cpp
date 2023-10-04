// main.cpp 用来运行程序

#include "Game.h"
#include <iostream>

int main()
{
	srand(time(0));
	Game game(1, 100);
	while (1)  // 进入消息循环
	{
		game.setNum();
		if(!game.judge())
		{
			game.exitGame();
		}
	}
	return 0;
}