#ifndef CARLISTQ_H_INCLUDED
#define CARLISTQ_H_INCLUDED

#include <iostream>

using namespace std;

typedef struct elmCar *adrQ;
typedef char infotypeQ;

struct elmCar{
    string platNo;
    string brand;
    string nama;
    string tipe;
    int tahun;
    adrQ next;
};

struct carQueue{
    adrQ head;
    adrQ tail;
};


void createQueue(carQueue &Q);
adrQ alokasiQ(string platNo, string brand, string nama, string tipe, int tahun);
void dealokasiQ(adrQ &P);
bool isEmptyQ(carQueue Q);
bool isFullQ(carQueue Q);
void enqueueCar(carQueue &Q, adrQ P);
void dequeueCar(carQueue &Q, adrQ &P);
void printCarQ(carQueue Q);


#endif // CARLISTQ_H_INCLUDED