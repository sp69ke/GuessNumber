// main.cpp 用来运行程序

#include "Game.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	srand(time(0));
	Game game;

	game.setLeft();
	game.setRight();
	game.setTarget();
	cout << "生成成功。" << endl;

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