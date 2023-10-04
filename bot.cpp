// Bot.cpp  µœ÷Bot¿‡

#include "Bot.h"
#include <iostream>
Bot::Bot(int left, int right)
{
	m_left = left;
	m_right = right;
}

int Bot::RandomGuess(int left, int right)
{
	return rand() % ((right - left + 1) + left);
}

int Bot::binaryGuess(int cur)
{
	int mid = (m_left + m_right) / 2;
	if (cur == 1)
	{
		m_right = mid;
	}
	if (cur == -1)
	{
		m_left = mid;
	}
}
