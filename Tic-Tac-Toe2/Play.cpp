#include "Play.h"

#include <iostream>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

HANDLE hConsole;

bool Player::check_win() { //функция проверки выигрыша

	if (field[0][0] == 'X' and
		field[0][1] == 'X' and
		field[0][2] == 'X') {
		cout << "Крестик победил!" << endl;
		return true;
	}

	if (field[1][0] == 'X' and
		field[1][1] == 'X' and
		field[1][2] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[2][0] == 'X' and
		field[2][1] == 'X' and
		field[2][2] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][0] == 'X' and
		field[1][0] == 'X' and
		field[2][0] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][1] == 'X' and
		field[1][1] == 'X' and
		field[2][1] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][2] == 'X' and
		field[1][2] == 'X' and
		field[2][2] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][0] == 'X' and
		field[1][1] == 'X' and
		field[2][2] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][2] == 'X' and
		field[1][1] == 'X' and
		field[2][0] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][0] == 'O' and
		field[0][1] == 'O' and
		field[0][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[1][0] == 'O' and
		field[1][1] == 'O' and
		field[1][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[2][0] == 'O' and
		field[2][1] == 'O' and
		field[2][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][0] == 'O' and
		field[1][0] == 'O' and
		field[2][0] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][1] == 'O' and
		field[1][1] == 'O' and
		field[2][1] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][2] == 'O' and
		field[1][2] == 'O' and
		field[2][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][0] == 'O' and
		field[1][1] == 'O' and
		field[2][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][2] == 'O' and
		field[1][1] == 'O' and
		field[2][0] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}
	else return false;
}

void Player::field_draw() { //функция отрисовки поля

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++)
		{
			cout << field[row][col] << "  ";
		}
		cout << endl;
	}
}

void Player::play()
{
	int pos;

	field_draw();
	for (int i = 0; i < 9; i++) {
		if (i % 2 == 0) {
			while (true) {
				cout << endl;
				cout << "Ходит крестик:\n " << endl;
				cout << endl;
				cout << "Выберите точку (1-9): ";
				cin >> pos;

				if (pos == 1) {
					if (field[0][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][0] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 2) {
					if (field[0][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][1] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 3) {
					if (field[0][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][2] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 4) {
					if (field[1][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][0] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 5) {
					if (field[1][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][1] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 6) {
					if (field[1][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][2] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 7) {
					if (field[2][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][0] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 8) {
					if (field[2][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][1] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 9) {
					if (field[2][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][2] = 'X';
						cout << endl;
						field_draw();
					}
				}
				break;
			}
		}
		else
		{
			while (true) {
				cout << "Ходит нолик: " << endl;
				cout << endl;
				cout << "Введите точку (1-9): ";
				cin >> pos;

				if (pos == 1) {
					if (field[0][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][0] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 2) {
					if (field[0][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][1] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 3) {
					if (field[0][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][2] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 4) {
					if (field[1][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][0] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 5) {
					if (field[1][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][1] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 6) {
					if (field[1][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][2] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 7) {
					if (field[2][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][0] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 8) {
					if (field[2][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][1] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 9) {
					if (field[2][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][2] = 'O';
						cout << endl;
						field_draw();
					}
				}
				break;
			}
		}
		if (check_win()) break;
		if (i >= 8) {
			if (check_win() == false) {
				cout << endl;
				cout << "Ничья" << endl;
				break;
			}
		}
		else continue;
	}
}

void Player::play_computer()
{
	int pos;

	field_draw();

	for (int i = 0; i < field.size(); i++)
	{
		if (i % 2 == 0)
		{
			while (true) {
				cout << endl;
				cout << "Ходит крестик:\n" << endl;
				cout << endl;
				cout << "Выберите точку (1-9): ";
				cin >> pos;

				if (pos == 1) {
					if (field[0][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][0] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 2) {
					if (field[0][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][1] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 3) {
					if (field[0][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][2] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 4) {
					if (field[1][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][0] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 5) {
					if (field[1][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][1] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 6) {
					if (field[1][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][2] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 7) {
					if (field[2][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][0] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 8) {
					if (field[2][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][1] = 'X';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 9) {
					if (field[2][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][2] = 'X';
						cout << endl;
						field_draw();
					}
				}
				break;
			}
		}
		else
		{
			cout << "Ходит компьютер (нолик):" << endl;
			while (true)
			{
				Sleep(250);

				pos = rand() % 10;

				if (pos == 1) {
					if (field[0][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][0] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 2) {
					if (field[0][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][1] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 3) {
					if (field[0][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[0][2] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 4) {
					if (field[1][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][0] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 5) {
					if (field[1][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][1] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 6) {
					if (field[1][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[1][2] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 7) {
					if (field[2][0] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][0] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 8) {
					if (field[2][1] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][1] = 'O';
						cout << endl;
						field_draw();
					}
				}
				if (pos == 9) {
					if (field[2][2] != 'o') {
						cout << "Эта ячейка уже занята!\n" << endl;
						continue;
					}
					else {
						field[2][2] = 'O';
						cout << endl;
						field_draw();
					}
				}
				break;
			}
		}
		if (check_win()) break;
		if (i >= 8) {
			if (check_win() == false) {
				cout << endl;
				cout << "Ничья" << endl;
				break;
			}
		}
		else continue;
	}
}

void Player::settings()
{
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	short set;

	system("cls");
	cout << "Настройки цвета" << endl;
	cout << "1) Красный" << endl;
	cout << "2) Желтый" << endl;
	cout << "3) Зеленый" << endl;
	cout << "4) Синий" << endl;
	cout << "5) Розовый\n" << endl;

	cout << ("> ");
	cin >> set;
	cout << endl;

	switch (set)
	{
	case 1:

		SetConsoleTextAttribute(hConsole, 4);
		cout << "Установлен красный цвет\n!" << endl;
		Sleep(1000);
		system("cls");
		text();
		break;

	case 2:

		SetConsoleTextAttribute(hConsole, 14);
		cout << "Установлен жёлтый цвет\n!" << endl;
		Sleep(1000);
		system("cls");
		text();
		break;

	case 3:

		SetConsoleTextAttribute(hConsole, 2);
		cout << "Установлен зелёный цвет\n!" << endl;
		Sleep(1000);
		system("cls");
		text();
		break;

	case 4:

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Установлен синий цвет\n!" << endl;
		Sleep(1000);
		system("cls");
		text();
		break;

	case 5:

		SetConsoleTextAttribute(hConsole, 5);
		cout << "Установлен розовый цвет\n!" << endl;
		Sleep(1000);
		system("cls");
		text();
		break;

	default:
		cout << "Тут нет такой цифры!!" << endl;
		break;
	}
}

void Player::text()
{
	short pos;
	SetConsoleTitle(L"Tic-Tac-Toe");
	cout << " Крестики - нолики\n" << endl;
	cout << " Меню" << endl;
	cout << " --------------------------------" << endl;
	cout << " 1) Игра с игроком" << endl;
	cout << " 2) Игра с ботом" << endl;
	cout << " 3) Настройки" << endl;
	cout << " --------------------------------\n" << endl;

	cout << ("> ");
	cin >> pos;

	switch (pos)
	{
	case 1:
		play();
		break;
	case 2:
		play_computer();
		break;
	case 3:
		system("cls");
		settings();
		break;
	default:
		cout << " Технические шоколадки... \n Цифру правильную выбери!!! (1/2)" << endl;
		break;
	}
}