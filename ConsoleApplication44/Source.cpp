#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include "Header.h"
#include <conio.h>

using namespace std;

unsigned short int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	srand(time(NULL));

	unsigned short int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;

		cin.get();

		switch (nz)
		{

		case 1:
		{
			cout << "Функция strncpy(s1, s2,n) копирует ровно n символов из строки s2 в строку s1, усекая при" << endl
				<< "необходимости строку s2 или заполняя избыточные символы дополнительными нулевыми символами. " << endl
				<< "левая строка может не с одержать завершающего нулевого символа, если длина строки s2 равна " << endl
				<< "или больше n.Функция возвращает строку s1.Напишите собственную версию этой функции." << endl
				<< "Протестируйте эту функцию в рамках завершенной программы, которая ис¬пользует цикл для передачи " << endl
				<< "входных значений рассматриваемой функции.\n\n";

			char s2[] = "Услышали они шум, вбежали в домик и убили Волка. А потом распороли ему брюхо, и оттуда вышла Красная Шапочка, а за ней и бабушка - обе целые и невредимые.";
			char* s1 = NULL;
			int r;
			printf("Введите кол-во символов для копирования:");
			cin >> r;
			s1 = (char*)calloc(r + 1, sizeof(char));
			copyS(s2, s1, r);
			printf("%s\n\n", s1);
		}break;

		case 2:
		{
			cout << "Напишите программу, которая читает входные данные до тех пор, пока не встретится символ EOF," << endl
				<< "и выводит эти данные на экран. Эта функция должна распознавать и реализовывать следующие " << endl
				<< "аргументы командной строки:" << endl
				<< "a. - р печатать входные данные такими, какими они есть." << endl
				<< "b. - u преобразовать входные данные к верхнему регистру." << endl
				<< "c. - l преобразовать входные данные к нижнему регистру.\n\n";

			char str[100];
			printf("введите любое предложение: ");
			fgets(str, 100, stdin);

			//печатаем как есть
			printf("a. %s\n", str);

			//повышаем регистр
			for (int i = 0; i < strlen(str); i++)
			{
				str[i] = toupper(str[i]);
			}
			printf("b. %s\n", str);

			//понижаем регистр
			for (int i = 0; i < strlen(str); i++)
			{
				str[i] = tolower(str[i]);
			}
			printf("c. %s\n\n", str);
		}break;

		case 3:
		{
			cout << "Дан массив символов, содержащий текст. Написать программу, реализующую:" << endl
				<< "a.данный метод шифрации;" << endl
				<< "b.дешифрацию строки при заданной гамме.\n\n";
			char text[] = "account: KZT14848641454";
			printf("метод шифрации цифр звездочками: \n");
			printf("до: %s\n\n", text);
			for (int i = 0; i < strlen(text); i++)
			{
				int code = (int)text[i];
				if (code >= 48 && code <= 57)
					text[i] = '*';
			}
			printf("после: %s\n\n", text);

			printf("метод шифрации обратным текстом: \n");
			char str[] = "321затину";
			printf("до: %s\n\n", str);
			char newStr[] = "";
			int count = strlen(str) - 1;
			for (int i = 0; i <= strlen(str); i++)
			{
				newStr[i] = str[count];
				count--;

				if (i == strlen(str))
					newStr[i] = '\0';
			}
			printf("после: %s\n\n", newStr);
		}break;
	
		case 4:
		{
			cout << "упс, тут ничего нет :D\n\n";
		}break;

		case 5:
		{
			cout << "и тут тоже :D\n\n";
		}break;

		case 6:
		{
			cout << "... :D\n\n";
		}break;

		case 7:
		{
			cout << "Дан массив символов, состоящий из предложений, разделенных точками." << endl
				<< "Напишите программу, производящую следующее форматирование: " << endl
				<< "a.после каждой точки в конце предложения должен стоять хотя бы один пробел;" << endl
				<< "b.первое слово в предложении должно начинаться с прописной буквы.Замечание," << endl
				<< "текст может быть, как на русском, так и на английском языке\n\n";
			char str[] = "Дан.массив, символов.состоящий из предложений.hello how are you?";
			printf("%s\n\n", str);
			char str2[] = "/0";
			int count = 0;
			for (int i = 0; i <= strlen(str); i++)
			{
				if (str[i] == '.' && str[i + 1] != ' ')
				{
					str2[count] = '.';
					str2[count + 1] = ' ';
					count = count + 2;
					str[i + 1] = toupper(str[i + 1]);
				}

				else if (str[i] == '.' && str[i + 1] == ' ')
				{
					str2[count] = '.';
					str2[count + 1] = str[i + 1];
					count = count + 1;
					str[i + 2] = toupper(str[i + 2]);
				}

				else
				{
					str2[count] = str[i];
					count++;
				}
			}
			printf("%s\n\n", str2);
		}break;

		case 8:
		{
			cout << "Массив не более чем из 100 символов, содержащий произвольный русский текст. " << endl
				<< "Написать, какие буквы и сколько раз встречаются в этом тексте. Ответ должен " << endl
				<< "приводиться в грамматически правильной форме, например, а – 5 раз, к – 7 раз и т.д.\n\n";
			char*str = (char*)calloc(10 * sizeof(char), sizeof(char));
			int r = 0, c = 0;
			cin.get();
			printf("введите текст: \n");

			while (c != 13)
			{
				c = getch();
				printf("%c", (char)c);
				str = (char*)realloc(str, (r + 1) * sizeof(char));
				str[r] = (char)c;
				r++;
			}
			str[r] = '\0';

			alf(str);
			system("pause");
		}break;

		case 9:
		{
			cout << "Дан массив символов, содержащий текст. Слова зашифрованы – каждое из них записано наоборот. Расшифровать сообщение.\n\n";
			char str[] = "321затину";
			printf("%s\n\n", str);
			char newStr[] = "";

			int count = strlen(str) - 1;
			for (int i = 0; i <= strlen(str); i++)
			{
				newStr[i] = str[count];
				count--;

				if (i == strlen(str))
					newStr[i] = '\0';
			}
			printf("%s\n\n", newStr);
		}break;

		case 10:
		{
			cout << "Дан массив символов, содержащий слова, разделенные точкой с запятой (;)." << endl
				<< "Набор заканчивается двоеточием (:). Определить, сколько в нем слов, заканчивающихся буквой, а\n\n";


			char str[] = "Дан; массив; символа; содержащаа; слова; разделенные; точкой; с; запятой:";
			printf("%s\n\n", str);
			int count = 0;

			for (int i = 0; i < strlen(str); i++)
			{
				if (str[i] == ';')
				{
					if (str[i - 1] == 'а')
						count++;
				}
			}
			printf("%d - кол-во слов, заканчивающихся на букву а\n\n", count);
		}break;

		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "ошибка" << endl;
		}
	} while (nz > 0);


}