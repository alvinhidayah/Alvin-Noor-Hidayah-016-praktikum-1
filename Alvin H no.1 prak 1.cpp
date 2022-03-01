#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
    int i, n, data[50];
    // disini saya menggunakan float karena nilainya belum tentu bulat//
    float ratarata,jumlah;
    
    cout<<"Banyaknya Data = ";
    cin>>n;
    cout<<"\n";
    // disini dilakukan loop//
    for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jumlah += data[i];
        }
        
    ratarata=jumlah/n;
        
    cout<<"\n";
    cout<<"Banyaknya Data = "<<n<<"\n";
    cout<<"Nilai Total = "<<jumlah<<"\n";
    cout<<"Nilai Rata-rata = "<<ratarata<<"\n";
  getch();
  }
