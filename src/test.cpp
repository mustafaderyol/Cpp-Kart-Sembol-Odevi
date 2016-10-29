/* *
 * @file			test.cpp
 * @description		
 * @course			
 * @assignment		
 * @date			
 * @author			
 * */
#include "Sembol.hpp"
#include "Kart.hpp"
#include <iostream>
using namespace std;

int main(){
	srand(time(NULL));

	int kartAdedi;
	cout<<"Kart Adedi:";
	cin>>kartAdedi;

	Kart *kartlar[kartAdedi];

	for(int i=0;i<kartAdedi;i++)
	{
		kartlar[i] = new Kart();
	}

	int secim;
	do{

		for(int i=0;i<kartAdedi;i++)
		{
			cout<<"\t"<<(i+1);
		}
		cout<<"\n";

		for(int i=0;i<kartAdedi;i++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),kartlar[i]->getSembol()->getRenk());
			cout<<"\t"<<(char) kartlar[i]->getSembol()->getVeri();
		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	
		cout<<endl<<endl<<"islemler: "<<endl;
		cout<<"1. Kart Degistir "<<endl;
		cout<<"2. Ters Cevir "<<endl;
		cout<<"3. Cikis "<<endl;
		cout<<"Secim: ";
		cin>>secim;
		switch(secim)
		{
			case 1:
				int degisecek,degistirilecek;
				cout<<"Kacinci Karti Degistirmek istiyorsunuz: ";
				cin>>degisecek;
				cout<<"Hangi Kart ile Degistirmek istiyorsunuz: ";
				cin>>degistirilecek;

				Kart *temp;
				temp = kartlar[degisecek-1];
				kartlar[degisecek-1] = kartlar[degistirilecek-1];
				kartlar[degistirilecek-1] = temp;

				break;
			case 2:

				Kart *tempKartlar[kartAdedi];

				for(int i=0;i<kartAdedi;i++)
				{
					tempKartlar[kartAdedi-i-1] = kartlar[i];
				}

				for(int i=0;i<kartAdedi;i++)
				{
					kartlar[i] = tempKartlar[i];
				}

				break;
		}
	}while(secim != 3);

	return 0;
}