#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int system1;
	cout << "\n������� ������ ������� ���������� ";
	cin >> system1;
	if (system1 == 2)
	{
		int a;
		char bin[65];
		int system2;
		cout << "\n������� ����� � �������� ������� ��������� ";
		cin >> bin;
		cout << "\n������� ������ ������� ���������� ";
		cin >> system2;

		if (system2 == 3)
		{
			int x = 0;
			int ternary[100];
			a = 0;
			for (int i = 0; i < strlen(bin); i++)
			{
				a = a * 2 + (bin[i] - '0');
			}
			for (int j = 0; a > 0; j++)
			{
				ternary[j] = a % 3;
				a = a / 3;
				x++;
			}
			cout << "���� ����� � �������� ������� ����������: ";
			for (x--; x >= 0; x--)
			{
				cout << ternary[x];
			}
		}
		
		if (system2 == 8)
		{
			a = 0;
			for (int i = 0; i < strlen(bin); i++)
			{
				a = a * 2 + (bin[i] - '0');
			}
			cout << "���� ����� � ������������ ������� ����������: ";
			printf("%o", a);  //����� ����� � 8-�� �������
		}

		if (system2 == 10)
		{
			a = 0;
			for (int i = 0; i < strlen(bin); i++)
			{
				a = a * 2 + (bin[i] - '0');
			}
			cout << "���� ����� � ���������� ������� ����������: " << a << "\n";
		}

		if (system2 == 16)
		{
			a = 0;
			for (int i = 0; i < strlen(bin); i++)
			{
				a = a * 2 + (bin[i] - '0');
			}
			cout << "���� ����� � ������������������ ������� ����������: ";
			printf("%X", a);  //����� ����� � 16-�� �������
		}
	}

	if (system1 == 3)
	{
		int a;
		char ternary[65];
		int system2;
		int bin[100];
		cout << "\n������� ����� � �������� ������� ��������� ";
		cin >> ternary;
		cout << "\n������� ������ ������� ���������� ";
		cin >> system2;

		if (system2 == 2)
		{
			int x = 0;
			a = 0;
			for (int i = 0; i < strlen(ternary); i++)
			{
				a = a * 3 + (ternary[i] - '0');
			}
			for (int j = 0; a > 0; j++)
			{
				bin[j] = a % 2;
				a = a / 2;
				x++;
			}
			cout << "���� ����� � �������� ������� ����������: ";
			for (x--; x >= 0; x--)
			{
				cout << bin[x];
			}
		}


		if (system2 == 8)
		{
			a = 0;
			for (int i = 0; i < strlen(ternary); i++)
			{
				a = a * 3 + (ternary[i] - '0');
			}
			cout << "���� ����� � ������������ ������� ����������: ";
			printf("%o", a);  //����� ����� � 8-�� �������
		}

		if (system2 == 10)
		{
			a = 0;
			for (int i = 0; i < strlen(ternary); i++)
			{
				a = a * 3 + (ternary[i] - '0');
			}
			cout << "���� ����� � ���������� �������" << a;
		}

		if (system2 == 16)
		{
			a = 0;
			for (int i = 0; i < strlen(ternary); i++)
			{
				a = a * 3 + (ternary[i] - '0');
			}
			cout << "���� ����� � ������������������ ������� ����������: ";
			printf("%X", a);  //����� ����� � 16-�� �������
		}
	}

	if (system1 == 8)
	{
		int a;
		char octal;
		int system2;
		cout << "\n������� ����� � ������������ ������� ���������� ";
		scanf("%o", &octal);
		cout << "\n������� ������ ������� ���������� ";
		cin >> system2;
		if (system2 == 2)
		{
			int bin[100];
			int x = 0;
			for (int j = 0; octal > 0; j++)
			{
				bin[j] = octal % 2;
				octal = octal / 2;
				x++;
			}
			cout << "���� ����� � �������� ������� ����������: ";
			for (x--; x >= 0; x--)
			{
				cout << bin[x];
			}
		}

		if (system2 == 3)
		{
			int ternary[100];
			int x = 0;
			for (int j = 0; octal > 0; j++)
			{
				ternary[j] = octal % 3;
				octal = octal / 3;
				x++;
			}
			cout << "���� ����� � �������� ������� ����������: ";
			for (x--; x >= 0; x--)
			{
				cout << ternary[x];
			}
		}

		if (system2 == 10)
		{
			a = 0;
			for (int i = 0; i <octal; i++)
			{
				a = a * 8 + octal;
			}
			cout << "���� ����� � ���������� ������� ����������: " << a;
		}

		if (system2 == 16)
		{
			a = 0;
			for (int i = 0; i < octal; i++)
			{
				a = a * 8 + octal;
			}
			cout << "���� ����� � ����������������� ������� ����������: ";
			printf("%X",a);  //����� ����� � 16-�� �������
		}
	}


	if (system1 == 10)
	{
		int a;
		int Decimal;
		int system2;
		cout << "\n������� ����� � ���������� ������� ���������� ";
		scanf("%d", &Decimal);
		cout << "\n������� ������ ������� ���������� ";
		cin >> system2;

		if (system2 == 2)
		{
			int x = 0;
			int bin[100];
			for (int j = 0; Decimal > 0; j++)
			{
				bin[j] = Decimal % 2;
				Decimal = Decimal / 2;
				x++;
			}
			cout << "���� ����� � �������� ������� ����������: ";
			for (x--; x >= 0; x--)
			{
				cout << bin[x];
			}
		}

		if (system2 == 3)
		{
			int x = 0;
			int ternary[100];
			for (int j = 0; Decimal > 0; j++)
			{
				ternary[j] = Decimal % 3;
				Decimal = Decimal / 3;
				x++;
			}
			cout << "���� ����� � �������� ������� ����������: ";
			for (x--; x >= 0; x--)
			{
				cout << ternary[x];
			}
		}

		if (system2 == 8)
		{
			cout << "���� ����� � ������������ ������� ����������: ";
			printf("%o", Decimal);  //����� ����� � 8-�� �������			
		}

		if (system2 == 16)
		{
			cout << "���� ����� � ����������������� ������� ����������: ";
			printf("%X", Decimal);  //����� ����� � 16-�� �������
		}
	}


	if (system1 == 16)
	{
		int a;
		int Hexadecimal = 0;
		int system2;
		cout << "������� ����������������� ����� ";
		scanf("%X", &Hexadecimal);
		cout << "\n������� ������ ������� ���������� ";
		cin >> system2;

		if (system2 == 2)
		{
			int bin[100];
			int x = 0;
			for (int j = 0; Hexadecimal > 0; j++)
			{
				bin[j] = Hexadecimal % 2;
				Hexadecimal = Hexadecimal / 2;
				x++;
			}
			cout << "���� ����� � �������� ������� ����������: ";
			for (x--; x >= 0; x--)
			{
				cout << bin[x];
			}
		}

		if (system2 == 3)
		{
			int ternary[100];
			int x = 0;
			for (int j = 0; Hexadecimal > 0; j++)
			{
				ternary[j] = Hexadecimal % 3;
				Hexadecimal = Hexadecimal / 3;
				x++;
			}
			cout << "���� ����� � �������� ������� ����������: ";
			for (x--; x >= 0; x--)
			{
				cout << ternary[x];
			}
		}

		if (system2 == 8)
		{
			cout << "���� ����� � ������������ ������� ����������: ";
			printf("%o", Hexadecimal);
		}

		if (system2 == 10)
		{
			cout << "���� ����� � ���������� ������� ����������: ";
			printf("%d", Hexadecimal);
		}
	}


	return 0;
}