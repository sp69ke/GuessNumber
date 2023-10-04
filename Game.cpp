// ʵ��Game��

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
	cout << "��������µ�����";
	std::cin >> m_num;
}

void Game::setTarget()
{
	m_target = rand() % ((m_right - m_left + 1) + m_left);
}

void Game::setLeft()
{
	cout << "��������Сֵ��";
	cin >> m_left;
}

void Game::setRight()
{
	cout << "���������ֵ��";
	cin >> m_right;
}

int Game::judge()
{
	if (m_target < m_num)
	{
		cout << "����" << endl;
		return 1;
	}
	else if (m_target > m_num)
	{
		cout << "С��" << endl;
		return -1;
	}
	else
	{
		cout << "�¶���" << endl;
		return 0;
	}
}

void Game::exitGame()
{
	system("pause");
	exit(0);
}
