#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

printf("Oyun Başlıyoorr!");

int tamAtis=0,yarimAtis=0,hicAtis=0;
int oyunSay = 0;
int randomSay=0;
int atisNum=0;
float toplamPuan=0;
srand ( time(NULL) );

while (oyunSay < 10)
{
    oyunSay = (oyunSay + 1);
    randomSay = rand() % 10 ;
    printf ("\nRastgele sayı seçildi.\nAtış yapabilirsiniz.\n");
    printf ("\n%d Numaralı atışı yapıyorsunuz.\n",oyunSay);
    printf("\nKaç numaraya atış yapmak istiyorsunuz?\n");
    scanf("%d",&atisNum);

    if(atisNum == randomSay){
    printf("Başarılı atış gerçekleştirdiniz, 10 puan kazandınız.");
    toplamPuan = toplamPuan + 10;
    printf("\nDüşman %dde idi.\n ",randomSay);
    tamAtis = tamAtis + 1;
    }
    
    else if (atisNum != randomSay && abs(randomSay-atisNum) < 0.5)
    {
    printf("Yakın atış gerçekleştirdiniz. 5 puan kazandınız.");
    toplamPuan = toplamPuan + 5;
    printf("\nDüşman %dde idi.\n ",randomSay);
    yarimAtis = yarimAtis + 1;
    }

    else  
    printf("Başarısız bir atış gerçekleştirdiniz.Puan kazanamadınız.");
    printf("\nDüşman %dde idi.\n ",randomSay);
    hicAtis = hicAtis + 1;
   
}
printf("\n %d Atıştan ,\n %d 'i Tam isabet,\n %d'i Yakın isabet,\n %d'ı Bşarısız atış",oyunSay,tamAtis,yarimAtis,(oyunSay-(yarimAtis+tamAtis)));
printf("\n Aldığınız Toplam Puan: %f",toplamPuan);

}
