#include <iostream>
#define SIZE 10
using namespace std;

//Mendeklarasikan fungsi void input
void input(string nama, string nim){
	cout << "Nama Mahasiswa \t\t: " << nama << endl;
	cout << "NIM Mahasiswa \t\t: " << nim << endl;
}

int main(){
	string nama, nim, nama_matkul[SIZE];
	int nilai [SIZE], jml, i, j, temp, maks;
	float total, ipk;
	char menu;
	
	cout<< "========== DATA MAHASISWA ==========" << endl;
	cout << "Masukkan Nama Mahasiswa: ";
	cin >> nama;
	cout << "Masukkan NIM Mahasiswa: ";
	cin >> nim;
	cout << "Jumlah Nilai yang akan diinput (max 10): ";
	cin >> jml;
	
	//Pointer Array
	int (*array)[1];
	array = new int [jml][1];
	for (int a = 0; a < 1; a++){
		for (i = 0; i < jml; i++){
			cout << endl;
			cout << "Masukkan Nama Mata Kuliah: ";
			cin >> nama_matkul[i];
			cout << "Nilai Mata Kuliah " << nama_matkul[i] << ": ";
			cin >> nilai[i];
			total += nilai[i];
		}
	}
	
	cout << endl;
	input(nama, nim);
	cout << "Total Nilai \t\t: " << total;
		
	//Menghitung IPK
	ipk = total / jml * 0.02;
	cout << endl;
	cout << "IPK Mahasiswa \t\t: " << ipk << endl;
	
	delete array[1];
	
	//Menu Metode Sorting
	cout << "\nPilih Metode Pengurutan Nilai di Bawah Ini! (Masukkan angka)\n";
	cout << "1. Bubble Sort Ascending\n";
	cout << "2. Bubble Sort Descending\n";
	cout << "3. Insertion Sort Ascending\n";
	cout << "4. Insertion Sort Descending\n";
	cout << "5. Selection Sort Ascending\n";
	cout << "6. Selection Sort Descending\n";
	cout << "Jawab: ";
	cin >> menu;
	
	switch (menu){
		case '1':
			for (i = 0; i < (jml - 1); i++){
				for (j = 0; j < (jml - 1); j++){
					if (nilai[j] > nilai [j + 1]){
						temp = nilai[j];
						nilai[j] = nilai[j + 1];
						nilai[j + 1] = temp;
					}
				}
			}
			cout << "\nDaftar Nilai Mahasiswa\n";
			cout << "Pengurutan Bubble Sort Ascending\n";
			for (i = 0; i < jml; i++){
				cout << "Nilai Mata Kuliah " << "\t: ";
				cout << nilai[i] << endl;
				}
			break;
		case '2':
			for (i = 0; i < (jml - 1); i++){
				for (j = 0; j < (jml - 1); j++){
					if (nilai[j] < nilai[j + 1]){
						temp = nilai[j];
						nilai[j] = nilai[j + 1];
						nilai[j + 1] = temp;
					}
				}
			}
			cout << "\nDaftar Nilai Mahasiswa\n";
			cout << "Pengurutan Bubble Sort Descending\n";
			for (i = 0; i < jml; i++){
				cout << "Nilai Mata Kuliah " << "\t: ";
				cout << nilai[i] << endl;
				}
			break;
		case '3':
			for (i = 0; i < jml; i++){
				temp = nilai[i];
				j = i - 1;
				while (nilai[j] > temp && j >= 0){
					nilai[j + 1] = nilai[j];
					j--;
				}
				nilai[j + 1] = temp;
			}
			cout << "\nDaftar Nilai Mahasiswa\n";
			cout << "Pengurutan Insertion Sort Ascending\n";
			for (i = 0; i < jml; i++){
				cout << "Nilai Mata Kuliah " << "\t: ";
				cout << nilai[i] << endl;
				}
			break;
		case '4':
			for (i = 0; i < jml; i++){
				temp = nilai[i];
				j = i - 1;
				while (nilai[j] < temp && j >= 0){
					nilai[j + 1] = nilai[j];
					j--;
				}
				nilai[j + 1] = temp;
			}
			cout << "\nDaftar Nilai Mahasiswa\n";
			cout << "Pengurutan Insertion Sort Descending\n";
			for (i = 0; i < jml; i++){
				cout << "Nilai Mata Kuliah " << "\t: ";
				cout << nilai[i] << endl;
				}
			break;
		case '5':
			for (i = 0; i < jml; i++){
				maks = i;
				for (j = i + 1; j < jml; j++){
					if (nilai[maks] > nilai[j]){
						maks = j;
					}
					if (nilai[i] != nilai[maks]){
						temp = nilai[i];
						nilai[i] = nilai[maks];
						nilai[maks] = temp;
					}
				}
			}
			cout << "\nDaftar Nilai Mahasiswa\n";
			cout << "Pengurutan Selection Sort Ascending\n";
			for (i = 0; i < jml; i++){
				cout << "Nilai Mata Kuliah " << "\t: ";
				cout << nilai[i] << endl;
				}
			break;
		case '6':
			for (i = 0; i < jml; i++){
				maks = i;
				for (j = i + 1; j < jml; j++){
					if (nilai[maks] < nilai[j]){
						maks = j;
					}
					if (nilai[i] != nilai[maks]){
						temp = nilai[i];
						nilai[i] = nilai[maks];
						nilai[maks] = temp;
					}
				}
			}
			cout << "\nDaftar Nilai Mahasiswa\n";
			cout << "Pengurutan Selection Sort Descending\n";
			for (i = 0; i < jml; i++){
				cout << "Nilai Mata Kuliah " << "\t: ";
				cout << nilai[i] << endl;
				}
			break;
		default:
			cout << "Angka yang Anda masukkan salah!\n";
	}
	
	//Searching Metode Sequential Search
	cout << "===== Pencarian Nama Mata Kuliah =====\n";
	
	string caridata;
	int flag, m;
	cout << "Masukkan Nama Mata Kuliah: ";
	cin >> caridata;
	
	for (m = 0; m < jml; m++){
		if (nama_matkul[i].find(caridata, 0) != std::string::npos){
			cout << "Nama Mata Kuliah Ditemukan!\n";
		} else {
			cout << "Nama Mata Kuliah Tidak Ditemukan\n";
		}
	}
}