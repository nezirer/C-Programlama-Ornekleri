#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();

void vergi_degisim();


int istek;
float urun_fiyati = 0;
float vergi_temel = 0.056 , vergi_kitap = 0.04 , vergi_luks = 0.196  ;
int veri_degisim;
float vergi_temel_degisim , vergi_kitap_degisim , vergi_luks_degisim  ;


int main(){

printf("\n\nVergili fiyat hesaplama programına hoş geldiniz.\n\n");

while (1){
    menu();
    scanf("%d",&istek);

    switch (istek)
    {
    case 1:
        printf("\n\nSeçiminiz Temel Gıda, Hesaplamak İstediğiniz Ürün Fiyatını Giriniz.\n\n");
        scanf("%f",&urun_fiyati);
        
        printf("\n\nÜrünün vergili toplam fiyatı : %.2f", urun_fiyati+(urun_fiyati*vergi_temel ));
        break;
    
    case 2:
        printf("\n\nSeçiminiz Kırtasiye Ürünleri, Hesaplamak İstediğiniz Ürün Fiyatını Giriniz.\n\n");
        scanf("%f",&urun_fiyati);
        
        printf("\n\nÜrünün vergili toplam fiyatı : %.2f", urun_fiyati+(urun_fiyati*vergi_kitap ));
        break;

    
    case 3:
        printf("\n\nSeçiminiz Lüks Tüketim, Hesaplamak İstediğiniz Ürün Fiyatını Giriniz.\n\n");
        scanf("%f",&urun_fiyati);
        
        printf("\n\nÜrünün vergili toplam fiyatı : %.2f", urun_fiyati+(urun_fiyati*vergi_luks ));
        break;
    
    
    
    
    case 9:
        printf("\n\nKaç numaranın vergisini düzenlemek istiyorsunuz?\n\n1-Teml Gıda\n2-Kırtasiye Ürünleri\n3-Lüks tüketim.");
        scanf("%d",&veri_degisim);
        vergi_degisim(veri_degisim);

        break;
            
    default:
        
        printf("\n\nLütfen geçerli bir sayı girişi yapınız.\n\n");
        break;
    }
}


return 0;

}


void menu(){


    printf("\n\nNe vergisi hesaplamak istiyorsunuz?\n\n1-Temel Gıda\n2-Kırtasiye ürünleri(Kitap)\n3-Lüks tüketim\n9-Vergi oranlarını düzenle.");

}

void vergi_degisim(){


    switch (veri_degisim)
        {
        case 1:
            printf("Şuanki temel gıda vergi oranı :  %%%.2f",vergi_temel*100);
            printf("Kaç ile değişim yapmak istiyorsunuz");
            scanf("%f",&vergi_temel_degisim);
            printf("\n\nDeğişim başarılı\n\n.");
            break;
        
        case 2:
            printf("Şuanki kırtasiye vergi oranı :  %%%.2f",vergi_kitap*100);
            printf("Kaç ile değişim yapmak istiyorsunuz");
            scanf("%f",&vergi_kitap_degisim);
            printf("\n\nDeğişim başarılı\n\n.");
            break;

        case 3:
            printf("Şuanki lüks tüketim vergi oranı :  %%%.2f",vergi_luks*100);
            printf("Kaç ile değişim yapmak istiyorsunuz");
            scanf("%f",&vergi_luks_degisim);
            printf("\n\nDeğişim başarılı\n\n.");
            break;
        
        default:
           printf("\n\nLütfen geçerli bir sayı girişi yapınız.\n\n");
            break;
        }

}





