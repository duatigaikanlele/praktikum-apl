#include <iostream>
#include <limits>
#include <conio.h>
#include <cstdlib>
using namespace std;

struct paskibra {
    int id;
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

void data(paskibra *paskib, int panjang) {
    for (int i = 0; i < panjang; i++) {
        cout << "\n=========================================\n";
        cout << "  " << paskib[i].lomba << "\n";
        cout << "=========================================\n";
        cout << " ID           : " << paskib[i].id << "\n";
        cout << " Atasan       : " << paskib[i].atasan << "\n";
        cout << " Bawahan      : " << paskib[i].bawahan << "\n";
        cout << " Ikat Pinggang: " << paskib[i].ikat_pinggang << "\n";
        cout << " Sepatu       : " << paskib[i].sepatu << "\n";
        cout << " Kepala       : " << paskib[i].kepala << "\n";
        cout << " Atribut      : " << paskib[i].atribut << "\n";
        cout << "-----------------------------------------\n";
    }
}   

void readData() {
    if (panjang == 0) {
        cout << "Data masih kosong\n";
        cout << "ketik enter untuk melanjutkan ";getch();
    } else {
        data(&paskib[0], panjang);
        cout << "ketik enter untuk melanjutkan ";getch();
    }
}

void tambahData(paskibra paskib[], int &panjang) {
    cout << "\n=========================================\n";
    cout << "            TAMBAH DATA PASKIB           \n";
    cout << "=========================================\n";
    cout << "ID ? > "; cin >> paskib[panjang].id;
    cin.ignore();
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
    if (keluar != "0") {
        tambahData(paskib, panjang);
    }
}

void updateData() {
    cout << "\n=========================================\n";
    cout << "             UPDATE DATA PASKIB          \n";
    cout << "=========================================\n";
    if (panjang == 0) {
        cout << "tidak ada data untuk diupdate\n";
    } else {
        data(&paskib[0], panjang);
        cout << "masukkan nama lomba yang ingin diupdate ? > ";getline(cin, cari_lomba);
        for (int i = 0; i < panjang; i++) {
            if (paskib[i].lomba == cari_lomba) {
                ketemu = true;
                cout << "nama lomba ? > "; getline(cin, paskib[i].lomba);
                cout << "atasan ? > ";getline(cin, paskib[i].atasan);
                cout << "bawahan ? > ";getline(cin, paskib[i].bawahan);
                cout << "ikat pinggang ? > ";getline(cin, paskib[i].ikat_pinggang);
                cout << "sepatu ? > ";getline(cin, paskib[i].sepatu);
                cout << "kepala ? > ";getline(cin, paskib[i].kepala);
                cout << "atribut ? > ";getline(cin, paskib[i].atribut);
                data(&paskib[0], panjang);
                cout << "Data berhasil diupdate\n";
            }
        }
        if (!ketemu) {
            cout << "data tidak ditemukan\n";
        }
    }
    cout << "ketik 0 jika ingin keluar atau ketik sembarang untuk melanjutkan : ";
    getline(cin, keluar);
    if (keluar != "0") {
        updateData();
    }
}

void hapusData() {
    cout << "\n=========================================\n";
    cout << "             HAPUS DATA PASKIB           \n";
    cout << "=========================================\n";
    if (panjang == 0) {
        cout << "tidak ada data untuk dihapus\n";
    } else {
        data(&paskib[0], panjang);
        cout << "masukkan nama lomba yang ingin dihapus ? > ";getline(cin, cari_lomba);
        for (int i = 0; i < panjang; i++) {
            if (paskib[i].lomba == cari_lomba) {
                ketemu = true;
                for (int j = i; j < panjang - 1; j++) {
                    paskib[j] = paskib[j + 1];
                }
                panjang--;
                data(&paskib[0], panjang);
                cout << "Data berhasil dihapus\n";
            }
        }
        if (!ketemu) {
            cout << "data tidak ditemukan\n";
        }
    }
    cout << "ketik 0 jika ingin keluar atau ketik sembarang untuk melanjutkan : ";
    getline(cin, keluar);
    if (keluar != "0") {
        hapusData();
    }
}

void swap(paskibra &a, paskibra &b) {
    paskibra temp;
    temp = a;
    a = b;
    b = temp;
}

void bubblesort(paskibra paskib[], int panjang) {
    for (int i = 0; i < panjang - 1; i++) {
        for (int j = 0; j < panjang - i - 1; j++) {
            if (paskib[j].lomba < paskib[j + 1].lomba) {
                swap(paskib[j], paskib[j + 1]);
            }
        }
    }
    readData();
}

void selectionsort(paskibra paskib[], int panjang) {
    for (int i = 0; i < panjang - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < panjang; j++) {
            if (paskib[j].lomba < paskib[min_idx].lomba) {
                min_idx = j;
            }
        }
        swap(paskib[i], paskib[min_idx]);
    }
    readData();
}

void quickSort(paskibra paskib[], int low, int high) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    string pivot = paskib[mid].lomba;
    int i = low, j = high;
    while (i <= j) {
        while (paskib[i].lomba > pivot) i++;
        while (paskib[j].lomba < pivot) j--;
        if (i <= j) {
            swap(paskib[i], paskib[j]);
            i++; j--;
        }
    }
    if (low < j) quickSort(paskib, low, j);
    if (i < high) quickSort(paskib, i, high);
}

void linearsearch(paskibra *paskib, int panjang) {
    int cariID;
    bool ketemu = false;
    cout << "Masukkan ID: ";
    cin >> cariID;
    cin.ignore();
    for (int i = 0; i < panjang; i++) {
        if (paskib[i].id == cariID) {
            cout << "Data ditemukan: " << paskib[i].lomba << endl;
            ketemu = true;
        }
    }
    if (!ketemu) cout << "Data tidak ditemukan\n";
    getch();
}

void binarysearch(paskibra *paskib, int panjang) {
    string cari;
    cout << "Masukkan nama lomba: ";
    getline(cin, cari);
    int left = 0, right = panjang - 1;
    bool ketemu = false;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (paskib[mid].lomba == cari) {
            cout << "Data ditemukan: " << paskib[mid].lomba << endl;
            ketemu = true;
            break;
        } else if (paskib[mid].lomba < cari) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    if (!ketemu) cout << "Data tidak ditemukan\n";
    getch();
}

void cls() {
    system("cls");
}

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
            cout << "Login berhasil\n";
            getch();
            break;
        } else {
            salah++;
            if (salah == 3) return 0;
            cout << "Login salah\n";
        }
    }

    do {
        cls();
        cout << "=========================================\n";
        cout << "                MENU UTAMA               \n";
        cout << "=========================================\n";
        cout << " 1. Lihat Data\n";
        cout << " 2. Tambah Data\n";
        cout << " 3. Update Data\n";
        cout << " 4. Hapus Data\n";
        cout << " 5. Sorting Descending\n";
        cout << " 6. Sorting Ascending\n";
        cout << " 7. Quick Sort\n";
        cout << " 8. Cari ID\n";
        cout << " 9. Cari Lomba\n";
        cout << " 10. Keluar\n";
        cout << " Pilih: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: readData(); break;
            case 2: tambahData(paskib, panjang); break;
            case 3: updateData(); break;
            case 4: hapusData(); break;
            case 5: bubblesort(paskib, panjang); break;
            case 6: selectionsort(paskib, panjang); break;
            case 7: quickSort(paskib, 0, panjang - 1); readData(); break;
            case 8: linearsearch(paskib, panjang); break;
            case 9: binarysearch(paskib, panjang); break;
            case 10: return 0;
        }
    } while (pilihan != 10);
}