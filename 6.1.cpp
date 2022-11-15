/* ------------------------------ */
/* Program dengan pernyataan goto */
/* ------------------------------ */
#include<iostream>
using namespace std;
int main()
{
int a, b;
char lagi;
atas:
//clrscr();
cout<<"Masukkan Bilangan = ";
cin>>a;
b = a % 2;
cout <<"Nilai "<<a<< "%2 adalah = "<< b;
cout <<"\n\nIngin Hitung Lagi [Y/T] : ";
  cin>>lagi;
if (lagi == 'Y' || lagi == 'y')
goto atas;
  if (lagi == 'T' || lagi == 't')
goto akhir;
  akhir:
  return 0;
getchar();
}