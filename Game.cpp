#include "Game.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Game::Game(int left, int right)
{
	m_target = rand() % ((right - left + 1) + left);
	m_num = -1;
}

int Game::getNum()
{
	return m_num;
}

int Game::getTarget()
{
	return m_target;
}

void Game::setNum()
{
	std::cin >> m_num;
}

int Game::judge()
{
	if (m_target < m_num)
	{
		cout << "大了" << endl;
		return 1;
	}
	else if (m_target > m_num)
	{
		cout << "小了" << endl;
		return -1;
	}
	else
	{
		cout << "猜对了" << endl;
		return 0;
	}
}

void Game::exitGame()
{
	exit(0);
}
