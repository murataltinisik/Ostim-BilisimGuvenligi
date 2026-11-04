# Linux `echo` Komutu – Çoktan Seçmeli Sorular

---

## 1. Soru Oluşturma Promptu

```text
Linux'taki echo komutu hakkında 9 adet çoktan seçmeli soru hazırla.
- İlk 3 soru kolay, sonraki 3 soru orta, son 3 soru zor seviyede olsun.
- Her sorunun A, B, C, D, E olmak üzere 5 seçeneği olsun ve yalnızca 1 doğru cevap olsun.
- Son 3 zor soruda echo ve date komutlarını birlikte kullan (örneğin $(date +%Y) gibi).
- Soruları bash kabuğuna göre hazırla.
- Doğru cevapları soruların içinde belirtme.
```

---

## 2. Sorular

### 🟢 Kolay Seviye

**Soru 1.** Bash kabuğunda `echo` komutunun temel görevi nedir?

- **A)** Dosyaları siler
- **B)** Verilen metni veya değişken değerini standart çıktıya yazdırır
- **C)** Dizinler arasında geçiş yapar
- **D)** Dosya izinlerini değiştirir
- **E)** Çalışan süreçleri listeler

**Soru 2.** `echo` komutunun çıktının sonuna yeni satır karakteri eklemesini engelleyen seçenek hangisidir?

- **A)** `-e`
- **B)** `-E`
- **C)** `-n`
- **D)** `-s`
- **E)** `-l`

**Soru 3.** Aşağıdaki komutlar çalıştırıldığında ekrana ne yazdırılır?

```bash
isim="Ayşe"
echo 'Merhaba $isim'
```

- **A)** `Merhaba Ayşe`
- **B)** `Merhaba`
- **C)** `'Merhaba Ayşe'`
- **D)** `Merhaba $isim`
- **E)** Hata mesajı verir

### 🟡 Orta Seviye

**Soru 4.** Aşağıdaki komutun çıktısı nasıl görünür? _(`[TAB]` bir sekme boşluğunu temsil eder.)_

```bash
echo -e "A\tB\nC"
```

- **A)** `A\tB\nC`
- **B)** `A[TAB]B` ve bir alt satırda `C`
- **C)** `A B C`
- **D)** `A[TAB]B[TAB]C`
- **E)** `AtBnC`

**Soru 5.** Aşağıdaki komutlar sırasıyla çalıştırıldığında `cat` komutunun çıktısı ne olur? _(`dosya.txt` başlangıçta mevcut değildir.)_

```bash
echo "Linux" > dosya.txt
echo "Bash" >> dosya.txt
echo "Kabuk" > dosya.txt
cat dosya.txt
```

- **A)** `Linux`, `Bash`, `Kabuk` (alt alta)
- **B)** `Linux` ve `Bash` (alt alta)
- **C)** `Kabuk`
- **D)** `Bash` ve `Kabuk` (alt alta)
- **E)** Dosya boş olduğu için hiçbir şey yazdırılmaz

**Soru 6.** Aşağıdaki komutun çıktısı nedir?

```bash
echo $((7 % 3 + 2 * 4))
```

- **A)** `1`
- **B)** `3`
- **C)** `9`
- **D)** `11`
- **E)** `7 % 3 + 2 * 4`

### 🔴 Zor Seviye

> **Not:** Bu bölümdeki sorularda sistem tarihinin **4 Kasım 2026** olduğunu varsayınız.

**Soru 7.** Aşağıdaki komutun çıktısı nedir?

```bash
echo "Kalan: $(( 2030 - $(date +%Y) )) yıl"
```

- **A)** `Kalan: 2030 - 2026 yıl`
- **B)** `Kalan: $(( 2030 - 2026 )) yıl`
- **C)** `Kalan: 4 yıl`
- **D)** `Kalan: 2004 yıl`
- **E)** `Kalan: -4 yıl`

**Soru 8.** Aşağıdaki komutun çıktısı nedir?

```bash
echo "Tarih: \$(date +%d)"
```

- **A)** `Tarih: 04`
- **B)** `Tarih: 4`
- **C)** `Tarih: \$(date +%d)`
- **D)** `Tarih: $(date +%d)`
- **E)** `Tarih: 2026-11-04`

**Soru 9.** Aşağıdaki komutlar art arda çalıştırıldığında ekrandaki çıktı ne olur?

```bash
echo -n "$(date +%d)"; echo "/$(date +%m)/$(date +%y)"
```

- **A)** `4/11/26`
- **B)** `04/11/2026`
- **C)** `04/11/26`
- **D)** `04` ve bir alt satırda `/11/26`
- **E)** `%d/%m/%y`
