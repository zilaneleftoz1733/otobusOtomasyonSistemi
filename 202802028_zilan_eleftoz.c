#include <stdio.h>
#include <stdlib.h>

      int menu, secim;                    int sefer_no[10];
      char sefer_baslangic_sehri[50][20];
      int islem;                          int sefer_baslangic_saati[10];   int sayac_otobus=0;
      int firma_girisi;                   float sefer_varis_saati[10];     char seferleri_listele[20][50];      int sefer_basla_sayac;
      int musteri_girisi;                 float sefer_varis_sehri[50][20]; int sayac_sefer=0;                   int yolculuk_suresi[10];
      int cikis;                          int otobus_ekle ;                char sefer_rezervasyonu[50];         int sefer_var_sayac;
      int istenilen_toplam_hasilat[50];   int otobus_modeli[50][4];        char rezervasyon[50];                int musteri_basi_ucret_sayac;
      int musteri_basi_ucret[50] ;        int sefer_bilgisi_ekle[50];      float ad[20];                        int sayac_rezervasyon;
      int kapasite[50];                   int i,j[];                       float soyad[20];                     int sayac_sefer_listele;
      int otobus_no[50];                  int secilen_otobus;              int koltuk_no[10];                   int temp;
      int personel_sayisi ;                                                float otobus_duzergahi;              int otobus_sefer_bilgileri[20];
      int rezervasyon_numarasi[5];                                                                               int sayac_otobus_sefer_bilgileri;





     void otobus_ekleme_menusu ()
 {

            sayac_otobus= sayac_otobus + 1;

            printf("otobus kapasite:\n");
            scanf("%d", &kapasite[sayac_otobus]);

            printf("otobus modeli:\n");
            scanf("%s", &otobus_modeli[sayac_otobus]);

        if (kapasite[sayac_otobus] >=30){

            printf ("uzun yol otobusudur ve personel sayisi 3 tur .\n");
        }
        else {
           printf("kisa yol otobusudur ve personel sayisi 2 dir.\n") ;

}
            printf("otobus no:%d\n\n",sayac_otobus);
            otobus_no[sayac_otobus]= sayac_otobus;
        }

    void sefer_ekleme_menusu()

    {
        sayac_sefer= sayac_sefer+1;

       printf("sefer_bilgisi_ekle:\n");


       printf("sefer no :\n");
       scanf("%d",&sefer_no[sayac_sefer]);

       printf("otobus no:\n");
       scanf("%d",&secilen_otobus);

       printf("sefer baslangic saati:\n");
       scanf("%d",&sefer_baslangic_saati[sayac_sefer]);


       printf("sefer varis saati:\n");
       scanf("%d",&sefer_varis_saati[sayac_sefer]);

       printf("sefer baslangic sehrini giriniz:\n");
       scanf("%s",&sefer_baslangic_sehri[sayac_sefer]);

       printf("sefer varis sehrini giriniz:\n");
       scanf("%s",&sefer_varis_sehri[sayac_sefer]);

       printf("istenilen toplam hasilat:\n");
       scanf("%d",&istenilen_toplam_hasilat[sayac_sefer]);

       printf("musteri basi ucret:\n");
       scanf("%d",&musteri_basi_ucret[sayac_sefer]);

       scanf("%d ,&secim");
    }


    void sefer_koltuk_bilgisi()
    {

          printf("sefer_koltuk_bilgisi ekle :");


        int i=4,j;

            while(i<20)
           {

          j=4;
           while(j<=i){

            printf("[]");
            j++;
}

           printf("\n\n");
           i++;
}
    }

    void firma_girisi_menusu();


    int main(){


         printf ("menu\n1:firma girisi\n2:musteri girisi\n3:cikis\n\n\n");
         printf ("islemi seciniz:");
         scanf("%d",&menu);

      switch(menu)
      {
        case 1:{
           system("cls");
           printf("firma_girisi:");
           printf("\n1: otobus ekle\n2: sefer bilgisi ekle\n3:sefer\koltuk bilgisi\n4:bir ust menuye don\n\n\n");
           scanf("%d", &secim);
        switch(secim) {

         case 1 :
    {

            otobus_ekleme_menusu ();
            break;
    }
            case 2:
          {

        sefer_ekleme_menusu();
        break;
          }
            case 3:
          {
            sefer_koltuk_bilgisi();
            break;

        }
            }
}

       void  musteri_girisi_menusu();

        printf("musteri_girisi:");
        printf("\n1:seferleri listele\n2:sefer rezervasyonu yap\n3:bir ust menuye don \n4:rezervasyonu goster\n\n\n");
        scanf("%d",&secim);
        musteri_girisi:
       case 2:
       {


        printf("musteri_girisi:");
        printf("\n1:seferleri listele\n2:sefer rezervasyonu yap\n3:bir ust menuye don \n4:rezervasyonu goster\n\n\n");
        scanf("%d",&secim);

      switch (secim) {



   case 1: {

      printf("seferleri listele:\n");


      int sefer_no[5],i,j,temp;
      for (i=0;i<5;i++){

        printf("sefer_no icin sayi giriniz:\n");
        scanf("%d",&sefer_no[i]);

      }

      for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(sefer_no[i]>sefer_no[j]){
                temp=sefer_no[i];
                sefer_no[i]>sefer_no[j];
                sefer_no[j]=temp;

            }


        }

}
      printf("sirali diziniz\n:");
      for(i=0;i<5;i++){
        printf("%d",&sefer_no[i]);


      }

     printf("otobus sefer bilgileri soyledir:");


       printf("\n1:Ad=ZİLAN\n2:Soyad=ELEFTOZ\n3:Otobus Duzergahi Diyarbakir'dan Manisaya dir\n4:Baslangic saati =10.00\n5:Varis saati =20.00\n6 :kisi basi ucret=100 tl\n7:");

       goto musteri_girisi ;
       break;


   }

   case 2:
    {
        sayac_rezervasyon= sayac_rezervasyon+1;
      printf("sefer_rezervasyonu yap:\n");

       printf("adiniz:\n");
       scanf("%s",&ad[sayac_rezervasyon]);
       printf("soyad:\n");
       scanf("%s",&soyad[sayac_rezervasyon]);
       printf("koltuk_no:\n");
       scanf("%d",&koltuk_no[sayac_rezervasyon]);

        break;
}

    case 3:
        {


          printf("bir ust menuye don:\n")  ;

         break;

}


   case 4:
       {


        printf("rezervasyon:\n");


        printf("rezervasyon numaranizi giriniz:");
        scanf("%d",&rezervasyon_numarasi[sayac_rezervasyon]);
        
        printf("\n1:AD=ZiLAN\n2:SOYAD=ELEFTOZ\n3:koltuk no=5:");



       break;

       }
}
   break ;
       }
     case 3:
         {
            printf ("cikis");
            break;
         }

    default:
        printf("bilinmeyen islem");
        break ;
}
     return 0;
}








