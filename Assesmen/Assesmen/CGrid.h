
#ifndef CGRID_H
#define CGRID_H
#include "Player.h"

using namespace std;

class Cell
{
//public class for player
public:
	//Constructor for Cell
	Cell();
	//Deconstructor for Cell
	~Cell();

	//Identifies current position of player
	Cell dCell(int m_x,int m_y);

	int GetPosX();
	int GetPosY();

	bool GetAlive();
	
	void SetPos(int a_x, int a_y);
	void sAlive(bool s_a);
	void Mine(int a_x, int a_y);
	void Theif(Player &a_rfplayer, int a_x, int a_y);
	void Wife(Player &a_rfplayer, int a_x, int a_y);

//private class for player
private:
	bool m_sLife;
	int m_x;
	int m_y;

};
#endif CGRID_H
