// Bot.h ×Ô¶¯²ÂÊý

#pragma once
#ifndef BOT_H
#define BOT_H

class Bot
{
private:
	int m_left, m_right; // left and right in binaryGuess
public:
	Bot(int left, int right);

	int RandomGuess(int left, int right);
	int binaryGuess(int cur);
};

#endif // BOT_H