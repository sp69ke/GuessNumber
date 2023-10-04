// 实现Game类

#include "Game.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

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
	cout << "请输入你猜的数：";
	std::cin >> m_num;
}

void Game::setTarget()
{
	m_target = rand() % ((m_right - m_left + 1) + m_left);
}

void Game::setLeft()
{
	cout << "请输入最小值：";
	cin >> m_left;
}

void Game::setRight()
{
	cout << "请输入最大值：";
	cin >> m_right;
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
	system("pause");
	exit(0);
}
