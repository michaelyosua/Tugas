#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
using namespace std;
 
int main()
 {
  int jammasuk, menitmasuk;
  int jamkeluar, menitkeluar;
  int jmlhmenitmasuk, jmlhmenitkeluar, jmlhmenitparkir;
  int jamparkir, menitparkir;
  int tarifparkir;
  //input
  cout<<"Tarif Parkir";
  cout<<"\nJam Masuk   :";
  cin>>jammasuk;
  cout<<"Menit Masuk   :";
  cin>>menitmasuk;
  cout<<"Jam Keluar  :";
  cin>>jamkeluar;
  cout<<"Menit Keluar   :";
  cin>>menitkeluar;
  {jmlhmenitmasuk = (jammasuk*60) + menitmasuk;}
   {jmlhmenitkeluar = (jamkeluar*60) + menitkeluar;}
  {jmlhmenitparkir = jmlhmenitkeluar-jmlhmenitmasuk;}
  cout<<"Jumlah Menit Parkir  :"<< jmlhmenitparkir;
  {jamparkir= jmlhmenitparkir/60;}
  cout<<"\nJam Parkir   :"<< jamparkir;
  {menitparkir= jmlhmenitparkir%60;}
  cout<<"\nMenit Parkir   :"<< menitparkir;
  
  // proses
  
  if (jamparkir==0){tarifparkir= 2000;  }
  else if (menitparkir==0){tarifparkir= 2000+((jamparkir-1)*1000);  }
  else { tarifparkir= 2000+(jamparkir*1000); }
  cout<<"\nTarif Parkir   :"<<tarifparkir;  
  
 
  
  return 0;
}
