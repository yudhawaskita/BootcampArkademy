#include <iostream>
#include <conio.h>

using namespace std;
main()
{
	int angka, a, i;
	cout<<"Masukkan Angka: ";
	cin>>angka;
	

	for(a=1; a<=angka; a++)
	{
		for(i=0; i<angka; i++)
		{
			if(i<1||i==angka-1)
			{
				cout<<"*";
			}
			else if(a==(angka/2)+1)
			{
				cout<<"*";
			}
			else
			{
				cout<<"=";
			}
		}
		cout<<endl;
	}
	system("pause");
}

