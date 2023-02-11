#include <iostream>
using namespace std;

#define delimeter "\n-----------------------------------\n";

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(double arr[], const int n, double minRand=0, double maxRand=100);
void FillRand(float arr[], const int n, float minRand=0, float maxRand=100);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
int Sum(int arr[], const int n);
int Sum(double arr[], const int n);
int Sum(float arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(float arr[], const int n);
int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, double number_of_shifts);
void shiftLeft(float arr[], const int n, float number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, double number_of_shifts);
void shiftRight(float arr[], const int n, float number_of_shifts);
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);

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
	/*int number_of_shifts;
	cout << "Введите количество сдвигов влево: ";cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);*/

	cout << delimeter;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива равна " << Sum(brr, SIZE) << "." << endl;
	cout << "Среднее арифметическое элементов массива равно " << Avg(brr,SIZE) << "." << endl;
	cout << "Минимальное значение элементов массива равно " << minValueIn(brr,SIZE) << "." << endl;
	cout << "Максимальное значение элементов массива равно " << maxValueIn(brr,SIZE) << "." << endl;

	cout << delimeter;

	const int size = 8;
	float crr[size];
	FillRand(crr, size);
	Print(crr, size);
	cout << "Сумма элементов массива равна " << Sum(crr,size) << "." << endl;
	cout << "Среднее арифметическое элементов массива равно " << Avg(crr,size) << "." << endl;
	cout << "Минимальное значение элементов массива равно " << minValueIn(crr,size) << "." << endl;
	cout << "Максимальное значение элементов массива равно " << maxValueIn(crr,size) << "." << endl;

	
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
void FillRand(double arr[], const int n, double minRand, double maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % int((maxRand - minRand) + minRand);
		arr[i] /= 100;
	}
}
void FillRand(float arr[], const int n, float minRand, float maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 10;
	maxRand *= 10;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % int((maxRand - minRand) + minRand);
		arr[i] /= 10;
	}
}
void FillRand(char arr[], const int n, char minRand, char maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 10;
	maxRand *= 10;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % int((maxRand - minRand) + minRand);
		arr[i] /= 10;
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
void Print(double arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(float arr[], const int n)
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
int Sum(double arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		int sum = 0;
		for (int i = 0;i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
}
int Sum(float arr[], const int n)
{
	for (int i = 0;i < n;i++)
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
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
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
double minValueIn(double arr[], const int n)
{
	int min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
float minValueIn(float arr[], const int n)
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
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
float maxValueIn(float arr[], const int n)
{
	float max = arr[0];
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
void shiftLeft(double arr[], const int n, double number_of_shifts)
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
void shiftLeft(float arr[], const int n, float number_of_shifts)
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
void shiftRight(double arr[], const int n, double number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(float arr[], const int n, float number_of_shifts)
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
void Sort(double arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;j++)
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
void Sort(float arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;j++)
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