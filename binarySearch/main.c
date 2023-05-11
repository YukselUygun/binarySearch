#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
    int dizi[]={4,8,3,84,47,76,9,24,68};
    int boyut = sizeof(dizi) / sizeof(int);

    //Önce bubble Sort algoritmasý ile dizi sýralanýr
    int i,j;
    int temp;
    for ( i=0; i < boyut-1; i++) {
        for ( j=0; j < boyut-i-1; j++) {
            if (dizi[j] > dizi[j+1]) {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }
    printf("Arama yapilacak dizi={4,8,3,84,47,76,9,24,68}\n\n");
    printf("Dizi bubbleSort ile siralandi\n\n");
    printf("Dizinin siralanmis hali ={3,4,8,9,24,47,68,76,84}\n\n");
    int arananSayi;
    printf("Lutfen aranacak sayiyi girin: ");
    scanf("%d", &arananSayi);

    // Binary Search algoritmasý ile arama
    int ilk = 0, son = boyut - 1, orta;
    while (ilk <= son) {
        orta = (ilk + son) / 2;
        if (dizi[orta] == arananSayi) {
            printf("%d sayisi siralanmis dizinin %d. elemanidir.\n", arananSayi, orta+1);
            return 0;
        }
        else if (dizi[orta] < arananSayi) {
            ilk = orta + 1;
        }
        else {
            son = orta - 1;
        }
    }
    printf("%d sayisi dizide bulunamadi.\n", arananSayi);
    
    return 0;
}


