#include <stdio.h>

int main () {
    double Hakhir,Diskon,Hawal;

    scanf("%lf %lf", &Diskon, &Hakhir);
    Hawal = (Hakhir * 100) / (100 - Diskon);
    printf("$%.2lf\n", Hawal);
    scanf("%lf %lf", &Diskon, &Hakhir);
    Hawal = (Hakhir * 100) / (100 - Diskon);
    printf("$%.2lf\n", Hawal);
    scanf("%lf %lf", &Diskon, &Hakhir);
    Hawal = (Hakhir * 100) / (100 - Diskon);
    printf("$%.2lf\n", Hawal);
    scanf("%lf %lf", &Diskon, &Hakhir);
    Hawal = (Hakhir * 100) / (100 - Diskon);
    printf("$%.2lf\n", Hawal);
}