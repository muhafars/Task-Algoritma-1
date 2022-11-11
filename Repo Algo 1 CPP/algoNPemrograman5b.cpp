// Minggu 5 tugas 1 Muhammad Fajri Assidiq - 221011402601

#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Silahkan Masukkan Sebuah Angka => ";
    cin >> number;
    int a = number;

    if (a > 50 && a != int())
    {
        number = number + 10;
        number = number + 10;
        cout << "Nilai Ditambah 10 + 10 => " << number << endl;
    }
    else if (a != int())
    {
        number = number + 10;
        cout << "Nilai Ditambah 10  => " << number << endl;
    }
    string nama = "Muhammad Fajri Assidiq - ";
    string nim = "NIM : 221011402601";
    cout << "Terima Kasih Sekian:) " << nama << nim;

    return 0;
}