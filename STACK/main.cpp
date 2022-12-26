#include "carList.h"

int main(int argc, char const *argv[])
{
    printf("Selamat Datang di Program Stack CarList\n");
    printf("di buat oleh : Kelompok 21\n");
    printf("1. Muhamad Iqbal Faturohman (1302200016)\n");
    printf("2. Abdillah Hasan (1302200020)\n");
    std::cout<<std::endl;

    carList S;
    infoCar xC;

    createStack(S);
    int pilihan;
    do
    {
        std::cout<<std::endl;
        printf("Menu : \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Stack\n");
        printf("4. Cari Mobil berdasarkan brand\n");
        printf("5. Urutkan Mobil berdasarkan harga\n");
        printf("6. Urutkan Mobil berdasarkan tahun\n");
        printf("7. Hitung Mobil\n");
        printf("8. Hapus Stack\n");
        printf("9. Exit\n");
        std::cout<<std::endl;
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);
        switch(pilihan)
        {
            case 1:
                cout<<endl;
                printf("Masukkan Brand Mobil : ");
                cin >> xC.brandCar;
                printf("Masukkan Nama Mobil : ");
                cin >> xC.nameCar;
                printf("Masukkan Tipe Mobil : ");
                cin >> xC.typeCar;
                printf("Masukkan Tahun Mobil : ");
                cin >> xC.yearCar;
                printf("Masukkan Harga Mobil : $");
                cin >> xC.priceCar;
                push(S, xC);
                break;
            case 2:
                xC = pop(S);
                printf("Brand Mobil : %s \n", xC.brandCar.c_str());
                printf("Nama Mobil : %s \n", xC.nameCar.c_str());
                printf("Tipe Mobil : %s \n", xC.typeCar.c_str());
                printf("Tahun Mobil : %d \n", xC.yearCar);
                printf("Harga Mobil : %d \n", xC.priceCar);
                break;
            case 3:
                std::cout << "=================CAR LIST=================\n";
                printStack(S);
                break;
            case 4:
                cout<<endl;
                printf("Masukkan Brand Mobil : ");
                cin >> xC.brandCar;
                cout<<endl;
                for (int i = 0; i < countStack(S); i++)
                {
                    if (S.info[i].brandCar == xC.brandCar)
                    {
                        printf("=========================================\n");
                        printf("Nama Mobil : %s \n", S.info[i].nameCar.c_str());
                        printf("Tipe Mobil : %s \n", S.info[i].typeCar.c_str());
                        printf("Tahun Mobil : %d \n", S.info[i].yearCar);
                        printf("Harga Mobil : %d \n", S.info[i].priceCar);
                        printf("=========================================\n");
                    }
                }
                break;
            case 5:
                sortCarByPrice(S);
                printStack(S);
                printf("Mobil Telah diurutkan\n");
                break;
            case 6:
                sortCarByYear(S);
                printStack(S);
                printf("Mobil Telah diurutkan\n");
                break;
            case 7:
                printf("Jumlah Mobil : %d\n", countStack(S));
                break;
            case 8:
                printf("Apakah anda yakin ingin menghapus Stack ?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                printf("Masukkan Pilihan : ");
                scanf("%d", &pilihan);
                    if(pilihan == 1){
                        deleteStack(S);
                        printf("Stack Telah Dihapus\n");
                        break;
                    } else {
                        break;
                    }
            case 9:
                printf("Terima Kasih Telah Menggunakan Program Ini\n");
                break;
            default:
                printf("Pilihan Tidak Tersedia\n");
                break;
        }
    } while (pilihan != 9);

    return 0;
}
