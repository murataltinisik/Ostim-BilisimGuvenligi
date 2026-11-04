# Linux `mkdir` ve `cd` Komutları: Çoktan Seçmeli Sorular

## 📝 Prompt

```text
Linux'taki mkdir ve cd komutları hakkında 9 adet çoktan seçmeli soru hazırla.
- İlk 3 soru kolay, sonraki 3 soru orta, son 3 soru zor seviyede olsun.
- Her sorunun A, B, C, D, E olmak üzere 5 seçeneği olsun ve yalnızca 1 doğru cevap olsun.
- Kolay sorular temel kullanımı ölçsün (klasör oluşturma, klasöre girme, cd .. gibi).
- Orta sorularda mkdir -p, cd ~, cd -, göreli ve mutlak yol gibi kullanımlar olsun.
- Zor sorularda birden fazla komutun art arda çalıştırıldığı senaryolar olsun ve "son komuttan sonra pwd çıktısı ne olur?" gibi sorular sor. Gerekirse kullanıcının ev dizinini /home/ogrenci olarak kabul et.
- Soruları bash kabuğuna göre hazırla.
- Doğru cevapları soruların içinde belirtme.
- Çıktıyı düzenli bir Markdown formatında ver.
```

---

## 🟢 Kolay Seviye

### Soru 1

Bulunduğunuz dizinde **`proje`** adında yeni bir klasör oluşturmak için hangi komut kullanılır?

- **A)** `cd proje`
- **B)** `mkdir proje`
- **C)** `touch proje`
- **D)** `mk proje`
- **E)** `newdir proje`

### Soru 2

Bulunduğunuz dizinin içindeki **`belgeler`** adlı alt klasöre geçmek için hangi komut kullanılır?

- **A)** `cd belgeler`
- **B)** `mkdir belgeler`
- **C)** `go belgeler`
- **D)** `open belgeler`
- **E)** `pwd belgeler`

### Soru 3

`cd ..` komutu ne işe yarar?

- **A)** Kullanıcının ev dizinine gider.
- **B)** Kök dizine (`/`) gider.
- **C)** Bir üst dizine gider.
- **D)** Bir önceki bulunulan dizine geri döner.
- **E)** Bulunulan dizinde kalır, hiçbir şey yapmaz.

---

## 🟡 Orta Seviye

### Soru 4

Bulunduğunuz dizinde `a` adında bir klasör **yokken** aşağıdaki komut çalıştırılıyor:

```bash
mkdir -p a/b/c
```

Bu komutun sonucu hangisidir?

- **A)** `a`, `b` ve `c` klasörleri iç içe oluşturulur, hata verilmez.
- **B)** `a` klasörü bulunmadığı için hata verilir ve hiçbir klasör oluşturulmaz.
- **C)** Yalnızca `c` klasörü oluşturulur.
- **D)** `a`, `b` ve `c` klasörleri aynı dizinde yan yana oluşturulur.
- **E)** Adı `a/b/c` olan tek bir klasör oluşturulur.

### Soru 5

Kullanıcı `/etc` dizinindeyken sırasıyla aşağıdaki komutları çalıştırıyor:

```bash
cd /usr/share
cd -
```

Son komuttan sonra ne olur?

- **A)** Kullanıcı `/usr/share` dizininde kalır.
- **B)** Kullanıcı `/home/ogrenci` dizinine gider.
- **C)** Kullanıcı kök dizine (`/`) gider.
- **D)** Kullanıcı `/etc` dizinine döner ve bu yol ekrana yazdırılır.
- **E)** Kullanıcı `/usr` dizinine gider.

### Soru 6

Kullanıcı `/home/ogrenci` dizinindedir. Aşağıdaki komutlardan hangisi `/home/ogrenci/belgeler/raporlar` dizinine **mutlak yol** kullanarak geçer?

- **A)** `cd belgeler/raporlar`
- **B)** `cd ./belgeler/raporlar`
- **C)** `cd ../ogrenci/belgeler/raporlar`
- **D)** `cd home/ogrenci/belgeler/raporlar`
- **E)** `cd /home/ogrenci/belgeler/raporlar`

---

## 🔴 Zor Seviye

### Soru 7

Kullanıcı `/home/ogrenci` dizinindedir ve ev dizininde `proje` adlı bir klasör **bulunmamaktadır**. Aşağıdaki komutlar sırasıyla çalıştırılıyor:

```bash
mkdir -p proje/src/lib
cd proje/src
cd ../..
cd proje/src/lib
cd ../../
pwd
```

Son komut olan `pwd` çıktısı ne olur?

- **A)** `/home/ogrenci/proje/src`
- **B)** `/home/ogrenci/proje`
- **C)** `/home/ogrenci`
- **D)** `/home/ogrenci/proje/src/lib`
- **E)** `/proje`

### Soru 8

Kullanıcı `/home/ogrenci` dizinindedir ve `/tmp` altında `deneme` adlı bir klasör **bulunmamaktadır**. Aşağıdaki komutlar sırasıyla çalıştırılıyor:

```bash
cd /tmp
mkdir -p deneme/a/b
cd deneme/a/b
cd ~
cd -
cd ../..
pwd
```

Son komut olan `pwd` çıktısı ne olur?

- **A)** `/home/ogrenci`
- **B)** `/tmp`
- **C)** `/home`
- **D)** `/tmp/deneme/a`
- **E)** `/tmp/deneme`

### Soru 9

Kullanıcının ev dizininde `calisma` adlı bir klasör **bulunmamaktadır**. Aşağıdaki komutlar sırasıyla çalıştırılıyor:

```bash
cd ~
mkdir calisma
cd calisma
mkdir arsiv/2024 && cd arsiv/2024
mkdir -p arsiv/2025 ; cd arsiv/2025
cd ..
pwd
```

Son komut olan `pwd` çıktısı ne olur?

- **A)** `/home/ogrenci/calisma/arsiv/2024`
- **B)** `/home/ogrenci/calisma`
- **C)** `/home/ogrenci/calisma/arsiv`
- **D)** `/home/ogrenci/calisma/arsiv/2025`
- **E)** `/home/ogrenci/arsiv`
