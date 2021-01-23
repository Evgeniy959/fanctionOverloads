#include <iostream>
using namespace std;

#define delimiter "\n------------------------------------------\n"
const int ROWS = 8;
const int COLS = 5;

void fillRand(int arr[], const int n);
void fillRand(double arr[], const int n);
void fillRand(char arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
int MinValueIn(int arr[], const int n);
int MaxValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
double MaxValueIn(double arr[], const int n);
int MinValueIn(char arr[], const int n);
int MaxValueIn(char arr[], const int n);

void fillRand(int arr[ROWS][COLS], const int m, const int n);
void fillRand(double arr[ROWS][COLS], const int m, const int n);
void fillRand(char arr[ROWS][COLS], const int m, const int n);

void Print(int arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);
void Print(char arr[ROWS][COLS], const int m, const int n);

int Sum(int arr[ROWS][COLS], const int m, const int n);
int Sum(double arr[ROWS][COLS], const int m, const int n);
int Sum(char arr[ROWS][COLS], const int m, const int n);
/*double Avg(int arr[ROWS][COLS], const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);
double Avg(char arr[ROWS][COLS], const int m, const int n);*/

void main()

{
	setlocale(LC_ALL, "RUS");

	const int n = 10;
	int arr[n];
	fillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Cреднее арифмитическое значение: " << Avg(arr, n) << endl;
	cout << "Min = " << MinValueIn(arr, n) << endl;
	cout << "Max = " << MaxValueIn(arr, n) << endl;
	
	cout << delimiter << endl;
	
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	fillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Cреднее арифмитическое значение: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Min = " << MinValueIn(d_arr, D_SIZE) << endl;
	cout << "Max = " << MaxValueIn(d_arr, D_SIZE) << endl;
	
	cout << delimiter << endl;
	
	const int C_SIZE = 25;
	char c_arr[C_SIZE];
	fillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Cреднее арифмитическое значение: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Min = " << MinValueIn(c_arr, C_SIZE) << endl;
	cout << "Max = " << MaxValueIn(c_arr, C_SIZE) << endl;
	
	cout << delimiter << endl;
	
	int i_arr_2[ROWS][COLS];
	fillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	//cout << "Cреднее арифмитическое значение: " << Avg(i_arr_2, ROWS, COLS) << endl;

	cout << delimiter << endl;

	double d_arr_2[ROWS][COLS];
	fillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	//cout << "Cреднее арифмитическое значение: " << Avg(d_arr_2, ROWS, COLS) << endl;

	cout << delimiter << endl;

	char c_arr_2[ROWS][COLS];
	fillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	//cout << "Cреднее арифмитическое значение: " << Avg(c_arr_2, ROWS, COLS) << endl;
}

void fillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void fillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
void fillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
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
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}

double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int MinValueIn(int arr[], const int n)
{
	int minValueIn = 1;
	for (int i = 0; i < n; i++)
	{
		if (minValueIn > arr[i])
			minValueIn = arr[i];
	}
	return minValueIn;
}


int MaxValueIn(int arr[], const int n)
{
	int maxValueIn = 1;
	for (int i = 0; i < n; i++)
	{

		if (maxValueIn < arr[i])
			maxValueIn = arr[i];
	}
	return maxValueIn;
}

double MinValueIn(double arr[], const int n)
{
	double minValueIn = 1;
	for (int i = 0; i < n; i++)
	{
		if (minValueIn > arr[i])
			minValueIn = arr[i];
	}
	return minValueIn;
}
double MaxValueIn(double arr[], const int n)
{
	double maxValueIn = 1;
	for (int i = 0; i < n; i++)
	{

		if (maxValueIn < arr[i])
			maxValueIn = arr[i];
	}
	return maxValueIn;
}
int MinValueIn(char arr[], const int n)
{
	int minValueIn = 1;
	for (int i = 0; i < n; i++)
	{
		if (minValueIn > arr[i])
			minValueIn = arr[i];
	}
	return minValueIn;
}
int MaxValueIn(char arr[], const int n)
{
	int maxValueIn = 1;
	for (int i = 0; i < n; i++)
	{

		if (maxValueIn < arr[i])
			maxValueIn = arr[i];
	}
	return maxValueIn;
}

void fillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void fillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}
	}
}

void fillRand(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand();
		}
	}
}

void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(int arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
		cout << endl;
	}
	return sum;
}

int Sum(double arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
		cout << endl;
	}
	return sum;
}

int Sum(char arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
		cout << endl;
	}
	return sum;
}

/*double Avg(int arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(i_arr_2, ROWS, COLS) / n;
}
double Avg(double arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(d_arr_2, ROWS, COLS) / n;
}
double Avg(char arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(c_arr_2, ROWS, COLS) / n;*/


