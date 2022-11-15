#include <iostream>
#include <string>
using namespace std;

int main(){
    //deklarasi
    int jum_beli, byr, diskon, jum[50], harga[50], total[50];
    string nama_barang;
    float total;

    cout << "Program C++ Kasir" << endl;
    cout << endl;
    cout << "Masukan Jumlah Beli : ";
    cin >> jum_beli; //memasukan jumlah pembelian
    cout << endl;

    for (int i=0; i<jum_beli;i++){
        cout << "Masukan Barang Ke : " << i+1 << endl;
        cout << endl;

        cout << "Nama Barang : ";
        cin >> nama_barang[i]; //input nama barang pada array
    }

}
