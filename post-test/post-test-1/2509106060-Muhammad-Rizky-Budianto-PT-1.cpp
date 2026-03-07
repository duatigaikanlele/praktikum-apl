#include <iostream>
#include <limits>
using namespace std;

int main() {
    string nama;
    string NIM;
    int salah = 0;

    while (true) {
    cout << "=============================\n";
    cout << "|       Halaman Login       |\n";
    cout << "=============================\n";
    cout << "Nama : "; cin >> nama;
    cout << "NIM : "; cin >> NIM;
    cout << " \n";
        if (nama == "budi" && NIM == "060") {
            cout << "Login berhasil, selamat datang " << nama << "!\n";
            break;
        } else {
            salah++;
            if (salah == 3) {
                cout << "Kesempatan habis! Program keluar.\n";
                return 0;
            }
            cout << "Login salah! Kesempatan ke-" << salah << "\n";
        }
    }
            
            while (true) {
            int pilihan;
            cout<<"=============================\n"
                <<"|      Metode konversi      |\n"
                <<"=============================\n"
                <<"|1. Jam ke menit dan detik  |\n"
                <<"|2. Menit ke jam dan detik  |\n"
                <<"|3. Detik ke jam dan menit  |\n"
                <<"|4. keluar                  |\n"
                <<"=============================\n"
                <<"Masukkan pilihan : "; cin >> pilihan;
            cout << " \n";
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
    }
            if (pilihan == 1) {
                while (true) {
                int jam;
                cout<<"=============================\n"
                    <<"|      Konversi jam         |\n"
                    <<"=============================\n"
                    <<"masukkan nilai jam : ";cin >> jam;
                cout<< " \n";    
                int menit = jam*60;
                int detik = menit*60;
                cout<<"=============================\n"
                    <<"|      Hasil konversi       |\n"
                    <<"=============================\n"
                    << jam <<"jam :\n" 
                    << menit << " menit\n" 
                    << detik << " detik\n"
                    <<"=============================\n"
                    << "ketik 0 jika ingin keluar atau ketik angka lain untuk melanjutkan : ";
                        int keluar;
                        cin >> keluar;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            continue;
                        }
                        if (keluar == 0) {
                            break;
                        } else { 
                            continue;
                        }
                }
            } else if (pilihan == 2) {
                while (true) {
                int menit;
                cout<<"=============================\n"
                    <<"|      Konversi menit       |\n"
                    <<"=============================\n"
                    <<"masukkan nilai menit : ";cin >> menit;
                cout<< " \n";    
                int jam = menit/60;
                int detik = menit*60;
                cout<<"=============================\n"
                    <<"|      Hasil konversi       |\n"
                    <<"=============================\n"
                    << menit <<"menit :\n" 
                    << jam << " jam\n" 
                    << detik << " detik\n"
                    <<"=============================\n"
                    << "ketik 0 jika ingin keluar atau ketik angka lain untuk melanjutkan : ";
                        int keluar;
                        cin >> keluar;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            continue;
                        }
                        if (keluar == 0) {
                            break;
                        } else { 
                            continue;
                        }
                }
            } else if (pilihan == 3) {
                while (true) {
                int detik;
                cout<<"=============================\n"
                    <<"|      Konversi detik       |\n"
                    <<"=============================\n"
                    <<"masukkan nilai detik : ";cin >> detik;
                cout<< " \n";    
                int menit = detik/60;
                int jam = menit/60;
                cout<<"=============================\n"
                    <<"|      Hasil konversi       |\n"
                    <<"=============================\n"
                    << detik <<"detik :\n" 
                    << jam << " jam\n" 
                    << menit << " menit\n"
                    <<"=============================\n"
                    << "ketik 0 jika ingin keluar atau ketik angka lain untuk melanjutkan : ";
                        int keluar;
                        cin >> keluar;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            continue;
                        }
                        if (keluar == 0) {
                            break;
                        } else { 
                            continue;
                        }
                }
            } else if (pilihan == 4) {
                break;
            } else {
                cout << "Pilihan tidak valid!\n";
            }
            }
        }