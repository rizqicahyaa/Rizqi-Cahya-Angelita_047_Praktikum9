#include <iostream>

using namespace std;

int main(){
//Deklarasi dan inisialisasi variabel
//variabel nilai adalah jumlah bilangan atau batasan deret bilangan fibonacci yang dibuat
//variabel fibo_n sebagai bilangan fibonacci ke-n, fibo_n1 sebagai nilai pertama deret fibonacci, fibo_n2 sebagai nilai kedua deret fibonacci
//nilai awal fibo_n1 bernilai 1 dan fibo_n2 bernilai 0
    int nilai, fibo_n, fibo_n1=1, fibo_n2=0;

//Menampilkan nama program yang dibuat
    cout<<"    Program Fibonacci Menggunakan Perulangan \n";
    cout<<"\n";

//Perintah untuk input nilai
    cout<<"Masukkan Input Bilangan Fibonacci : ";
	cin>>nilai;

//Menghitung dengan rumus fibo_n = fibo_n1 + fibo_n2
    for (int loop =1; loop<nilai; loop++){
        fibo_n=fibo_n1+fibo_n2;
        fibo_n2=fibo_n1; //Mengupdate nilai yang akan digunakan pada perhitungan perulangan selanjutnya
        fibo_n1=fibo_n; //Mengupdate nilai yang akan digunakan pada perhitungan perulangan selanjutnya
    }

//Perintah untuk menampilkan hasil 
	cout<<"Nilai Bilangan Fibonacci : ";
	cout<<fibo_n;
	
    return 0;
}
