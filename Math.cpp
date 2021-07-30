#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
LABEL_1:
string pass;
cout << "Masuk : ";
cin >> pass;
if(pass == "Sann") {
    cout << "Welcome Sann" << endl;
}else {
    cout << "Kata Kunci anda Salah" << endl;
    goto LABEL_1;
    
}
int choice;
cout << "\nLoading";
Sleep(800);
cout << ".";
Sleep(800);
cout << ".";
Sleep(800);
cout << ".";
system("cls");
cout << "\nLoading";
Sleep(800);
cout << ".";
Sleep(800);
cout << ".";
Sleep(900);
cout << ".\n";
Sleep(900);
cout << "\nB";
Sleep(800);
cout << "Y";
Sleep(800);
cout << " ";
Sleep(800);
cout << "S";
Sleep(800);
cout << "A";
Sleep(800);
cout << "N";
Sleep(800);
cout << "N";
Sleep(800);
system("cls");
choices:
cout << "\n1.Keliling Balok" << "\n" << endl;
cout << "\n2.Keliling Persegi Panjang" << "\n" << endl;
cout << "\n3.Keliling Persegi" << "\n" << endl;
cout << "\n4.Akar Kuadrat" << "\n" << endl;
cout << "\n5.Akar Pangkat" << "\n" << endl;
cout << "\n6.Perkalian" << "\n" << endl;
cout << "\nPilih Nomor : "; cin >> choice;
switch (choice) {
case 1:
double panjang,lebar,tinggi,total1,total2;
    cout << "Panjang Balok : ";
    cin >> panjang;
    cout << "Lebar Balok : ";
    cin >> lebar;
    cout << "Tinggi Balok : ";
    cin >> tinggi;
    cout << "Dengan Rumus K =" << panjang << "+" << lebar << "+" << tinggi;
    total1 = panjang + lebar + tinggi;
    total2 = 4 * total1;
    cout << "\nHasilnya Adalah " << total2 << endl;
    system("pause");;
break;
case 2:
double panjangPP,lebarPP,total3,total4;
    cout << "Panjang Persegi Panjang : ";
    cin >> panjangPP;
    cout << "Lebar Persegi Panjang : ";
    cin >> lebarPP;
    cout << "Dengan Rumus K = 2 x (" << panjangPP << "+" << lebarPP << ")";
    total3 = panjangPP + lebarPP;
    total4 = 2 * total3;
    cout << "\nHasil Nya Adalah " << total4 << endl;
    system("pause");;
break;
case 3:
double sisiP,total5;
    cout << "Sisi Persegi : ";
    cin >> sisiP;
    cout << "Dengan Rumus K = 4 x " << sisiP << endl;
    total5 = 4 * sisiP;
    cout << "\nHasilnya Adalah " << total5 << endl;
    system("pause");;
break;
case 4:
double angka1;
    cout << "Angka : "; cin >> angka1;
    cout << "Akar Kuadrat Dari " << angka1;
    cout << " adalah " << sqrt(angka1) << endl;
    system("pause");;
break;
case 5:
double angka2,pangkat;
    cout << "Angka : "; cin >> angka2;
    cout << "Pangkat : "; cin >> pangkat;
    cout << "Hasil " << angka2 << " pangkat " << pangkat;
    cout << " adalah " << pow(angka2, pangkat) << endl;
    system("pause");;
break;
case 6:
double kali1,kali2,kali3;
    cout << "Angka Pertama : "; cin >> kali1;
    cout << "Angka Ke Dua : "; cin >> kali2;
    kali3 = kali1 * kali2;
    cout << "Hasilnya adalah " << kali3 << endl;
    system("pause");;
break;
case 7:
    cout << "Test" << endl;
    system("pause");
break;
}
   }