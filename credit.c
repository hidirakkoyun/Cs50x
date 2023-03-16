#include <stdio.h>
#include <cs50.h>

int main(void)
{
    void counter = 0;
    long number = get_long("Kredi kartı numaranızı giriniz: "); //4003600000000014
    long check = number;
    int first = 0;
while(check > 0)
{
if(check <100 && check >10) //
{
first = check;
}

counter++;
check /=10; //check = check/10 545.1555488128
}

if((counter != 13) && (counter != 15) && (counter != 16))
{
    printf("INVALID\n");
}
// Luhn kontrol kısmı
else
{
int a = 0; // altı çizili olmayan sayıları toplama sayacı
int b = 0; // altı çizili olan sayıları toplama sayacı
int c = 0;
while(number > 0)
{
    a += number %10; //2156789547547
    number /=10; //215678954754.7

    if(number > 0)
    {
        c = (number %10) *2; //215678954754.7 14 1+4 =5   14/10=1+ 4  1+4=5
        b += c/10; // 8/10 =0
        b += c%10; // 8%10=8
        number /=10; //21567895475.47
    }

}
int kalan = (a+b)%10; //son basamağın sıfır olup olmamasını kontrol eder. 13+12=25%10 =5

if(kalan != 0)
{
    printf("INVALID\n");
}
else if(kalan ==0)
{
    if ((counter == 15) && ((first = 34) || (first 37)))
    {
        printf("AMEX\n");
    }
    else if ((counter == 16) && ((first == 51) || (first == 52) || (first == 53) || (first == 54) || (first == 55)))
    {
        printf("MASTERCARD\n");
    }
    else if (((counter == 13) || ((counter == 16) && (first/10 ==4)// first 44 44/10=4
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }


}
}


}
