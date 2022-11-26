#pragma once

#include <vector>
#include <iostream>

using namespace std;

class Player
{
private:

	vector<vector<char>> field = { {'o', 'o', 'o'}, {'o', 'o', 'o'}, {'o', 'o', 'o'} };

public:

	bool check_win();

	inline void field_draw();
	void play();
	void play_computer();
	void text();
	void settings();

};