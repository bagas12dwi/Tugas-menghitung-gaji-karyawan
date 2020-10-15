#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int upahPerjam, lembur, jamKerja, gaji, jamKerjaLebih;
    string nama;
    char golongan;

    cout << "Masukkan Nama Karyawan    : ";
    cin >> nama;
    cout << "Masukkan Golongan         : ";
    cin >> golongan;
    cout << "Masukkan Jumlah Jam Kerja : ";
    cin >> jamKerja;

    if(golongan == 'A' || golongan == 'a'){
        upahPerjam = 5000;
        gaji = upahPerjam * jamKerja;
    } else if(golongan == 'B' || golongan == 'b'){
        upahPerjam = 7000;
        gaji = upahPerjam * jamKerja;
    } else if(golongan == 'C' || golongan == 'c'){
        upahPerjam = 8000;
        gaji = upahPerjam * jamKerja;
    } else if(golongan == 'D' || golongan == 'd'){
        upahPerjam = 10000;
        gaji = upahPerjam * jamKerja;
    } else {
        cout << "Golongan yang anda inputkan tidak sesuai" << endl;
        ExitProcess(0);
    }

    if (jamKerja > 48){
        lembur = 4000;
        jamKerjaLebih = jamKerja - 48;
        gaji = gaji + (jamKerjaLebih * lembur);
    } else {
        gaji = gaji;
    }

    cout << "-----------HASIL-----------";
    cout << "\nNama Karyawan : "<< nama;
    cout << "\nGolongan      : "<< golongan;
    cout << "\nJam Kerja     : "<< jamKerja;
    cout << "\nTotal Gaji    : Rp."<< gaji;
}
