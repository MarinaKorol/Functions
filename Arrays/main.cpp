#include <iostream>
using namespace std;

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {0,1,2,3,4,5,6,7,8,9};

	FillRand(arr, n);
	Print(arr, n);
	cout<<"Сумма элементов массива равна "<<Sum(arr, n)<<"."<<endl;
	cout << "Среднее арифметическое элементов массива равно " << Avg(arr, n) << "." << endl;
	cout << "Минимальное значение элементов массива равно " << minValueIn(arr, n) << "." << endl;
	cout << "Максимальное значение элементов массива равно " << maxValueIn(arr, n) << "." << endl;
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts;
	cout << "Введите количество сдвигов влево: ";cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	
	
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer=minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)+minRand;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	for (int i =0;i < n;i++)
	{
		int sum = 0;
		for (int i = 0;i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr,n)/n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0;i < number_of_shifts;i++)
	{
		int buffer = arr[0];
		for (int i = 0;i < n;i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
void Sort(int arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = i+1;j < n;j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

}
