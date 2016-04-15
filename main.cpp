#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

using namespace std;

int digitizer(int number);
int* toTable(int number, int digits, int array[]);
void toText(int array[], int digits);

string hun1[9]=
{
	"sto",
	"dwiescie",
	"trzysta",
	"czterysta",
	"piecset",
	"szescset",
	"siedmeset",
	"osiemset",
	"dziewiecset"
};

string ten1[9]=
{
	"dziesiec",
	"dwadziescia",
	"trzydziesci",
	"czterdziesci",
	"piecdziesiat",
	"szescdziesiat",
	"siedemdziesiat",
	"osiemdziesiat",
	"dziewiecdziesiat"
};

string uni1[9]=
{
	"jeden",
	"dwa",
	"trzy",
	"cztery",
	"piec",
	"szesc",
	"siedem",
	"osiem",
	"dziewiec"
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
		cout<<endl;
	}
}