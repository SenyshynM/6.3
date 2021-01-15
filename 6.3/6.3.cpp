// lab 6.3
// варіант 24*

#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
T first_pair0(T* a, T size)
{
	int m = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			m = a[i];
			return m; // повертаємо перший знайдений парний елемент
		}
	}
	return m; // якщо не буде парних елементів - повернеться 0
}

template <class T>
T max0(T* a, T size)
{
	int m = first_pair0(a, size);

	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			if (a[i] > m)
				m = a[i];
		}
	}
	return m;
}

template <class T>
T Print0(T* a, const T size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << '\n';
	return 0;
}

template <class T>
T Create0(T* a, const T size, const T Low, const T High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
	return 0;
}

int first_pair(int* a, int size)
{
	int m = 0; 
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			m = a[i];
			return m; // повертаємо перший знайдений парний елемент
		}
	}
	return m; // якщо не буде парних елементів - повернеться 0
}

int max(int* a, int size)
{
	int m =	first_pair(a,size);

	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			if (a[i] > m)
				m = a[i];
		}
	}
	return m;
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << '\n';
}

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}


int main()
{
	srand((unsigned)time(0));

	const int n = 10;
	int a[n];
	Create(a, n, -10, 20);
	cout << "array = ";
	Print(a, n);
	cout << '\n' << "max" << setw(5) << max(a, n) << '\n';

	cout << "--------------------------------------------" << endl;

	Create0(a, n, -10, 20);
	cout << "array = ";
	Print0(a, n);
	cout << '\n' << "max (template)" << setw(5) << max0(a, n) << '\n';


	getchar();
}