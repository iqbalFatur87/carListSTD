#include "carList.h"

int main()
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
        printf("1. Masukkan Mobil\n");
        printf("2. Hapus Mobil\n");
        printf("3. Print Mobil\n");
        printf("4. Cari Mobil berdasarkan brand\n");
        printf("5. Urutkan Mobil berdasarkan type\n");
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
                push(S, xC);
                break;
            case 2:
                cout<<endl;
                xC = pop(S);
                printf("Stack Telah di Pop\n");
                break;
            case 3:
                cout<<endl;
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
                        printf("=========================================\n");
                    }
                }
                break;
            case 5:
                cout<<endl;
                sortCarByType(S);
                printStack(S);
                printf("Mobil Telah diurutkan\n");
                break;
            case 6:
                cout<<endl;
                sortCarByYear(S);
                printStack(S);
                printf("Mobil Telah diurutkan\n");
                break;
            case 7:
                cout<<endl;
                printf("Jumlah Mobil : %d\n", countStack(S));
                break;
            case 8:
                cout<<endl;
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
                cout<<endl;
                printf("Terima Kasih Telah Menggunakan Program Ini\n");
                break;
            default:
                cout<<endl;
                printf("Pilihan Tidak Tersedia\n");
                break;
        }
    } while (pilihan != 9);

    return 0;
}
