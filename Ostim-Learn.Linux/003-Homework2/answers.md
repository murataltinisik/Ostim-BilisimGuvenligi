# 1. Cevap Bulma Promptu

```text
Oluşturduğun bu sorulara için;
1- Bunların cevap anahtarını ayrı bir markdown dosyası olarak ver
2- Her soruya verdiğin cevap neden doğru bunu kısaca belirt
3- Markdown dosyasını anlaşılır sade bir şekilde planla ve çıktıyı bana ver
```

# 2. Linux `mkdir` ve `cd` Komutları: Cevap Anahtarı

## 🟢 Kolay Seviye

### Soru 1

**Doğru Cevap:** **B)** `mkdir proje`

**Açıklama:** `mkdir` (make directory) komutu yeni bir klasör oluşturur. `cd` dizin değiştirir, `touch` boş dosya oluşturur; `mk` ve `newdir` diye bir komut yoktur.

### Soru 2

**Doğru Cevap:** **A)** `cd belgeler`

**Açıklama:** `cd` (change directory) komutu bulunulan dizini değiştirir. `belgeler` göreli yol olduğu için mevcut dizinin içindeki klasöre geçilir.

### Soru 3

**Doğru Cevap:** **C)** Bir üst dizine gider.

**Açıklama:** `..` her zaman bulunulan dizinin bir üst dizinini ifade eder. Ev dizinine gitmek için `cd ~`, önceki dizine dönmek için `cd -` kullanılır.

---

## 🟡 Orta Seviye

### Soru 4

**Doğru Cevap:** **A)** `a`, `b` ve `c` klasörleri iç içe oluşturulur, hata verilmez.

**Açıklama:** `-p` seçeneği yolda eksik olan tüm üst klasörleri de oluşturur. `-p` kullanılmasaydı `a` olmadığı için hata verilirdi.

### Soru 5

**Doğru Cevap:** **D)** Kullanıcı `/etc` dizinine döner ve bu yol ekrana yazdırılır.

**Açıklama:** `cd -` bir önceki bulunulan dizine (`/etc`) geri döner ve bash bu dizinin yolunu ekrana yazar.

### Soru 6

**Doğru Cevap:** **E)** `cd /home/ogrenci/belgeler/raporlar`

**Açıklama:** Mutlak yol her zaman kök dizinden, yani `/` ile başlar. Diğer seçenekler `/` ile başlamadığı için göreli yoldur.

---

## 🔴 Zor Seviye

### Soru 7

**Doğru Cevap:** **B)** `/home/ogrenci/proje`

**Açıklama:** `cd proje/src` ile `.../proje/src`'ye girilir, `cd ../..` ile `/home/ogrenci`'ye dönülür. Sonra `cd proje/src/lib` ile `.../proje/src/lib`'e girilir ve `cd ../../` iki üst dizine çıkarak `/home/ogrenci/proje`'de bırakır.

### Soru 8

**Doğru Cevap:** **E)** `/tmp/deneme`

**Açıklama:** `cd deneme/a/b` ile `/tmp/deneme/a/b`'ye girilir, `cd ~` ile ev dizinine gidilir. `cd -` bir önceki dizine, yani `/tmp/deneme/a/b`'ye geri döner; `cd ../..` iki üst dizine çıkarak `/tmp/deneme`'ye ulaşır.

### Soru 9

**Doğru Cevap:** **C)** `/home/ogrenci/calisma/arsiv`

**Açıklama:** `arsiv` klasörü olmadığı için `mkdir arsiv/2024` hata verir ve `&&` sayesinde ardından gelen `cd` çalışmaz. `mkdir -p arsiv/2025` başarılı olur, `;` sonrası `cd arsiv/2025` çalışır ve `cd ..` ile `/home/ogrenci/calisma/arsiv`'e çıkılır.
