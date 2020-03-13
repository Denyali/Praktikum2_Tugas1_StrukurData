#include <iostream>

using namespace std;

int main()
{
 int angka [10];
 int n,jml,total=0;

 cout<<"Berapa angka yang ingin dimasukan   :";
 cin>>jml;

 for (n=1; n<=jml; n++){
    cout<<"Angka Ke-"<<n+1<<"=";
    cin>>angka[n];
        total += angka[n];
 }
 cout<<"Total angka :"<<total<<endl;
    return 0;
}
