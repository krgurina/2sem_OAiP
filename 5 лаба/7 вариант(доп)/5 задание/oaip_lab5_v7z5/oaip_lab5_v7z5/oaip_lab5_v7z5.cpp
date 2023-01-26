﻿//7, 5
/*Склад. Наименование товара, цена, количество, процент торговой надбавки (5, 10, 15, 20, 35, 30).
Выбор по наименованию.*/
#include <iostream>
#include<fstream>
#include <windows.h>
# define size 100
using namespace std;
void enter_new();
void out();
void search();
union forSklad
{
	char str[20];
	int limb;
};
struct Sklad
{
	forSklad name_of_product;
	forSklad cell;
	forSklad many;
	forSklad per;
};
Sklad productOnSclad[size];
int current_size = 0; int choice;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_CTYPE, "Russian");
	cout << "Введите:" << endl;
	cout << "1-для ввода записи" << endl;
	cout << "2-для вывода записи" << endl;
	cout << "3-для поиска информации" << endl;
	cout << "4-для выхода" << endl;
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 1: enter_new(); break;
		case 2: out(); break;
		case 3: search(); break;
		}
	} while (choice != 4);
}
void enter_new()
{
	cout << "Ввод информации" << endl;
	if (current_size < size)
	{
		cout << "Строка номер ";
		cout << current_size + 1;
		cout << endl << "Наименование товара" << endl;
		cin >> productOnSclad[current_size].name_of_product.str;
		cout << "Цена" << endl;
		cin >> productOnSclad[current_size].cell.limb;
		cout << "Количество" << endl;
		cin >> productOnSclad[current_size].many.limb;
		cout << "Процентная надбавка" << endl;
		cin >> productOnSclad[current_size].per.limb;
		current_size++;

	}
	else
		cout << "Введено максимальное кол-во строк";
	cout << "Введите:" << endl;
	cout << "1-для ввода записи" << endl;
	cout << "2-для вывода записи" << endl;
	cout << "3-для поиска информации" << endl;
	cout << "4-для выхода" << endl;
	cin >> choice;
}
void out()
{
	int sw, n;
	cout << "1-вывод 1 строки" << endl;
	cout << "2-вывод всех строк" << endl;
	cin >> sw;
	if (sw == 1)
	{
		cout << "Номер выводимой строки: " << endl;
		cin >> n;
		cout << endl;
		cout << endl << "Наименование товара:" << endl;
		cout << productOnSclad[n - 1].name_of_product.str << endl;
		cout << "Цена:" << endl;
		cout << productOnSclad[n - 1].cell.limb << endl;
		cout << "Количество:" << endl;
		cout << productOnSclad[n - 1].many.limb << endl;
		cout << "Процентная надбавка:" << endl;
		cout << productOnSclad[n - 1].per.limb << "%" << endl;
	}
	if (sw == 2)
	{
		for (int i = 0; i < current_size; i++)
		{
			cout << endl << "Наименование товара:" << endl;
			cout << productOnSclad[i].name_of_product.str << endl;
			cout << "Цена:" << endl;
			cout << productOnSclad[i].cell.limb << endl;
			cout << "Количество:" << endl;
			cout << productOnSclad[i].many.limb << endl;
			cout << "Процентная надбавка:" << endl;
			cout << productOnSclad[i].per.limb << "%" << endl;

		}
	}
	cout << "Введите:" << endl;
	cout << "1-для ввода записи" << endl;
	cout << "2-для вывода записи" << endl;
	cout << "3-для поиска информации" << endl;
	cout << "4-для выхода" << endl;
	cin >> choice;
}
void search()
{
	char name[16];
	cout << "Введите наименование товара:" << "\n";
	cin >> name;
	for (int z = 0; z < current_size; z++)
	{
		if (strcmp(name, productOnSclad[z].name_of_product.str) == 0)
		{
			cout << endl << "Наименование товара:" << endl;
			cout << productOnSclad[z].name_of_product.str << endl;
			cout << "Цена:" << endl;
			cout << productOnSclad[z].cell.limb << endl;
			cout << "Количество:" << endl;
			cout << productOnSclad[z].many.limb << endl;
			cout << "Процентная надбавка:" << endl;
			cout << productOnSclad[z].per.limb << "%" << endl;

		}
	}
	cout << "Введите:" << endl;
	cout << "1-для ввода записи" << endl;
	cout << "2-для вывода записи" << endl;
	cout << "3-для поиска информации" << endl;
	cout << "4-для выхода" << endl;
	cin >> choice;
}