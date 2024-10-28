#include <stdio.h>

main() {
    int tinggi_badan[10]={175,165,166,157,184,156,163,176,171,169};
    int length = sizeof(tinggi_badan)/sizeof(*tinggi_badan);
    int sum=0;

    for(int i=0;i<length;i++) {
        sum+=tinggi_badan[i];
    }

    float rata_rata = (float)sum/(float)length;

    printf("Rata-rata tinggi badan: %.2f\n",rata_rata);
}