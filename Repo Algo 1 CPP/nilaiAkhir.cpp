#include <iostream>

using namespace std;

int main(){
	
	//Deklarasi variabel
	int sks;
	float absensi, tugas, uts, uas, nilai_akhir;
	char nilai_huruf;
	string mataKuliah, nim, namaMhs;
	
	cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
	cout<<"----------------------------------------"<<endl;
	
	//input Data 
	
	cout<<"Masukan NIM: ";
	getline(cin, nim);
	cout<<"Masukkan Nama Mahasiswa: ";
	getline(cin, namaMhs);
	cout<<"Masukkan Mata Kuliah: ";
	getline(cin, mataKuliah);	
	cout<<"SKS: ";
	cin>>sks;
		//input nilai
	cout<<"Masukan Nilai Absensi : ";
	cin>>absensi;
	cout<<"Masukan Nilai Tugas : ";
	cin>>tugas;
	cout<<"Masukan Nilai UTS : ";
	cin>>uts;
	cout<<"Masukan Nilai UAS : ";
	cin>>uas;
	
	//Hitung sesuai rumus
	nilai_akhir = ((absensi*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4));
	
	if (nilai_akhir>80){
		nilai_huruf='A';
	}else if (nilai_akhir>=70){
		nilai_huruf='B';
	}else if(nilai_akhir>=60){
		nilai_huruf='C';
	}else if (nilai_akhir>=50){
		nilai_huruf='D';
	}else {
		nilai_huruf='E';
	}
	
	
	//Proses output
	cout<<"\n Nama Mata Kuliah: "<< mataKuliah<<endl;
	cout<<" SKS : " << sks<<endl;
	cout<<"========================================="<<endl;
	cout<< "NIM"<<"|" << "Nama" <<"|"<< "Jumlah Hadir"<<"|"<< "UTS"<<"|"<< "UAS"<<"|"<< "Nilai Angka"<<"|"<< "Grade"<<"|"<< endl;
	cout<<nim<<"|"<<namaMhs<<"|"<<absensi<<"|"<<uts<<"|"<<uas<<"|"<<nilai_akhir<<"|"<<nilai_huruf<<"|"<<endl;
	cout<<"========================================="<<endl;
	return 0;
	
}