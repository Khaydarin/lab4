#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

using namespace std;

int digitizer(int number);
int* toTable(int number, int digits, int array[]);
void toText(int array[], int digits);
int kValue(int number);

string tho[3]=
{
	"tysiac","tysiace","tysiecy"
};
string hun[9]=
{
	"sto","dwiescie","trzysta","czterysta","piecset","szescset","siedemset","osiemset","dziewiecset"
};

string teen[9]=
{
	"jedenascie","dwanascie","trzynascie","czternascie","pietnascie","szesnascie","siedemnascie","osiemnascie","dziewietnascie"
};
string ten[9]=
{
	"dziesiec","dwadziescia","trzydziesci","czterdziesci","piecdziesiat","szescdziesiat","siedemdziesiat","osiemdziesiat","dziewiecdziesiat"
};

string uni[9]=
{
	"jeden","dwa","trzy","cztery","piec","szesc","siedem","osiem","dziewiec"
};


int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int k =1;

	/*
	int number = atoi(argv[1]);
	int digits=digitizer(number);
	int* array = new int[digits];
	toTable(number,digits,array);
	toText(array,digits);
	*/
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

int kValue(int n)
{

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
		bool hun1_flag=false;
		bool ten1_flag=false;
		bool uni1_flag=false;
		bool hun0_flag=false;
		bool ten0_flag=false;
		bool uni0_flag=false;
		switch(digits)
		{
			case 6:
			if(array[digits-1]==0)
				hun1_flag=true;
			else
				cout << hun[array[digits-1]-1] <<" ";
			digits--;

			case 5:
			if(array[digits-1]==0)
				ten1_flag=true;
			else
			{
				if(array[digits-1]==1&&array[digits-2]!=0)
				{
					cout << teen[array[digits-2]-1]<<" ";
					digits--;
					goto tysiac;
				}
				else
					cout << ten[array[digits-1]-1]<<" ";

			}
			digits--;

			case 4:
			if(array[digits-1]==0)
				uni1_flag=true;
			else
			{
				cout << uni[array[digits-1]-1]<<" ";

				tysiac: //przepraszam :(

				if((ten1_flag&&hun1_flag&&(array[digits-1]==1))||(digits==4)&&(array[digits-1]==1))
					cout << tho[0]<<" ";
				else if((array[digits]==1)&&(!uni1_flag))
					cout << tho[2]<<" ";
				else if((array[digits-1]==2)||(array[digits-1]==3)||(array[digits-1]==4))
					cout << tho[1]<<" ";
				else
					cout << tho[2]<<" ";
			}
			digits--;

			case 3:
			if(array[digits-1]==0)
				hun0_flag=true;
			else
				cout << hun[array[digits-1]-1]<<" ";
			digits--;

			case 2:
			if(array[digits-1]==0)
				ten0_flag=true;
			else
			{
				if(array[digits-1]==1&&array[digits-2]!=0)
				{
					cout << teen[array[digits-2]-1]<<" ";
					digits--;
					break;
			
				}
				else
					cout << ten[array[digits-1]-1]<<" ";

			}
			digits--;

			case 1:
			if(array[digits-1]==0)
				uni0_flag=true;
			else
				cout << uni[array[digits-1]-1]<<" ";
			digits--;




		}
		cout<<endl;
	}
}