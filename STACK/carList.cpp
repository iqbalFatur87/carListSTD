#include "carList.h"

infoCar generateCar(string brandCar, string nameCar, string typeCar , int yearCar, int priceCar)
{
    infoCar x;
    x.brandCar = brandCar;
    x.nameCar = nameCar;
    x.typeCar = typeCar;
    x.yearCar = yearCar;
    x.priceCar = priceCar;
    return x;
}
void createStack(carList &S)
{
    S.top = -1;
}
bool isEmpty(carList S)
{
    if(S.top == -1)
        return true;
    else
        return false;
}
bool isFull(carList S)
{
    if(S.top == 24)
        return true;
    else
        return false;
}
void push(carList &S, infoCar x)
{
    if(isFull(S))
        std::cout << "Stack Telah Penuh !!!\n";
    else
    {
        S.top++;
        S.info[S.top] = x;
    }
}
infoCar pop(carList &S)
{
    infoCar x;
    if(isEmpty(S))
        std::cout << "Stack Telah Kosong !!!\n";
    else
    {
        x = S.info[S.top];
        S.top--;
    }
    return x;
}
void printStack(carList S)
{
    for(int i = S.top; i >= 0; i--)
    {
        std::cout << "Brand Mobil : " << S.info[i].brandCar << std::endl;
        std::cout << "Nama Mobil : " << S.info[i].nameCar << std::endl;
        std::cout << "Tipe Mobil : " << S.info[i].typeCar << std::endl;
        std::cout << "Tahun : " << S.info[i].yearCar << std::endl;
        std::cout << "Harga : " << S.info[i].priceCar << std::endl;
        std::cout << "==========================================\n";
    }
}
int searchCarByBrand(carList S, infoCar x)
{
    int index = -1;
    for(int i = 0; i <= S.top; i++)
    {
        if(S.info[i].brandCar == x.brandCar)
        {
            index = i;
            break;
        }
    }
    return index;
}
void sortCarByPrice(carList &S)
{
    infoCar temp;
    for(int i = 0; i <= S.top; i++)
    {
        for(int j = i + 1; j <= S.top; j++)
        {
            if(S.info[i].priceCar > S.info[j].priceCar)
            {
                temp = S.info[i];
                S.info[i] = S.info[j];
                S.info[j] = temp;
            }
        }
    }
}
void sortCarByYear(carList &S)
{
    infoCar temp;
    for(int i = 0; i <= S.top; i++)
    {
        for(int j = i + 1; j <= S.top; j++)
        {
            if(S.info[i].yearCar > S.info[j].yearCar)
            {
                temp = S.info[i];
                S.info[i] = S.info[j];
                S.info[j] = temp;
            }
        }
    }
}
int countStack(carList S)
{
    int count = 0;
    for(int i = 0; i <= S.top; i++)
    {
        count++;
    }
    return count;
}
void deleteStack(carList &S)
{
    S.top = -1;
}