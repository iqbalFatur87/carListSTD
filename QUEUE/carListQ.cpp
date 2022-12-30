#include "carListQ.h"

void createQueue(carQueue &Q)
{
    Q.head = NULL;
    Q.tail = NULL;
}
adrQ alokasiQ(string platNo, string brand, string nama, string tipe, int tahun)
{
    adrQ P = new elmCar;
    P->platNo = platNo;
    P->brand = brand;
    P->nama = nama;
    P->tipe = tipe;
    P->tahun = tahun;
    P->next = NULL;
    return P;
}
void dealokasiQ(adrQ &P)
{
    if (P != NULL)
    {
        delete P;
    } else {
        cout << "Dealokasi gagal" << endl;
    }
}
bool isEmptyQ(carQueue Q)
{
    if (Q.head == NULL)
    {
        return true;
    } else {
        return false;
    }
}
bool isFullQ(carQueue Q)
{
    adrQ P = new elmCar;
    if (P == NULL)
    {
        return true;
    } else {
        return false;
    }
}
void enqueueCar(carQueue &Q, adrQ P)
{
    if (isEmptyQ(Q))
    {
        Q.head = P;
        Q.tail = P;
    } else {
        Q.tail->next = P;
        Q.tail = P;
    }
}
void dequeueCar(carQueue &Q, adrQ &P)
{
    if (isEmptyQ(Q))
    {
        cout << "Antrian kosong" << endl;
    } else {
        P = Q.head;
        Q.head = Q.head->next;
        P->next = NULL;
    }
}
void printCarQ(carQueue Q)
{
    adrQ P = Q.head;
    if (isEmptyQ(Q))
    {
        cout << "Antrian kosong" << endl;
    } else {
        while (P != NULL)
        {
            cout << "Plat No: " << P->platNo << endl;
            cout << "Brand: " << P->brand << endl;
            cout << "Nama: " << P->nama << endl;
            cout << "Tipe: " << P->tipe << endl;
            cout << "Tahun: " << P->tahun << endl;
            cout << endl;
            P = P->next;
        }
    }
}

int countElmQ(carQueue Q)
{
    adrQ P = Q.head;
    int count = 0;
    while (P != NULL)
    {
        count++;
        P = P->next;
    }
    return count;
}
