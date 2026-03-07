#include <iostream>
#include <limits>
using namespace std;

struct paskibra {
    string lomba;
    string atasan;
    string bawahan;
    string ikat_pinggang;
    string sepatu;
    string kepala;
    string atribut;
};

#define MAX_PASKIB 100
paskibra paskib[MAX_PASKIB];
string keluar, nama, NIM, cari_lomba;
int panjang = 0;
int salah = 0;
int pilihan;
bool ketemu = false;

int main() {

    while (true) {
    cout << "=========================================\n";
    cout << "            SISTEM DATA PASKIB           \n";
    cout << "=========================================\n";
    cout << "               HALAMAN LOGIN             \n";
    cout << "-----------------------------------------\n";
    cout << " Nama : "; cin >> nama;
    cout << " NIM  : "; cin >> NIM;
    cout << "-----------------------------------------\n";
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

    do {
        cout << "\n";
        cout << "=========================================\n";
        cout << "                MENU UTAMA               \n";
        cout << "=========================================\n";
        cout << " 1. Lihat Data Paskib\n";
        cout << " 2. Tambah Data\n";
        cout << " 3. Update Data\n";
        cout << " 4. Hapus Data\n";
        cout << " 5. Keluar\n";
        cout << "-----------------------------------------\n";
        cout << " Pilih menu : ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
            case 1:
            if (panjang == 0) {
                cout << "Data masih kosong\n";
            } else {
                for (int i = 0; i < panjang; i++) {
                  for (int i = 0; i < panjang; i++) {
                    cout << "\n=========================================\n";
                    cout << "  " << paskib[i].lomba << "\n";
                    cout << "=========================================\n";
                    cout << " Atasan       : " << paskib[i].atasan << "\n";
                    cout << " Bawahan      : " << paskib[i].bawahan << "\n";
                    cout << " Ikat Pinggang: " << paskib[i].ikat_pinggang << "\n";
                    cout << " Sepatu       : " << paskib[i].sepatu << "\n";
                    cout << " Kepala       : " << paskib[i].kepala << "\n";
                    cout << " Atribut      : " << paskib[i].atribut << "\n";
                    cout << "-----------------------------------------\n";
                    }
                }
                 cout << "ketik enter untuk melanjutkan ";cin.ignore();cin.get();
            }
                break;

            case 2:
            do {
                cout << "\n=========================================\n";
                cout << "            TAMBAH DATA PASKIB           \n";
                cout << "=========================================\n";
                cout << "nama lomba ? > "; getline(cin, paskib[panjang].lomba);
                cout << "\nPerlengkapan yang tersedia:\n";
                cout << "-----------------------------------------\n";
                cout << " Atasan       : biru bordir | hitam | gold | pelaut\n";
                cout << " Bawahan      : hitam polos | hitam las kuning\n";
                cout << " Ikat Pinggang: kopel emas | kopel putih\n";
                cout << " Sepatu       : hitam hak | hitam polos | putih polos\n";
                cout << " Kepala       : pet putih | pet hitam | blangkon\n";
                cout << " Atribut      : hivolet emas | hivolet hitam\n";
                cout << "-----------------------------------------\n";
                cout << "atasan ? > ";getline(cin, paskib[panjang].atasan);
                cout << "bawahan ? > ";getline(cin, paskib[panjang].bawahan);
                cout << "ikat pinggang ? > ";getline(cin, paskib[panjang].ikat_pinggang);
                cout << "sepatu ? > ";getline(cin, paskib[panjang].sepatu);
                cout << "kepala ? > ";getline(cin, paskib[panjang].kepala);
                cout << "atribut ? > ";getline(cin, paskib[panjang].atribut);
                panjang++;
                    cout << "Data berhasil ditambahkan\n";
                    cout << "ketik 0 jika ingin keluar atau ketik sembarang untuk melanjutkan : ";
                        getline(cin, keluar);
            } while (keluar != "0");
                break;

            case 3:
            cout << "\n=========================================\n";
            cout << "             UPDATE DATA PASKIB          \n";
            cout << "=========================================\n";
            do {
                if (panjang == 0) {
                cout << "tidak ada data untuk diupdate\n";
            } else {
                for (int i = 0; i < panjang; i++) {
                    cout << "\n=========================================\n";
                    cout << "  " << paskib[i].lomba << "\n";
                    cout << "=========================================\n";
                    cout << " Atasan       : " << paskib[i].atasan << "\n";
                    cout << " Bawahan      : " << paskib[i].bawahan << "\n";
                    cout << " Ikat Pinggang: " << paskib[i].ikat_pinggang << "\n";
                    cout << " Sepatu       : " << paskib[i].sepatu << "\n";
                    cout << " Kepala       : " << paskib[i].kepala << "\n";
                    cout << " Atribut      : " << paskib[i].atribut << "\n";
                    cout << "-----------------------------------------\n";
                }

                cout << "masukkan nama lomba yang ingin diupdate ? > ";getline(cin, cari_lomba);
                for (int i = 0; i < panjang; i++) {
                    if (paskib[i].lomba == cari_lomba) {
                        ketemu = true;
                        cout << "nama lomba ? > "; getline(cin, paskib[i].lomba);
                        cout << "\nPerlengkapan yang tersedia:\n";
                        cout << "-----------------------------------------\n";
                        cout << " Atasan       : biru bordir | hitam | gold | pelaut\n";
                        cout << " Bawahan      : hitam polos | hitam las kuning\n";
                        cout << " Ikat Pinggang: kopel emas | kopel putih\n";
                        cout << " Sepatu       : hitam hak | hitam polos | putih polos\n";
                        cout << " Kepala       : pet putih | pet hitam | blangkon\n";
                        cout << " Atribut      : hivolet emas | hivolet hitam\n";
                        cout << "-----------------------------------------\n";
                        cout << "atasan ? > ";getline(cin, paskib[i].atasan);
                        cout << "bawahan ? > ";getline(cin, paskib[i].bawahan);
                        cout << "ikat pinggang ? > ";getline(cin, paskib[i].ikat_pinggang);
                        cout << "sepatu ? > ";getline(cin, paskib[i].sepatu);
                        cout << "kepala ? > ";getline(cin, paskib[i].kepala);
                        cout << "atribut ? > ";getline(cin, paskib[i].atribut);
                        cout << "Data berhasil diupdate\n";
                    }
                }
                if (!ketemu) {
                    cout << "data tidak ditemukan\n";
                }
            }
                cout << "ketik 0 jika ingin keluar atau ketik sembarang untuk melanjutkan : ";
                        getline(cin, keluar);
            } while (keluar != "0");
                break;

            case 4:
            cout << "\n=========================================\n";
            cout << "             HAPUS DATA PASKIB           \n";
            cout << "=========================================\n";
                do {
                if (panjang == 0) {
                cout << "tidak ada data untuk dihapus\n";
            } else {
                for (int i = 0; i < panjang; i++) {
                    cout << "\n=========================================\n";
                    cout << "  " << paskib[i].lomba << "\n";
                    cout << "=========================================\n";
                    cout << " Atasan       : " << paskib[i].atasan << "\n";
                    cout << " Bawahan      : " << paskib[i].bawahan << "\n";
                    cout << " Ikat Pinggang: " << paskib[i].ikat_pinggang << "\n";
                    cout << " Sepatu       : " << paskib[i].sepatu << "\n";
                    cout << " Kepala       : " << paskib[i].kepala << "\n";
                    cout << " Atribut      : " << paskib[i].atribut << "\n";
                    cout << "-----------------------------------------\n";
                }
                cout << "masukkan nama lomba yang ingin dihapus ? > ";getline(cin, cari_lomba);
                for (int i = 0; i < panjang; i++) {
                    if (paskib[i].lomba == cari_lomba) {
                        ketemu = true;
                        for (int j = i; j < panjang - 1; j++) {
                            paskib[j] = paskib[j + 1];
                        }
                        panjang--;
                        cout << "Data berhasil dihapus\n";
                    }
                }
                if (!ketemu) {
                    cout << "data tidak ditemukan\n";
                }
            }
                cout << "ketik 0 jika ingin keluar atau ketik sembarang untuk melanjutkan : ";
                        getline(cin, keluar);
            } while (keluar != "0");
                break;

            case 5:
            cout << "\n=========================================\n";
            cout << "        TERIMA KASIH TELAH MENGGUNAKAN   \n";
            cout << "            PROGRAM DATA PASKIB          \n";
            cout << "=========================================\n";
            return 0;
            
            default:cout << "Pilihan tidak valid, silakan coba lagi.\n";
            }
        } while (pilihan != 5);
    }