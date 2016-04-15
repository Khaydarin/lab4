#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int digitizer(int number);
int* toTable(int number, int digits, int array[]);
void toText(int array[], int digits);

enum units_t
{
	jeden=1,
	dwa=2,
	trzy=3,
	cztery=4,
	piec=5,
	szesc=6,
	siedem=7,
	osiem=8,
	dziewiec=9

};

enum tens_t
{
	dziesiec=1,
	dwadziescia=2,
	trzydziesci=3,
	czterdziesci=4,
	piecdziesiat=5,
	szescdziesiat=6,
	siedemdziesiat=7,
	osiemdziesiat=8,
	dziewiecdziesiat=9

};

enum hundreds_t
{
	sto=1,
	dwiescie=2,
	trzysta=3,
	czterysta=4,
	piecset=5,
	szescset=6,
	siedemset=7,
	osiemset=8,
	dziewiecset=9
};

enum thousands_t
{
	tysiac=1,
	tysiace=2,
	tysiecy=3
};


int main(int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int digits=digitizer(number);
	int* array = new int[digits];
	toTable(number,digits,array);

	cout <<endl;



	delete []array;
}

int digitizer(int number)
{
	int digits=0;
	int num=number;
	while(num)
	{
		num=num/10;
		digits++;
	}	
	return digits;
}

int* toTable(int number, int digits, int array[])
{
	int b=10;
	int p=0;
	

	for(p;p<digits;p++)
	{
		array[p]=number%b;
		number=number/10;
	}

	return array;

	/*for(int i=0;i<digits;i++)
	{
		cout << tab[i];
		cout<<endl;
	}
	return 0;
	*/
}

void toText(int array[], int digits)
{
	int max_digits=6;
	if(digits>max_digits)
	{
		cout << "Za duza liczba :("<<endl;
	}
	else
	{
		cout<<
	}
}