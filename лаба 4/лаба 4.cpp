/*Данна последовательность натуральных чисел{aj}j (n<=10000). Если в последовательности есть хотя бы одно число,
начинающееся цифрой 1, упорядочить последовательность по неубыванию.*/
/*

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const int N = 10000;
	int n, f = 0, x = 0, v = 0;
	cout << "kolich peremen:";
	cin >> n;
	if (n<0 || n>N)
	{
		cout << "ne ne ne";
			return 1;
	}
	int mas[N];
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
		if (mas[i] <= 0)
		{
			cout << "ne ne ne";
			return 1;
		}
	}
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		int m = mas[i];  //2315 
		while (m >= 9)
		{
			m = m / 10; //23
			
		}
		if (m == 1)
			{
				s += 1;
			}
	}
	if (s>0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (mas[j] > mas[i])
				{
					swap(mas[i], mas[j]);
					
				}
			}
				
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	return 0;
}
*/
/*Ввести последовательность натуральных чисел {Aj}j=1...n (n<=1000). Упорядочить последовательность по 
неубыванию первой цифры числа, числа с одинаковыми первыми цифрами дополнительно упорядочить по неубыванию суммы 
цифр числа, числа с одинаковыми первыми цифрами и одинаковыми суммами цифр дополнительно упорядочить по неубыванию 
самого числа.*/

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	const int N = 10000;
//	int n;
//	cout << "количество переменных:\n";
//	cin >> n;
//	if (n<0 || n>N)
//	{
//		cout << "ne ne ne";
//		return 1;
//	}
//	cout << "переменные:\n";
//	int* mas= new int [N];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> mas[i];
//		if (mas[i] <= 0)
//		{
//			cout << "ne ne ne";
//			return 1;
//		}
//	}
//	int* mas1=new int[N];
//	int* mas2=new int[N];
//	for (int i = 0; i < n; i++)
//	{
//		int m = mas[i];
//		while (m > 0)
//		{
//			int f = m % 10;
//			m = m / 10;
//		}
//		mas1[i] = m;
//		int mn = mas[i];
//		int r = 1, b = 0;
//		while (mn >= 10) // 345665
//		{
//			b += (abs(mn) % 10);
//			mn = mn / 10;
//		}
//		b += mn;
//		mas2[i] = b;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (mas1[i] > mas1[j] && i < j)
//			{
//				swap(mas[i], mas[j]);
//				swap(mas1[i], mas1[j]);
//				swap(mas2[i], mas2[j]);
//			}
//			if (mas1[i] == mas1[j] && mas2[i] > mas2[j] && i < j)
//			{
//				swap(mas[i], mas[j]);
//				swap(mas1[i], mas1[j]);
//				swap(mas2[i], mas2[j]);
//			}
//			if (mas1[i] == mas1[j] && mas2[i] == mas2[j] && mas[i] > mas[j] && i < j)
//			{
//				swap(mas[i], mas[j]);
//				swap(mas1[i], mas1[j]);
//				swap(mas2[i], mas2[j]);
//			}
//		}
//	}
//	cout << "Итог:\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << mas[i] << " ";
//	}
//
//	int Ponovoisania;
//	cout << "\nКоличество новвых переменных:\n";
//	cin >> Ponovoisania;
//
//	mas = (int*)realloc(mas,  Ponovoisania * sizeof(int));
//	cout << "Новые элементы:\n";
//	for (int p = n; p < Ponovoisania; p++)
//	{
//		cin >> mas[p];
//	}
//	cout << "Итог:\n";
//	for (int k = 0; k < Ponovoisania; k++)
//	{
//		cout << mas[k] << " ";
//	}
//	delete[] mas;
//	delete[] mas1;
//	delete[] mas2;
//	return 0;
//}


/*3.Дана целочисленная матрица {Aij}i=1..n,j=1..m (n,m<=100). Найти строку, сумма элементов которой наиболее
близка к 0, и заменить все элементы этой строки числом 0.*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const int N = 100;
	int* n = new int;
	int* m = new int;
	cout << "stroki:";
	cin >> *n;
	if (abs(*n) != int(*n) || *n == 0)
	{
		cout << "ne ne ne";
		return 1;
	}
	cout << "stolbes:";
	cin >> *m;
	if (abs(*m) != int(*m) || *m == 0)
	{
		cout << "ne ne ne";
		return 1;
	}
	cout << endl;
	double** matr = new double* [*n];
	for (int i = 0; i < *n; i++)
	{
		matr[i] = new double[*m];
	}

	for (int i = 0; i < *n; i++)
	{
		for (int j = 0; j < *m; j++)
		{
			cin >> matr[i][j];
			if (matr[i][j] != int(matr[i][j]))
			{
				cout << "ne ne ne";
				return 1;
			}
		}
	}
	int* z = new int;
	*z = 0;
	int* min = new int;
	*min= INT_MAX;
	int* sum = new int;
	*sum = 0;
	for (int i = 0; i < *n; i++)
	{
		for (int j = 0; j < *m; j++)
		{
			*sum += matr[i][j];
		}
		if (*min > abs(*sum))
		{
			*z = i;
			*min = *sum;
		}
		*sum = 0;
	}
	delete sum;
	delete min;
	int* i = new int;

	*i = *z;
	delete z;

	for (int j = 0; j < *m; j++)
	{
		matr[*i][j] = 0;
	}
	delete i;
	for (int i = 0; i < *n; i++)
	{
		for (int j = 0; j < *m; j++)
		{
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}
	for (int a = 0; a < *n; a++)
	{
		delete[] matr[a];
	}
	delete[] matr;

	int k = 14;
	string* mas = new string[k];
	return 0;
}


