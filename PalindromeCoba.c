#include <stdio.h>
#include <string.h>
#include <ctype.h>

void head(){
    printf("\t\tProgram Palindrome Sentence\n");
    printf("Nama\t: I Dewa Gde Putra Anga Biara\n");
    printf("NIM\t: 2008561105\n");
}
int main(){
    char sntc[100] = {'\0'};
    char temp[100] = {'\0'};
    int n, i, j = 0;
    char p;
    do{
        head();
        printf("\nMasukkan kata atau kalimat : ");
        fflush(stdin);
        gets(sntc);
        n = strlen(sntc);

        for(i = 0; sntc[i]; i++){
            sntc[i] = tolower(sntc[i]);
        }

        for(i = n-1; i >= 0; i--){
            temp[j] = sntc[i];
            j++;
        }

        printf("Hasil : ");
        if(strcmp(sntc, temp) == 0)
            printf("%s merupakan kata/kalimat Palindrom", sntc);
        else
            printf("%s bukan merupakan kata/kaliamt Palindrom", sntc);

        getch();

        printf("\nApakah anda ingin mengulangi? (y/n)");
        fflush(stdin);
        scanf("%c", &p);
    } while( p == 'y' || p == 'Y');
    
    return 0;
}