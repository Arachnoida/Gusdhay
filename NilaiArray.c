#include <stdio.h>

int main(){
    float nilai[7]={2.5, 1.7, 3.0, 4.2, 3.1, 7.3, 2.5};
    int length = sizeof(nilai) / sizeof(nilai[0]);
    float nilai_terkecil = nilai[0];
    int index = 0;

    for (index = 0; index < 7; index++)
    {
        if (nilai_terkecil > nilai[index])
        {
            nilai_terkecil = nilai[index];
        }
    }
    //Berikut adalah programnya
    printf("\t\n================================================================");
    printf("\t\n||        Program Menentukan Nilai Terkecil Dalam Array       ||");
    printf("\t\n================================================================");
       
    printf("\t\nDari nilai array = ");
   for (int index = 0; index < length; index++) {
        printf("%.1f | ", nilai[index]);
    }
    printf("\t\n================================================================");
    printf("\t\nNilai terkecil dalam array tersebut adalah : %.1f", nilai_terkecil);
    printf("\t\n================================================================");
    return 0;
}
