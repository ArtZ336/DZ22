#include <iostream>
#include "function.h"
using namespace std;

void fillInt(int ar[], int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		ar[i] = rand() % 100;
	}
}
void showInt(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
}

void minInt(int ar[], int n)
{
	int min = ar[0];
	for (int i = 0; i < n; i++)
	{
		if (ar[i] < min)
			min = ar[i];
	}
	cout << "Минимум: " << min << "\n";
}

void maxInt(int ar[], int n)
{
	int max = ar[0];
	for (int i = 0; i < n; i++)
	{
		if (ar[i] > max)
			max = ar[i];
	}
	cout << "Минимум: " << max << "\n";
}
void sortInt(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ar[j] > ar[i])
			{
				int temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}
void editInt(int ar[], int n)
{
	int ind, num;
	cout << "Введите индекс елемента который хотите заменить: " << "\n";
	cin >> ind;
	cout << "Введите елемент: " << "\n";
	cin >> num;
	ar[ind + 1] = num;
}




void fillFloat(float ar[], float n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		ar[i] = rand() % 100;
	}
}
void showFloat(float ar[], float n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
}

void minFloat(float ar[], float n)
{
	float min = ar[0];
	for (int i = 0; i < n; i++)
	{
		if (ar[i] < min)
			min = ar[i];
	}
	cout << "Минимум: " << min << "\n";
}

void maxFloat(float ar[], float n)
{
	float max = ar[0];
	for (int i = 0; i < n; i++)
	{
		if (ar[i] > max)
			max = ar[i];
	}
	cout << "Минимум: " << max << "\n";
}
void sortFloat(float ar[], float n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ar[j] > ar[i])
			{
				float temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}
void editInt(int ar[], int n)
{
	int ind;
	float num;
	cout << "Введите индекс елемента который хотите заменить: " << "\n";
	cin >> ind;
	cout << "Введите елемент: " << "\n";
	cin >> num;
	ar[ind + 1] = num;
}




void fillChar(char ar[], char n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		ar[i] = rand() % 100;
	}
}
void showChar(char ar[], char n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
}

void minChar(char ar[], char n)
{
	char min = ar[0];
	for (int i = 0; i < n; i++)
	{
		if (ar[i] < min)
			min = ar[i];
	}
	cout << "Минимум: " << min << "\n";
}

void maxChar(char ar[], char n)
{
	char max = ar[0];
	for (int i = 0; i < n; i++)
	{
		if (ar[i] > max)
			max = ar[i];
	}
	cout << "Минимум: " << max << "\n";
}
void sortChar(char ar[], char n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ar[j] > ar[i])
			{
				char temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}
void editChar(char ar[], char n)
{
	int ind;
	char num;
	cout << "Введите индекс елемента который хотите заменить: " << "\n";
	cin >> ind;
	cout << "Введите елемент: " << "\n";
	cin >> num;
	ar[ind + 1] = num;
}
