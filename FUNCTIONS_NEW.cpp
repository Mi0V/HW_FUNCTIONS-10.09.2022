#include <iostream>
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n, int summ);
double Avg(int arr[], const int n, int summ);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int indent);
void shiftRight(int arr[], const int n, int indent);

void main()
{
	setlocale(LC_ALL, "rus");
	const int n = 10;
	int arr[n];
	int summ = 0;
	int indent = 5;

	FillRand(arr, n);
	Print(arr, n);
	std::cout << "Сумма всех элемернтов массива равна: " << Sum(arr, n, summ) << std::endl;
	std::cout << "Среднее арифметическое: " << Avg(arr, n, summ) << std::endl;
	std::cout << "Минимальное значение: " << minValueIn(arr, n) << std::endl;
	std::cout << "Максимальное значение: " << maxValueIn(arr, n) << std::endl;
	shiftLeft;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << std::endl;
}

int Sum(int arr[], const int n, int summ)
{
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		a += arr[i];
	}
	summ = a;
	return summ,a;
}

double Avg(int arr[], const int n, int summ)
{
	/*
	double Dev = Sum(arr, n);
	Dev /= n;
	return Dev;*/
	double Dev = (double)summ / n;
	return Dev;

}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] < min) ? min = arr[i] : n;
		
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] > max) ? max = arr[i] : n;

	}
	return max;
}
void shiftLeft(int arr[], const int n, int indent)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= n - indent)
		{
			std::cout << arr[i + indent] << ",";
		}
		else if (arr[i] >= n - indent)
		{
			std::cout << arr[i - indent] << ",";
		}
		std::cout << std::endl;
	}

}
void shiftRight(int arr[], const int n, int indent)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= n - indent)
		{
			std::cout << arr[i + indent] << ",";
		}
		else if (arr[i] <= n - indent)
		{
			std::cout << arr[i - indent] << ",";
		}
		std::cout << std::endl;
	}
}



