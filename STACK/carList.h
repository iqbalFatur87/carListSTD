#ifndef CARLIST_H_INCLUDED
#define CARLIST_H_INCLUDED

#include <iostream>

using namespace std;

struct car {
    string brandCar;
    string nameCar;
    string typeCar;
    int yearCar;
    int priceCar;
};

typedef car infoCar;
struct Stack {
    infoCar info[25];
    int top;
};

typedef Stack carList;

infoCar generateCar(string brandCar, string nameCar, string typeCar , int yearCar, int priceCar);
void createStack(carList &S);
bool isEmpty(carList S);
bool isFull(carList S);
void push(carList &S, infoCar x);
infoCar pop(carList &S);
void printStack(carList S);
int searchInfo(carList S, string brandCar, string nameCar, string typeCar , int yearCar, int priceCar);


#endif // CARLIST_H_INCLUDED