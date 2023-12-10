<h1>-> KAYDIRMALI SIFRE ALGORITMASI <- </h1> <br>
<h2>ALGORITMANIN AMACI: </h2> <br>
- Bu algoritmanın amacı, kullanıcıdan istenilen metnin yine kullanıcıdan istenen kaydırma anahtarının yardımıyla bir takım işlemlerle şifrelenmesidir.
<h2>KAYDIRMA ANAHTARI NEDİR?:</h2>
- Kaydırma anahtarı, alfabedeki harflerin yerini kaç birim kaydırılacağı ile ilgili işlemi yapmada kullanılan bir sayı değeridir.
<h2>NASIL ÇALIŞIR:</h2> </br>
1. Program çalıştırılır.</br>
2. Konsola gelen menüden bir sekme seçilir ve klavyeden bu sekmenin solundaki sıra numarası girilir ardından "enter" tuşlanır.</br>
3. Seçilen sekmeye göre şu işlemler yapılır: <br><br>

  <h3> A) <sub> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/26e0a385-6212-4860-a244-9a5a4838b89b" alt=sifrelemeIslemiSekmesi width=200 > </sub> </h3> <br> 
- Menüdeyken "1" tuşlanırsa "SIFRELEME ISLEMLERI" sekmesi çalışır.
- "SIFRELEME ISLEMLERI" sekmesinin de alt sekmeleri vardır:<br>
  <sub> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/288b10c9-d60c-4103-8254-4ea2fccbb333" alt=sifrelemeIslemiAltSekmeleri width=200 > </sub> <br>
- Bu sekmede de numaralandırma vardır, solundaki numara klavyeden girilir ardından "enter" tuşlanır. </br>
<h4> a) <sub> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/32bf737e-bd1f-407a-af4f-16588915185b" alt=metinSifrelemeSekmesi width=140 > </sub> </h4> </br>
<li> Bu işlem ile kullanıcıdan önce metin alır ardından kaydırma anahtarı ister ve kelimeyi şifreleyerek "sifrelerim.rtf" metin belgesine şifrelenmiş metni ve o metin için girilmiş kaydırma anahtarını not eder.</li>
<h4>  b) <sub> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/a38be26b-8eac-4d61-a2cb-ba77ee185d06" alt=DosyadakiMetniSifrelemeSekmesi width=200> </sub> </h4> </br>
<li> Bu işlem ile programın okuyabileceği bir dosya ismi klavyeden girilir, program dosyayı açar ve dosyadaki metni yine klavyeden alınan kaydırma anahtarına göre şifreleyip "sifrelerim.rtf" metin belgesine yazdırır. </br>  (<i>dosyanın nasıl ekleneceğiyle ilgili detaylı bilgi bilgilendirmenin sonunda mevcuttur</i>)</li>
<h4> c)<sub> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/a2af3584-7a5c-4206-95d6-392accce3525" alt=MenuyeDonmeSekmesi width=110>
</sub> </h4> </br>
<li> Bu işlem menüye geri döndürür.</li>

<h3> B) <sub> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/68e7dbbe-e6db-4f85-8086-21ecdf3c8c91" alt=DesifreIslemleriSekmesi width=200></sub></h3> </br>
- Menüdeyken "2" tuşlanırsa "DESIFRE ISLEMLERI" sekmesi açılır.
- Kullanıcı bu sekmeye geldiğinde önüne önce şifrelerini görmek istemesiyle ilgili bir bilgilendirme gelir. (<sub> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/98a048c5-085b-428a-b3be-1b3ba109fe29" alt=bahsedilenBilgilendirme width=300> </sub>)

<p>-Bu bilgilendirmede kullanıcı 'y' veya 'Y' girip "enter" tuşlarsa daha önceden kayıtlı şifreleri program "sifrelerim.rtf" dosyasından alarak getirir. </p>
- Program önce deşifre edilmek istenen kelimeyi veya kelime gruplarını klavyeden girmenizi ister, bu kelime "sifrelerim.rtf" dosyasında olmak zorunda değildir. </br>
- Ardından bu metin için kaydırma anahtarını sorar ve kaydırma anahtarı girilerek "enter" tuşlanır. </br>
- Bu işlemler tamamlanınca program deşifre olmuş metni konsola yazdıracaktır.

<h3> C) <sub> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/930ede41-5650-46d5-8fdf-5c6b83432be2" alt=dosyadakiSifreleriSilmeSekmesi width=250> </sub> </h3> </br>
- Menüdeyken "3" tuşlanırsa "DOSYADAKI SIFRELERI TEMIZLE" sekmesi açılır.
- Bu sekme "sifrelerim.rtf" dosyasındaki şifrelerin hepsini temizlemek içindir.
- Sekme ilk açıldığında bir uyarı yapılır. 
(<img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/c2ca0f5b-2241-435c-a739-ba8d1571009b" alt=uyari1 width=200> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/b98e524d-f637-4237-b10e-e53e78d49176" alt=uyari2 width=200 >)</br>
- Burada kullanıcı '0' girip "enter" tuşlarsa şifreler tümüyle temizlenir, farklı bir tuşa basması durumunda şifreler silinmez ve ana menüye dönülür.

<h3> D)<sub><img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/75fe90e4-4e29-440c-81c7-b426aabff38e" alt=kayitliSifreler width=220 </sub> </h3> </br>
- Menüdeyken "4" tuşlanırsa "KAYITLI SIFRELERI GOSTER" sekmesi açılır. </br>
- Bu sekme "sifrelerim.rtf" dosyasındaki şifreleri kaydırma anahtarlarıyla beraber konsola yazdırır.

<h3> E) <sub> <img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/b01f4700-a6b3-42ff-8cab-e4dd5ebe514e" alt=programiKapatSekmesi width=150 </sub> </h3> </br>
- Menüdeyken "5" tuşlanırsa "PROGRAMI KAPAT" sekmesi açılır. </br>
- Adından anlaşıldığı gibi programı sonlandırır.

<h2> PROGRAM ŞİFRELEMEYİ NASIL YAPAR?: </h2>
- Program kullanıcıdan aldığı kaydırma anahtarını alfabedeki harflerin yerini değiştirmede kullanır. </br>
- <i>ÖRNEĞİN:</i> Kaydırma anahtarı "2" iken program "A" yerine "C" yazar, "K" yerine "M" yazar gibi...

<h3> DOSYADAKİ METNİ ŞİFRELETMEK İÇİN DETAYLI BİLGİ:</h3>
- Kodun çalışması için girdi yerine dosyanın nesne adını girmemiz gereklidir.
- Elimizde böyle bir dosya olduğunu varsayalım.</br>
<img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/a6d47200-2082-4677-a351-6044c5143d71" alt=ornekResim1 width=250> </br>
- Bu dosyaya sağ tıklanır ve "özellikler" seçilir. </br>
<img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/136111c8-d9fa-4883-a73e-7940c8acc549" alt=ornekResim2 width=250> </br>
- Önümüze gelen ekranda "güvenlik" sekmesi seçilir. </br>
<img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/a3b25e0f-6205-4cb7-bd57-7a366cdf7648" alt=ornekResim3 width=250> </br>
- Önümüze gelen ekranda "nesne adı" kopyalanır. </br>
<img src="https://github.com/emircancengiz0/Kaydirmali-Sifre-Algoritmasi/assets/153457205/003038b5-93d2-4f87-83c4-0fc29a2dba9a" alt=ornekResim4 width=350> </br>
- Bu nesne adı konsolda sırasıyla "SIFRELEME ISLEMLERI" - "DOSYADAKI METNI SIFRELE" - "DOSYA ADINI GIRIN:" gidilerek en son kısma yapıştırılır. 
<i>DİKKAT:</i> nesne adı kopyalandığında başında "?" işareti ile kopyalanmış olabilir, bu işaret dosya adını girerken dahil edilirse program şifrelemez.

<h3> PROGRAM "sifrelerim.rtf" DOSYASI ÜZERİNE KURULUDUR. BU DOSYA METİN BELGESİ ŞEKLİNDEDİR. ŞİFRELERİN KAYDOLUP OLMADIĞINI, PROGRAMIN DÜZGÜN ÇALIŞIP ÇALIŞMADIĞINI VEYA DAHA SONRADAN ŞİFRELERİZİ KONTROL ETMEK İÇİN BU BELGENİN İÇİNE GİREBİLİRSİNİZ...</h3>




