#include    <iostream>
using namespace std;
int main(){
    int sayi1;
    int sayi2;
    cout<<"Birinci sayiyi giriniz"<<endl;
    cin>>sayi1;
    cout<<"ikinci Sayiyi giriniz"<<endl;
    cin>>sayi2;
    int toplam = sayi1 + sayi2;
    int fark = sayi1 - sayi2;
    int carpim = sayi1 * sayi2;
    double bolum = static_cast<double>(sayi1) / sayi2;
    cout <<"toplam:"<<toplam<<endl;
    cout<<"fark:"<<fark<<endl;
    cout<<"Carpim:"<<carpim<<endl;
    cout<<"Bolum:"<<bolum<<endl;
    return 0;
}
