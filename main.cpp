#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int digitizer(int number);
int* toTable(int number, int digits, int array[]);
void toText(int array[]);

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

void toText(int array[])
{

}