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
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Print" << endl;
        cout << "4. Exit" << endl;
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
            cout << "Terima kasih Telah menggunakan program Queue" << endl;
            break;
        default:
            cout<<endl;
            cout << "Pilihan tidak ada" << endl;
            break;
        }
    } while (pilihan != 4);
}