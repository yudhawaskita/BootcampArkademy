#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
int random, angka;
string alphabet;
srand(time(0));

cout<<"Cetak: ";
cin>>angka;

for(int a=1; a<=angka; a++)
{
for(int a=0;a<=31;a++)
{
	random = rand()%26;
	alphabet = 'a'+random;
	
	cout<<alphabet;
}
cout<<"\n";
}
}
