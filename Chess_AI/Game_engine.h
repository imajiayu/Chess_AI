#ifndef _GAME_ENGINE_
#define _GAME_ENGINE_
#pragma once
#include"Chess_board.h"

class Game_engine
{
public:
	Chess_board chess_board;
	int current_player;
	int peace_round;
	int total_round;
	int engine_status;
public:
	Game_engine();
	void init_engine();
	void ucci_comm(); 
	void loop();

};


#endif // !_GAME_ENGINE_


