// Game.h ��������Game��ͳ�Ա
// Game������������Ϸ����Ϊ
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

	// �����ж������˻���С�ˣ����߲¶���
	// 1���ˣ�0��ȣ�-1С��
	int judge(); 
	void exitGame();
};
#endif // GAME_H