#include <stdio.h>
#include <string.h>

struct data{
    char singkat[55], bener[55];
};

int main(){
    data dat[105];
    FILE *file = fopen("testdata.in", "r");
    int jumlah;
    fscanf(file, "%d\n", &jumlah);
    for (int i = 0; i < jumlah; i++)
    {
        fscanf(file, "%[^#]#%[^\n]\n", dat[i].singkat, dat[i].bener);
    }
    int tc;
    fscanf(file, "%d\n", &tc);
    for (int t = 0; t < tc; t++)
    {
        char kalimat[105];
        char kata[105][55];
        fscanf(file,"%[^\n]\n", kalimat);
        int lenght = strlen(kalimat);
        
    }
    
}