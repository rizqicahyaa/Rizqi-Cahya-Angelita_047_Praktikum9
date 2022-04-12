#include <iostream>

using namespace std;

//Fungsi rekrusif
int fibonacci(int nilai /*parameter dengan variabel nilai adalah jumlah bilangan atau batasan deret bilangan fibonacci yang dibuat */) {
//Kondisi ketika nilai sama dengan 0 atau sama dengan 1 maka mengembalikan nilai 
  if (nilai == 0 || nilai ==1){
    return nilai;
  } else { 
//Kondisi ketika nilai tidak sama dengan 0 atau 1 maka akan mengembalikan dirinya sendiri dengan menggunakan rumus fibonacci
    return (fibonacci(nilai-1) + fibonacci(nilai-2));
  }
}

int main() {
//deklarasi nilai
  int input_nilai;
  
//Menampilkan nama program yang dibuat
  cout<<"    Program Fibonacci Menggunakan Perulangan \n";
  cout<<"\n";
  
//Perintah untuk memasukkan input
  cout << "Masukkan Input Bilangan Fibonacci : ";
  cin >> input_nilai;
  
// Perintah untuk menampilkan hasil
  cout<< "Nilai Bilangan Fibonacci : ";
  cout<<fibonacci(input_nilai);
  getchar();
  return 0;
}
