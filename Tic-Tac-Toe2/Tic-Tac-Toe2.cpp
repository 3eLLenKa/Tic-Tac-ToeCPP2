#include <iostream>
#include <vector>
#include <Windows.h>

#include "Play.h" //подключаем header со всеми функциями

using namespace std;

int main() {
	setlocale(LC_ALL, "rus"); //выставляем русский язык в консоли
	SetConsoleTitle(L"Крестики - нолики"); //название игры

	int menu;

	Player obj;

	cout << "Добро пожаловать в игру!" << endl;
	cout << endl;
	cout << " Какой режим выбираете? " << endl;
	cout << "------------------------------------------" << endl;
	cout << "| 1) С игроком \t\t\t\t |" << endl;
	cout << "| 2) С \"компьютером\" \t\t\t |" << endl;
	cout << "| 3) Настройки цвета\t\t\t |" << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;
	cout << "> ";
	cin >> menu;
	cout << endl;

	switch (menu)
	{
	case 1: obj.play();
		break;
	case 2: obj.play_computer();
		break;
	case 3: obj.settings();
	default:
		cout << "Введите цифру из меню!" << endl;
		break;
	}

	system("pause"); //пауза, для того чтобы exe файл проекта не закрывался сам
}

/*

План проекта :

	1) Двумерный массив
	2) Функция отрисовки поля
	3) Функция с логикой игры
	4) Функция проверки выигрыша

Ход игры:

	1) Ввод позиции
	2) Отрисовка изменённого поля
	3) Вывод сообщений на экран

*/