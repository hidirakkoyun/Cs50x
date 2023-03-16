#include <stdio.h>
#include <cs50.h>

int main(void){

    float lira = get_float("Para üstünü giriniz :");
    int kurus = round(lira * 100);
    int sayi = 0;

    while (kurus >= 25)
    {
        
        kurus = kurus - 25;
        sayi = sayi + 1;

    }

    while ( kurus>=10 ){

        kurus = kurus - 10;
        sayi = sayi +1;
    }

    while ( kurus >=5 )
    {
        kurus -= 5;
        sayi = sayi +1;
    }

    while (kurus >=1)
    {
        kurus -=1;
        sayi++;
    }
    printf("Gereken madeni para sayısı %i\n" , sayi);
}

