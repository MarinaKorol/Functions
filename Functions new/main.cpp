#include<iostream>
using namespace std;

int Add(int a, int b);//Прототип функции, объявление функции,function declaration) 
int Sub(int a, int b);
int Mul(int a, int b);
double Div(double a, double b);
int Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "Введите 2 числа: ";cin >> a >> b;
	int c = Add(a, b);//использование функции, вызов функции, Function call)
	cout << a << " + " << b << " = " << c;
	cout << endl;
	int sub = Sub(a, b);//либо без объявления третей переменной пишем Sub(a,b 
	cout << a << " - " << b << " = " << sub;
	cout << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout <<a<<"^"<<b<<" = "<< Power(a, b) << endl;
}


int Add(int a, int b)//реализация функции, определение функции Function definition)
{
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	int sub = a - b;
	return sub; //или написать сразу return a-b
}
int Mul(int a, int b)
{
	return a* b;
}
double Div(double a, double b)
{
	if (b == 0)cout << "На ноль делить нельзя!";
	return a / b;
}
int Power(int a, int b)
{
	int N = 1;
	for (int i = 0;i < b; i++)

	{
		N *= a;

	}
	return N;
		
}

