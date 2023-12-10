#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int islem,sayac=0; //bu degerler main fonksiyonunda kullanilacak
FILE *kaynakDosya,*dosya; // programda kullanilacak iki dosya var
char karakter,kucukHarf,metin[1000],dosyaAdi[100]; int anahtar; // bu degerler sifreleme yaparken kullanilacak
int anahtar,i; //anahtar hem sifre hem desifre islemlerinde , i degeri ise her for dongusunde kullanilacak
char desifre_icin_kelime[1000],desifre[1000],karar; //bu degerler desifre islemi yaparken kullanilacak
int temizlemeKarari; //bu degerler dosyadaki sifreleri temizlemede kullanilacak
char icindekiler; int boyut; //bu degerler dosyadaki sifreleri gostermek icin kullanilacak



void alt() //alt satira gecmek icin bu fonsiyonu kullaniyoruz.
{
	printf("\n");
}

void sifreleYazdir()
{
	alt();alt();
	printf("--------------------------------------------"); alt();
	printf(" 1. METIN SIFRELE"); alt();
	printf(" 2. DOSYADAKI METNI SIFRELE"); alt();
	printf(" 3. MENUYE DON"); alt();
	printf("--------------------------------------------"); alt();alt();

	int islem;
	printf("YAPACAGIN ISLEMIN SAYISINI GIR : ");

	etiket2:
	while (scanf("%d", &islem) != 1)  //while dongusuyle kullanici sayi girene kadar dongu devam ettiriliyor. baþka deger girmesi engelleniyor.
	{
        printf("GECERSIZ BIR DEGER GIRDINIZ TEKRAR GIRINIZ : ");
        while (getchar() != '\n'); //eger kullanici sayi girmemisse deger siliniyor. ve tekrar deger isteniyor.
    }

	switch(islem) //kullanidan alinan islem degerine göre bu blogun icindekiler gerceklesiyor.
	{
	case 1: //1. METIN SIFRELE
		metinSifrele();
		main(); //menuye donuluyor.
		break;
	case 2:	//2. DOSYADAKI METNI SIFRELE
		dosyadanSifrele();
		main();
		break;
	case 3: //3. MENUYE DON
		main();
		break;
	default: //eger 1,2,3 ten farkli bir sayi girilmisse uyari veriliyor.
		printf("GECERSIZ BIR DEGER GIRDINIZ TEKRAR GIRINIZ : ");
		goto etiket2; //ve tekrar deger istemek icin etiket kismina donuluyor.
		break;
	}
}

void metinSifrele()
{
	alt();
	printf("METIN GIR : ");
	gets(metin);
	gets(metin);
	alt();

	printf("ANAHTAR GIR : ");
	while (scanf("%d", &anahtar) != 1)  //while dongusuyle kullanici sayi girene kadar dongu devam ettiriliyor. baþka deger girmesi engelleniyor.
	{
        printf("GECERSIZ BIR DEGER GIRDINIZ TEKRAR GIRINIZ : ");
        while (getchar() != '\n'); //eger kullanici sayi girmemisse deger siliniyor. ve tekrar deger isteniyor.
    }
    dosya=fopen("sifrelerim.rtf","a"); //sifrelerim dosyasina ekleme yapmak icin "a" olarak aciyoruz.
    fprintf(dosya,"SIFRELI KELIME : "); //dosyanýn içine yazdirmak icin fprintf kullaniyoruz.
    for(i=0;i<strlen(metin);i++) //0. indisten baslayarak son indise(strlen ile dizinin uzunlugunu buluyoruz) kadar
	{
		if(isalpha(metin[i])) //eger harf ise
	    {
	    	kucukHarf = tolower(metin[i]); //tolower ile kucuk harfe ceviriyoruz.
			kucukHarf -= 'a'; //harfin a harfine gore konumunu buluyoruz.
			kucukHarf += anahtar; //harfi anahtar kadar ilerleterek sifreliyoruz.
			kucukHarf = kucukHarf % 26; //z harfini gecince basa donmesi icin 26 dan kalanini aliyoruz.
			kucukHarf += 'a'; //harfi tekrar asýl harf setine donduruyoruz.
			fprintf(dosya,"%c",kucukHarf); //sifrelenmis karakteri dosyaya yazdiriyoruz.

	    }

	    else //harf degilse
		{
			 fprintf(dosya,"%c",metin[i]); //sifrelemeden dosyaya yazdiriyoruz.
		}

	}

    fprintf(dosya,"\n YUKARIDAKI KOD ICIN KAYDIRMA ANAHTARI : ");
    fprintf(dosya,"%d\n\n",anahtar);
    fclose(dosya); //sifrelerim dosyasini kapatiyoruz.
    alt();
    printf("METNINIZ SIFRELENDI VE DOSYAYA KAYDEDILDI.");

    alt();alt();
}

void dosyadanSifrele()
{
	alt();

	printf("(orn: C:\\Users\\Emine\\Desktop\\input 1.txt)");
	alt();
	printf("DOSYA ADINI GIRIN : ");
	gets(dosyaAdi);
	etiket3:
	gets(dosyaAdi);

    kaynakDosya = fopen(dosyaAdi, "r"); //adini girdigimiz dosyayi "r" okumak icin aciyoruz.

    if(kaynakDosya==NULL) //eger dosya bulunamiyorsa
    {
    	alt();
    	printf("DOSYA BULUNAMADI. ADI DOGRU YAZDIGINIZDAN EMIN OLUNUZ.\nDOSYA ADINI GIRIN : ");
    	memset(dosyaAdi, 0, sizeof(dosyaAdi)); //dosyaAdi dizisini sifirliyoruz.
    	goto etiket3; //dosya adini tekrar istemek icin basa donuyoruz.
	}

	else if(kaynakDosya!=NULL) //eger dosya bulunduysa
	{
		printf("ANAHTAR GIR : ");
		while (scanf("%d", &anahtar) != 1) //while dongusuyle kullanici sayi girene kadar dongu devam ettiriliyor. baþka deger girmesi engelleniyor.
		{
        	printf("GECERSIZ BIR DEGER GIRDINIZ TEKRAR GIRINIZ : ");
        	while (getchar() != '\n'); //eger kullanici sayi girmemisse deger siliniyor. ve tekrar deger isteniyor.
    	}

    	dosya=fopen("sifrelerim.rtf","a"); //sifrelerim dosyasina ekleme yapmak icin "a" olarak aciyoruz.
    	fprintf(dosya,"SIFRELI KELIME : "); //dosyanýn içine yazdirmak icin fprintf kullaniyoruz.
    	while((karakter=fgetc(kaynakDosya))!=EOF) //kullanicidan aldigimiz dosyanin icindeki son karaktere kadar tum karakterleri almak icin
    	{
    		if(isalpha(karakter)) //eger harf ise
	    	{
	    		kucukHarf = tolower(karakter); //tolower ile kucuk harfe ceviriyoruz.
				kucukHarf -= 'a'; //harfin a harfine gore konumunu buluyoruz.
				kucukHarf += anahtar; //harfi anahtar kadar ilerleterek sifreliyoruz.
				kucukHarf = kucukHarf % 26; //alfabenin sinirlari icinde tutmak icin 26 dan kalanini aliyoruz.
				kucukHarf += 'a';  //harfi tekrar asýl harf setine donduruyoruz.
				karakter=kucukHarf;
	    	}
	    	if(karakter=='\n') //alt satira gecme isareti desifreleme kisminda yanlisa sebep oluyor.
	    	{
	    		karakter='\t'; //bu yuzden onu bosluk karakteriyle degistiryoruz.
			}
    		fputc(karakter, dosya); //sifreledigimiz karakterleri dosyaya ekliyoruz.
		}
		fprintf(dosya,"\n YUKARIDAKI KOD ICIN KAYDIRMA ANAHTARI : ");
    	fprintf(dosya,"%d\n\n",anahtar);
		fclose(kaynakDosya); //kullanicinin girdigi dosyayi kapatiyoruz.
		fclose(dosya); //sifrelerim dosyasini kapatiyoruz.

		memset(dosyaAdi, 0, sizeof(dosyaAdi)); //dosyaAdi dizisini sifirliyoruz.

		alt();
    	printf("METNINIZ SIFRELENDI VE DOSYAYA KAYDEDILDI.");
    	alt();
	}
}


void desifreIslemleri()
{
	alt();alt();

	printf("KAYITLI SIFRELERINIZI GORMEK ICIN 'y' GIRINIZ : ");
	scanf("%s",&karar);
	if (karar=='y' || karar=='Y') kayitliSifreler(); //kullanici y karakterini girerse sifre dosyasini acmak icin bu kisma gidilir.

	printf("DESIFRE ETMEK ISTEDIGIN KELIMEYI GIR : ");
	gets(desifre_icin_kelime);
	gets(desifre_icin_kelime); //kullanicidan desifrelenecek olan kelime aliniyor ve dizinin icine konuluyor.

	printf("DESIFRE ETMEK ISTEDIGIN KELIMENIN ANAHTARINI GIR : ");
	while (scanf("%d", &anahtar) != 1) //while dongusuyle kullanici sayi girene kadar dongu devam ettiriliyor. baþka deger girmesi engelleniyor.
	{
        printf("GECERSIZ BIR DEGER GIRDINIZ TEKRAR GIRINIZ : ");
        while (getchar() != '\n'); //eger kullanici sayi girmemisse deger siliniyor. ve tekrar deger isteniyor.
    }


	printf("DESIFRE OLAN KELIME SUDUR : ");

	for(i=0;i<strlen(desifre_icin_kelime);i++) //dizinin 0. indisinden son indisine(strlen ile dizinin uzunlugu bulunur) kadar
	{
		if(isalpha(desifre_icin_kelime[i])) //eger harf ise
	    {
	    	kucukHarf = tolower(desifre_icin_kelime[i]); //buyukse kucuk harfe cevriliyor.
			kucukHarf -= 'a'; //harfi asýl harf setine donduruyoruz.
			kucukHarf -= anahtar; //harfi anahtar kadar gerileterek desifreliyoruz.
			while (kucukHarf < 0) //a dan geriye gittiyse
			{
                kucukHarf += 26;  //sona donmesi icin 26 fazlasini aliyoruz.
            }

			kucukHarf = kucukHarf % 26; //alfabenin sinirlari icinde tutmak icin 26 dan kalanini aliyoruz.
			kucukHarf += 'a';  //harfin a harfine gore konumunu buluyoruz.
			printf("%c",kucukHarf); //desifrelenmis harf yazdiriliyor.

	    }

	    else //harf degilse
		{
			 printf("%c",desifre_icin_kelime[i]); //oldugu gibi yazdirilir.
		}

	}
    alt();alt();alt();
}

void temizle()
{

	alt();

	printf("DOSYADAKI BUTUN SIFRELER TEMIZLENECEKTIR!");
	alt();
	printf("SILMEK ISTEDIGINIZE EMINSENIZ 0'A BASINIZ : ");
	scanf("%d",&temizlemeKarari);

	if(temizlemeKarari==0) //eger 0 girdiyse (silmek istiyorsa)
	{
		dosya=fopen("sifrelerim.rtf","w"); //sifrelerim dosyasi "w" okumak icin aciliyor.
		fclose(dosya); //ve hemen kapatiliyor. icindekiler silinmis oluyor.

		printf("DOSYADAKI SIFRELER BASARIYLA SILINDI!");
    }

	else //0'dan baska karakter girdiyse
	{
		printf("ISLEM IPTAL EDILDI!");
        while (getchar() != '\n');
	}



   alt();alt();alt();
}

void kayitliSifreler()
{

	dosya = fopen("sifrelerim.rtf","r"); //sifrelerim dosyasini "r" okumak icin aciyoruz.
	fseek(dosya,0,SEEK_END); //imleci dosyanýn sonuna goturur.
    boyut = ftell(dosya); //imlecin konumunu gosterir.
    fclose(dosya); //sifrelerim dosyasini kapatiyoruz.

    if(boyut==0) //eger dosya bossa imlec de 0 konumundadir. bu yuzden boyut 0 dir.
    {
        alt();alt();
	    printf("KAYITLI SIFRENIZ BULUNMAMAKTADIR!");
	    alt();alt();
    }

    else //eger dosya bos degilse
	{
	printf("--------------------------------------------"); alt();
	printf("---------------  SIFRELERIM  ---------------"); alt();
	printf("--------------------------------------------"); alt();alt();

	dosya = fopen("sifrelerim.rtf","r"); //sifrelerim dosyasini "r" okumak icin aciyoruz.
	do
	{
	    icindekiler=getc(dosya); //karakterleri tek tek dosyadan aliyoruz.
	    printf("%c",icindekiler); //ekrana yazdiriyoruz.
	}while(icindekiler!=EOF); //son karaktere kadar
	fclose(dosya); //sifrelerim dosyasini kapatiyoruz.
	printf("--------------------------------------------\n"); alt();


    }
}

int main()
{
	system("COLOR C"); //yazilarin rengini acik kirmizi yapmak icin

	sayac++;
	if(sayac==1) //giris yazisinin yalnizca uygulamayi ilk actigimizda gozukmesi icin
	{
		alt();
		printf("--- SIFRELEME UYGULAMASINA HOS GELDINIZ ----"); alt();
	}

	alt();
	printf("--------------------------------------------"); alt();
	printf("------------------| MENU |------------------"); alt();
	printf("--------------------------------------------"); alt();
	printf(" 1. SIFRELEME ISLEMLERI"); alt();
	printf(" 2. DESIFRE ISLEMLERI"); alt();
	printf(" 3. DOSYADAKI SIFRELERI TEMIZLE"); alt();
	printf(" 4. KAYITLI SIFRELERI GOSTER"); alt();
	printf(" 5. PROGRAMI KAPAT"); alt();
	printf("--------------------------------------------"); alt();alt();


	printf("YAPACAGIN ISLEMIN SAYISINI GIR : ");

	etiket:
	while (scanf("%d", &islem) != 1) //while dongusuyle kullanici sayi girene kadar dongu devam ettiriliyor. baþka deger girmesi engelleniyor.
	{
        printf("GECERSIZ BIR DEGER GIRDINIZ TEKRAR GIRINIZ : ");
        while (getchar() != '\n'); //eger kullanici sayi girmemisse deger siliniyor. ve tekrar deger isteniyor.
    }

	switch(islem) //kullanidan alinan islem degerine göre bu blogun icindekiler gerceklesiyor.
	{
		case 1: //1. SIFRELEME ISLEMLERI
			sifreleYazdir();
			main(); //menuye donuluyor.
			break;
		case 2: //2. DESIFRE ISLEMLERI
			desifreIslemleri();
			main();
			break;
		case 3: //4. DOSYADAKI SIFRELERI TEMIZLE
			temizle();
			main();
			break;
		case 4: //3. KAYITLI SIFRELERI GOSTER
			kayitliSifreler();
			main();
			break;
		case 5: //5. PROGRAMI KAPAT
			exit(1);
			break;
		default: //eger 1,2,3,4,5 den farkli bir sayi girilmisse uyari veriliyor.
			printf("GECERSIZ BIR DEGER GIRDINIZ TEKRAR GIRINIZ : ");
			goto etiket; //ve tekrar deger istemek icin etiket kismina donuluyor.
			break;
	}

	return 0;
}

