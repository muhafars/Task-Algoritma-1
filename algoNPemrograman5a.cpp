// Minggu 5 tugas 1 Muhammad Fajri Assidiq - 221011402601

#include <iostream>
using namespace std;

int main()
{
    // Mendeklaasikan sebuah variable
    int number;
    // Mencetak sebuah string
    cout << "Silahkan Masukkan Sebuah Angka => ";
    // Meminta input dari user
    cin >> number;
    // Mendeklarasikan variable a sebagai number
    int a = number;

    // if else percabangan
    if (a > 50 && a != int())
    {
        number = number + 25;
        cout << "Nilai Ditambah 25 => " << number << endl;
    }
    else if (a < 50 && a != int())
    {
        number = number + 10;
        cout << "Nilai Ditambah 10 => " << number << endl;
    }
    else
    {
        cout << "Tolong Masukkan Angka" << endl;
    }
    string nama = "Muhammad Fajri Assidiq - ";
    string nim = "NIM : 221011402601";
    cout << "Terima Kasih Sekian:) " << nama << nim;

    return 0;
}