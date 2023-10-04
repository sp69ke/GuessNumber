// Game.h ��������Game��ͳ�Ա
// Game������������Ϸ����Ϊ

#pragma once
#ifndef GAME_H
#define GAME_H

class Game
{
private:
	int m_target, m_num;
	int m_left, m_right;
public:

	int getNum();
	int getTarget();

	void setNum();
	void setTarget();
	void setLeft();
	void setRight();

	// �����ж������˻���С�ˣ����߲¶���
	// 1���ˣ�0��ȣ�-1С��
	int judge(); 
	void exitGame();
};
#endif // GAME_H