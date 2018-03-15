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
		cout << "������� ����� �������: ";
		cin >> nz;

		cin.get();

		switch (nz)
		{

		case 1:
		{
			cout << "������� strncpy(s1, s2,n) �������� ����� n �������� �� ������ s2 � ������ s1, ������ ���" << endl
				<< "������������� ������ s2 ��� �������� ���������� ������� ��������������� �������� ���������. " << endl
				<< "����� ������ ����� �� � �������� ������������ �������� �������, ���� ����� ������ s2 ����� " << endl
				<< "��� ������ n.������� ���������� ������ s1.�������� ����������� ������ ���� �������." << endl
				<< "������������� ��� ������� � ������ ����������� ���������, ������� ���������� ���� ��� �������� " << endl
				<< "������� �������� ��������������� �������.\n\n";

			char s2[] = "�������� ��� ���, ������� � ����� � ����� �����. � ����� ��������� ��� �����, � ������ ����� ������� �������, � �� ��� � ������� - ��� ����� � ����������.";
			char* s1 = NULL;
			int r;
			printf("������� ���-�� �������� ��� �����������:");
			cin >> r;
			s1 = (char*)calloc(r + 1, sizeof(char));
			copyS(s2, s1, r);
			printf("%s\n\n", s1);
		}break;

		case 2:
		{
			cout << "�������� ���������, ������� ������ ������� ������ �� ��� ���, ���� �� ���������� ������ EOF," << endl
				<< "� ������� ��� ������ �� �����. ��� ������� ������ ������������ � ������������� ��������� " << endl
				<< "��������� ��������� ������:" << endl
				<< "a. - � �������� ������� ������ ������, ������ ��� ����." << endl
				<< "b. - u ������������� ������� ������ � �������� ��������." << endl
				<< "c. - l ������������� ������� ������ � ������� ��������.\n\n";

			char str[100];
			printf("������� ����� �����������: ");
			fgets(str, 100, stdin);

			//�������� ��� ����
			printf("a. %s\n", str);

			//�������� �������
			for (int i = 0; i < strlen(str); i++)
			{
				str[i] = toupper(str[i]);
			}
			printf("b. %s\n", str);

			//�������� �������
			for (int i = 0; i < strlen(str); i++)
			{
				str[i] = tolower(str[i]);
			}
			printf("c. %s\n\n", str);
		}break;

		case 3:
		{
			cout << "��� ������ ��������, ���������� �����. �������� ���������, �����������:" << endl
				<< "a.������ ����� ��������;" << endl
				<< "b.���������� ������ ��� �������� �����.\n\n";
			char text[] = "account: KZT14848641454";
			printf("����� �������� ���� �����������: \n");
			printf("��: %s\n\n", text);
			for (int i = 0; i < strlen(text); i++)
			{
				int code = (int)text[i];
				if (code >= 48 && code <= 57)
					text[i] = '*';
			}
			printf("�����: %s\n\n", text);

			printf("����� �������� �������� �������: \n");
			char str[] = "321������";
			printf("��: %s\n\n", str);
			char newStr[] = "";
			int count = strlen(str) - 1;
			for (int i = 0; i <= strlen(str); i++)
			{
				newStr[i] = str[count];
				count--;

				if (i == strlen(str))
					newStr[i] = '\0';
			}
			printf("�����: %s\n\n", newStr);
		}break;
	
		case 4:
		{
			cout << "���, ��� ������ ��� :D\n\n";
		}break;

		case 5:
		{
			cout << "� ��� ���� :D\n\n";
		}break;

		case 6:
		{
			cout << "... :D\n\n";
		}break;

		case 7:
		{
			cout << "��� ������ ��������, ��������� �� �����������, ����������� �������." << endl
				<< "�������� ���������, ������������ ��������� ��������������: " << endl
				<< "a.����� ������ ����� � ����� ����������� ������ ������ ���� �� ���� ������;" << endl
				<< "b.������ ����� � ����������� ������ ���������� � ��������� �����.���������," << endl
				<< "����� ����� ����, ��� �� �������, ��� � �� ���������� �����\n\n";
			char str[] = "���.������, ��������.��������� �� �����������.hello how are you?";
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
			cout << "������ �� ����� ��� �� 100 ��������, ���������� ������������ ������� �����. " << endl
				<< "��������, ����� ����� � ������� ��� ����������� � ���� ������. ����� ������ " << endl
				<< "����������� � ������������� ���������� �����, ��������, � � 5 ���, � � 7 ��� � �.�.\n\n";
			char*str = (char*)calloc(10 * sizeof(char), sizeof(char));
			int r = 0, c = 0;
			cin.get();
			printf("������� �����: \n");

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
			cout << "��� ������ ��������, ���������� �����. ����� ����������� � ������ �� ��� �������� ��������. ������������ ���������.\n\n";
			char str[] = "321������";
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
			cout << "��� ������ ��������, ���������� �����, ����������� ������ � ������� (;)." << endl
				<< "����� ������������� ���������� (:). ����������, ������� � ��� ����, ��������������� ������, �\n\n";


			char str[] = "���; ������; �������; ����������; �����; �����������; ������; �; �������:";
			printf("%s\n\n", str);
			int count = 0;

			for (int i = 0; i < strlen(str); i++)
			{
				if (str[i] == ';')
				{
					if (str[i - 1] == '�')
						count++;
				}
			}
			printf("%d - ���-�� ����, ��������������� �� ����� �\n\n", count);
		}break;

		}


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "������" << endl;
		}
	} while (nz > 0);


}