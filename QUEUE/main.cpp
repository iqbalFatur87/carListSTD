#include "carListQ.h"

int main()
{
    carQueue Q;
    adrQ P;
    string platNo, brand, nama, tipe;
    int tahun;
    int pilihan;

    createQueue(Q);
    do
    {
        cout << "1. Masukkan Antrian Mobil " << endl;
        cout << "2. Hapus Antrian Mobil" << endl;
        cout << "3. Cetak Antrian Mobil" << endl;
        cout << "4. Cari Antrian Mobil berdasarkan plat nomor" << endl;
        cout << "5. Hitung Antrian Mobil" << endl;
        cout << "6. Exit" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan)
        {
        case 1:
            cout<<endl;
            cout << "Plat No: ";
            cin >> platNo;
            cout << "Brand: ";
            cin >> brand;
            cout << "Nama: ";
            cin >> nama;
            cout << "Tipe: ";
            cin >> tipe;
            cout << "Tahun: ";
            cin >> tahun;
            cout << endl;

            P = alokasiQ(platNo, brand, nama, tipe, tahun);
            enqueueCar(Q, P);
            break;
        case 2:
            cout<<endl;
            dequeueCar(Q, P);
            dealokasiQ(P);
            cout<<"Antrian dihapus"<<endl;
            break;
        case 3:
            cout<<endl;
            printCarQ(Q);
            break;
        case 4:
            cout<<endl;
            cout << "Masukkan Plat No: ";
            cin >> platNo;
            cout << endl;
            P = Q.head;
            while (P != NULL)
            {
                if (P->platNo == platNo)
                {
                    cout << "Plat No: " << P->platNo << endl;
                    cout << endl;
                    break;
                } else {
                    P = P->next;
                }
            }
            if (P == NULL)
            {
                cout << "Plat No tidak ditemukan" << endl;
            }
            break;
        case 5:
            cout<<endl;
            cout << "Jumlah Antrian: " << countElmQ(Q) << endl;
            break;
        case 6:
            cout<<endl;
            cout << "Terima kasih Telah menggunakan program Queue" << endl;
            break;
        default:
            cout<<endl;
            cout << "Pilihan tidak ada" << endl;
            break;
        }
    } while (pilihan != 6);

    return 0;
}