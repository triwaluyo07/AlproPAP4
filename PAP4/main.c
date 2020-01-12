#include "header.h"
///Nama : Tri Waluyo
///NIM : A11.2017.10097
///Kelas : A11.4203
int main()
{
    printf("===========================================\n");
    printf("\t\t Tugas 1 \n");
    printf("===========================================\n");
    int arr1[6]= { 3, 5, 38, 0, 44, 47 };
    int arr2[7] = { 3, 0, 44, 38, 0, 5, 47 };
    int arr3[8] = { 2, 15, 0, 0, 0, 26, 27, 36 };
    int arr4[7] = { 15, 36, 27, 0, 0, 2, 26 };

    kompres_array(arr1,6);
    kompres_array(arr2,7);
    kompres_array(arr3,8);
    kompres_array(arr4,7);
    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 2 \n");
    printf("===========================================\n");

    int data[5]={15,36,27,2,26};
    int data2[5]={3,44,38,5,47};

    selection_sort1(data,5);
    printf("\n\n");
    selection_sort1(data2,5);

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 3 \n");
    printf("===========================================\n");

    int data3[5]={3,44,38,5,47};
    int data4[5]={15,36,27,2,26};
    selection_sort2(data3,5);
    printf("\n\n");
    selection_sort2(data4,5);
    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 4 \n");
    printf("===========================================\n");
    int arr5[5] = { 3, 44, 38, 5, 47 };
    int arr6[5] = { 15, 36, 27, 2, 26 };
    int hasil,hasil2;
    cetakArr(arr5,5);
    hasil=get_median(arr5,5);
    printf("Median Array 1: [%d]",hasil);
    puts("\n");

    cetakArr(arr6,5);
    hasil2=get_median(arr6,5);
    printf("Median Array 2: [%d]",hasil2);
    puts("\n");
    return 0;
}
