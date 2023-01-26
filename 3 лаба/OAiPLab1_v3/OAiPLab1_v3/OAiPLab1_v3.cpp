#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <windows.h>
using namespace std;

/*Основа*/
/*1. Скопировать из файла FILE1 в файл FILE2 строки, начиная с к до к+3.
Подсчитать количество гласных букв в FILE2.*/


//int main()
//{
//	setlocale(LC_ALL, "ru");
//	int k, num = 0, counter = 0;
//	cout << "Введите, с какой строки копировать:\n";
//	cin >> k;
//	int k1 = k + 3;
//	string str;
//	ifstream file1("fileMain1_1.txt");
//	ofstream file2("fileMain1_2.txt");
//	k--;
//	k1--;
//	while (getline(file1, str))
//	{
//		if (num >= k && num <= k1)
//		{
//			file2 << str << '\n';
//			for (int j = 0; j < 8; j++)
//			{
//				if (str[j] == 'a' || str[j] == 'o' || str[j] == 'e' || str[j] == 'y' || str[j] == 'u' || str[j] == 'i')
//					counter++;
//			}
//		}
//		num++;
//	}
//	cout << counter << " гласных букв.\n";
//

/*Основа*/
/*2. Ввести с клавиатуры строку символов, состоящую из цифр и слов,
разделенных пробелами, и записать ее в файл. Прочитать из файла данные,
вывести слова строки и записать их в другой файл. */

//
//void main()
//{
//    setlocale(LC_ALL, "rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    char buff[50];
//    char str[50];
//    int countWordITF = 0;
//    int counterNumbers = 0;
//    int counterNumbers_1 = 0;
//    ofstream fout_1("t_3var1.txt");
//    cin.getline(str, 50);
//    fout_1 << str << '.' << '\n';
//    fout_1.close();
//    ifstream fin("t_3var1.txt");
//    fin.getline(buff, 50);
//    cout << buff << endl;
//    for (int i = 0; i < strlen(buff); i++)
//    {
//        if (buff[i] == ' ' || buff[i] == '.') {
//            countWordITF++;
//        }
//    }
//    fin.close();
//    ofstream fout_2("t_3var2.txt");
//    ifstream fin_1("t_3var1.txt");
//    for (int i = 0; i < countWordITF; i++)
//    {
//        fin_1 >> buff;
//        int buff_len = strlen(buff);
//        for (int j = 0; j < buff_len; j++) {
//            if (buff[j] == '1' || buff[j] == '2' || buff[j] == '3' || buff[j] == '4' || buff[j] == '5' || buff[j] == '6' || buff[j] == '7' || buff[j] == '8' || buff[j] == '9' || buff[j] == '0') {
//                counterNumbers++;
//            }
//        }
//        if (counterNumbers > 0) {
//            counterNumbers_1++;
//        }
//        else {
//            cout << buff << endl;
//            fout_2 << buff << " ";
//        }
//        counterNumbers = 0;
//    }
//    cout << "Наборов символов :  " << counterNumbers_1 << endl;
//    cout << "Количество слов :  " << countWordITF - counterNumbers_1 << endl;
//    fout_2.close();
//    fin_1.close();
//}
//


/*Доп 1 (Вариант 2)*/
/*1. Скопировать в файл FILE2 только те строки из FILE1,  которые
начинаются с буквы «А». Подсчитать количество слов в FILE2.*/
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	int k, num = 0, counter = 0;
//	string str;
//	ifstream file1("file2_1_1.txt");
//	ofstream file2("file2_1_2.txt");
//	while (getline(file1, str))
//	{
//		if(str[0] == 'a' || str[0] == 'A')
//		{
//			file2 << str << '\n';
//		}
//	}
//}

//Доп 1 (Вариант 2)
/*2. Ввести с клавиатуры строку символов, состоящую из групп
цифр и нулей, и записать ее в файл. Прочитать из файла данные
и вывести самую короткую группу. */
////
//
//string fileOut(string *pStrOut)
//{
//	ofstream file1("file2_2_1.txt");
//	file1 << *pStrOut;
//	file1.close();
//	return *pStrOut;
//}
//
//string fileIn(string* pStrIn)
//{
//	string StrIn, min = "0000000";
//	ifstream file2("file2_2_1.txt");
//	while (file2)
//	{
//		file2 >> StrIn;
//		if (StrIn.length() < min.length())
//			min = StrIn;
//	}
//	cout << "Самая короткая группа: " << min << '\n';
//	file2.close();
//	return min;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	string strOut, strIn;
//	string* pStrOut = &strOut, * pStrIn = &strIn;
//	cout << "Введите группы цифр, разделенные пробелом:\n";
//	getline(cin, strOut);
//	fileOut(pStrOut);
//	fileIn(pStrIn);
//}

//Доп 2 (Вариант 6)
/*1. Скопировать из файла FILE1 в файл FILE2 строки, начиная с N до K.
Подсчитать количество согласных букв в файле FILE2.*/
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	int n, k, num = 0, counter = 0;
//	cout << "Введите, с какой строки копировать:\n";
//	cin >> n;
//	cout << "Введите, до какой строки копировать:\n";
//	cin >> k;
//	string str;
//	ifstream file1("file6_1_1.txt");
//	ofstream file2("file6_1_2.txt");
//	k--;
//	n--;
//	while (getline(file1, str))
//	{
//		if (num >= n && num <= k)
//		{
//			file2 << str << '\n';
//			for (int j = 0; j < 8; j++)
//			{
//				if (str[j] == 'q' || str[j] == 'w' || str[j] == 'r' || str[j] == 't' || str[j] == 'p' || str[j] == 's' || str[j] == 'd' || str[j] == 'f' ||
//					str[j] == 'g' || str[j] == 'h' || str[j] == 'j' || str[j] == 'k' || str[j] == 'l' || str[j] == 'z' || str[j] == 'x' || str[j] == 'c' ||
//					str[j] == 'v' || str[j] == 'b' || str[j] == 'n' || str[j] == 'm')
//					counter++;
//			}
//		}
//		num++;
//	}
//	cout << counter << " согласных букв.\n";
//}

//Доп 2 (Вариант 6)
/*2. Ввести с клавиатуры строку символов, состоящую из групп цифр и нулей,
и записать ее в файл. Прочитать из файла данные и вывести на экран группы
с четным количеством символов.*/
//
//string fileOut(string *pStrOut)
//{
//	ofstream file1("file6_2_1.txt");
//	file1 << *pStrOut;
//	file1.close();
//	return *pStrOut;
//}
//
//string fileIn(string* pStrIn)
//{
//	string StrIn;
//	ifstream file2("file6_2_1.txt");
//	while (file2)
//	{
//		file2 >> StrIn;
//		if (StrIn.length() % 2 == 0)
//			cout << StrIn << '\n';
//	}
//	file2.close();
//	return StrIn;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	string strOut, strIn;
//	string* pStrOut = &strOut, * pStrIn = &strIn;
//	cout << "Введите группы цифр, разделенные пробелом:\n";
//	getline(cin, strOut);
//	fileOut(pStrOut);
//	fileIn(pStrIn);
//}

//Доп 3 (Вариант 9)
/* 1. Скопировать из файла FILE1 в файл FILE2 все строки, начинающиеся
на букву «С», расположенные между строками с номерами N1 и N2. Определить
количество слов в первой строке файла FILE2.*/
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	int n1, n2, num = 0, counter = 0;
//	string str;
//	cout << "Введите, с какой строки копировать:\n";
//	cin >> n1;
//	cout << "Введите, до какой строки копировать:\n";
//	cin >> n2;
//	ifstream file1("file9_1_1.txt");
//	ofstream file2("file9_1_2.txt");
//	n1--;
//	n2--;
//	while (getline(file1, str))
//	{
//		if (num >= n1 && num <= n2)
//		{
//			if (str[0] == 'C' || str[0] == 'c')
//			{
//				file2 << str << '\n';
//				for (int i = 0; i < str.length(); i++)
//				{
//					if (str[i] == ' ')
//					{
//						counter++;
//					}
//				}
//			}
//		}
//		num++;
//	}
//	cout << "В первой строке второго файла " << ++counter << " слова.\n";
//}

// Доп 3 (Вариант 9)
/* 2. Ввести с клавиатуры строку символов, состоящую из слов,
разделенных пробелами, и записать ее в файл. Прочитать из файла данные
и вывести на экран порядковый номер слова минимальной длины. */

string fileOut(string* pStrOut)
{
	ofstream file1("file9_2_1.txt");
	file1 << *pStrOut;
	file1.close();
	return *pStrOut;
}

string fileIn(string* pStrIn)
{
	string StrIn, min = "0000000";
	short counter = 1, SequenceNum;
	ifstream file2("file9_2_1.txt");
	while (file2)
	{
		file2 >> StrIn;
		if (StrIn.length() < min.length())
		{
			min = StrIn;
			SequenceNum = counter;
		}
		counter++;
	}
	cout << "Порядковый номер самого короткого слова: " << SequenceNum << '\n';
	file2.close();
	return StrIn;
}

int main()
{
	setlocale(LC_ALL, "ru");
	string strOut, strIn;
	string* pStrOut = &strOut, * pStrIn = &strIn;
	cout << "Введите группы цифр, разделенные пробелом:\n";
	getline(cin, strOut);
	fileOut(pStrOut);
	fileIn(pStrIn);
}