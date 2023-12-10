<h1>-> KAYDIRMALI SIFRE ALGORITMASI <- </h1> <br>
<h2>ALGORITMANIN AMACI: </h2> <br>
- Bu algoritmanın amacı, kullanıcıdan istenilen metnin yine kullanıcıdan istenen kaydırma anahtarının yardımıyla bir takım işlemlerle şifrelenmesidir.
<h2>KAYDIRMA ANAHTARI NEDİR?:</h2>
- Kaydırma anahtarı, alfabedeki harflerin yerini kaç birim kaydırılacağı ile ilgili işlemi yapmada kullanılan bir sayı değeridir.
<h2>NASIL ÇALIŞIR:</h2> </br>
1. Program çalıştırılır.</br>
2. Konsola gelen menüden bir sekme seçilir ve klavyeden bu sekmenin solundaki sıra numarası girilir ardından "enter" tuşlanır.</br>
3. Seçilen sekmeye göre şu işlemler yapılır: <br><br>

  <h3> A) <sub> <img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/20a41518-d586-46ec-be50-9e8627bfbba7" alt=sifrelemeIslemiSekmesi width=200 > </sub> </h3> <br> 
- Menüdeyken "1" tuşlanırsa "SIFRELEME ISLEMLERI" sekmesi çalışır.
- "SIFRELEME ISLEMLERI" sekmesinin de alt sekmeleri vardır:<br>
  <sub> <img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/d324ebb7-5009-4074-839f-eacfd9cd86a8" alt=sifrelemeIslemiAltSekmeleri width=200 > </sub> <br>
- Bu sekmede de numaralandırma vardır, solundaki numara klavyeden girilir ardından "enter" tuşlanır. </br>
<h4> a) <img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/0463e593-bd85-4e75-9334-d14661f8b39c" alt=metinSifrelemeSekmesi width=140 > </h4> </br>
<li> Bu işlem ile kullanıcıdan önce metin alır ardından kaydırma anahtarı ister ve kelimeyi şifreleyerek "sifrelerim.rtf" metin belgesine şifrelenmiş metni ve o metin için girilmiş kaydırma anahtarını not eder.</li>
<h4>  b) <sub> <img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/a1c2f6ec-88e7-4415-ab3a-ed477ff6df7e" alt=DosyadakiMetniSifrelemeSekmesi width=200> </sub> </h4> </br>
<li> Bu işlem ile programın okuyabileceği bir dosya ismi klavyeden girilir, program dosyayı açar ve dosyadaki metni yine klavyeden alınan kaydırma anahtarına göre şifreleyip "sifrelerim.rtf" metin belgesine yazdırır. </br>  (<i>dosyanın nasıl ekleneceğiyle ilgili detaylı bilgi bilgilendirmenin sonunda mevcuttur</i>)</li>
<h4> c)<sub> <img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/44ec6b73-3881-45a8-af1e-41162ad8ee61" alt=MenuyeDonmeSekmesi width=110>
</sub> </h4> </br>
<li> Bu işlem menüye geri döndürür.</li>

<h3> B) <sub> <img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/9149f3c2-63e6-4f1d-b416-609cfb1c6456" alt=DesifreIslemleriSekmesi width=200></sub></h3> </br>
- Menüdeyken "2" tuşlanırsa "DESIFRE ISLEMLERI" sekmesi açılır.
- Kullanıcı bu sekmeye geldiğinde önüne önce şifrelerini görmek istemesiyle ilgili bir bilgilendirme gelir. (<img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/722ee389-a6c8-404d-881f-c39f587e00f5" alt=bahseilenBilgilendirme width=300>)

<p>-Bu bilgilendirmede kullanıcı 'y' veya 'Y' girip "enter" tuşlarsa daha önceden kayıtlı şifreleri program "sifrelerim.rtf" dosyasından alarak getirir. </p>
- Program önce deşifre edilmek istenen kelimeyi veya kelime gruplarını klavyeden girmenizi ister, bu kelime "sifrelerim.rtf" dosyasında olmak zorunda değildir. </br>
- Ardından bu metin için kaydırma anahtarını sorar ve kaydırma anahtarı girilerek "enter" tuşlanır. </br>
- Bu işlemler tamamlanınca program deşifre olmuş metni konsola yazdıracaktır.

<h3> C) <img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/360057fa-34da-4ec1-898b-aa985c13c805" alt=dosyadakiSifreleriSilmeSekmesi width=250> </h3> </br>
- Menüdeyken "3" tuşlanırsa "DOSYADAKI SIFRELERI TEMIZLE" sekmesi açılır.
- Bu sekme "sifrelerim.rtf" dosyasındaki şifrelerin hepsini temizlemek içindir.
- Sekme ilk açıldığında bir uyarı yapılır. (<img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/6d1f4022-21d4-4f2c-8d5d-b3b2e0478ec1" alt=uyari1 width=200> <img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/41c66696-65af-41eb-8680-75b08850bd9f" alt=uyari2 width=200 >)</br>
- Burada kullanıcı '0' girip "enter" tuşlarsa şifreler tümüyle temizlenir, farklı bir tuşa basması durumunda şifreler silinmez ve ana menüye dönülür.

<h3> D)<sub><img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/9393bf5d-518c-4d77-b3b1-65ca2518a9b6" alt=kayitliSifreler width=220 </sub> </h3> </br>
- Menüdeyken "4" tuşlanırsa "KAYITLI SIFRELERI GOSTER" sekmesi açılır. </br>
- Bu sekme "sifrelerim.rtf" dosyasındaki şifreleri kaydırma anahtarlarıyla beraber konsola yazdırır.

<h3> E) <sub> <img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/7edb55b1-2963-4670-b98b-c94d4bf03569" alt=programiKapatSekmesi width=150 </sub> </h3> </br>
- Menüdeyken "5" tuşlanırsa "PROGRAMI KAPAT" sekmesi açılır. </br>
- Adından anlaşıldığı gibi programı sonlandırır.

<h2> PROGRAM ŞİFRELEMEYİ NASIL YAPAR?: </h2>
- Program kullanıcıdan aldığı kaydırma anahtarını alfabedeki harflerin yerini değiştirmede kullanır. </br>
- <i>ÖRNEĞİN:</i> Kaydırma anahtarı "2" iken program "A" yerine "C" yazar, "K" yerine "M" yazar gibi...

<h3> DOSYADAKİ METNİ ŞİFRELETMEK İÇİN DETAYLI BİLGİ:</h3>
- Kodun çalışması için girdi yerine dosyanın nesne adını girmemiz gereklidir.
- Elimizde böyle bir dosya olduğunu varsayalım.</br>
<img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/20d1a650-42d8-4743-aff2-737c16845d69" alt=ornekResim1 width=250> </br>
- Bu dosyaya sağ tıklanır ve "özellikler" seçilir. </br>
<img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/ef0e8bd8-3200-4226-916d-7360456ccf22" alt=ornekResim2 width=250> </br>
- Önümüze gelen ekranda "güvenlik" sekmesi seçilir. </br>
<img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/bc4bdfc9-5b37-4332-b415-46c9123d4350" alt=ornekResim3 width=250> </br>
- Önümüze gelen ekranda "nesne adı" kopyalanır. </br>
<img src="https://github.com/emruu/Kaydirmali-Sifreleme-Algoritmasi-/assets/153358595/cf1110b4-7d02-4ab9-9686-ce4d8bd25c29" alt=ornekResim4 width=350> </br>
- Bu nesne adı konsolda sırasıyla "SIFRELEME ISLEMLERI" - "DOSYADAKI METNI SIFRELE" - "DOSYA ADINI GIRIN:" gidilerek en son kısma yapıştırılır. 
<i>DİKKAT:</i> nesne adı kopyalandığında başında "?" işareti ile kopyalanmış olabilir, bu işaret dosya adını girerken dahil edilirse program şifrelemez.

<h3> PROGRAM "sifrelerim.rtf" DOSYASI ÜZERİNE KURULUDUR. BU DOSYA METİN BELGESİ ŞEKLİNDEDİR. ŞİFRELERİN KAYDOLUP OLMADIĞINI, PROGRAMIN DÜZGÜN ÇALIŞIP ÇALIŞMADIĞINI VEYA DAHA SONRADAN ŞİFRELERİZİ KONTROL ETMEK İÇİN BU BELGENİN İÇİNE GİREBİLİRSİNİZ...</h3>




