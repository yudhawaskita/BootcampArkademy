#include<stdio.h>
#include<iostream>
#include<ctype.h>


using namespace std;
int main()
{
char kalimat[100];
int i, spasi=0;


cout<<"masukkan kalimat: ";
cin.getline(kalimat, sizeof(kalimat));


for(i=0; kalimat[i]; i++)
{
if(isspace (kalimat[i]) || ispunct (kalimat[i]))
{
spasi++;
}
}
cout<<"jumlah kata = "<<spasi+1<<"\n\n";
cout<<"kata yang anda masukkan= \n";
cout<<"\t";

for(i=0; kalimat[i]; i++)
{
if(isspace (kalimat[i]) || ispunct (kalimat[i]))
{
spasi++;
cout<<"\n";
cout<<"\t";
}

cout<<kalimat[i];
}
getchar();
}
