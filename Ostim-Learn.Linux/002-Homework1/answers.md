# Cevap Bulma Promptu

```text
Oluşturduğun bu sorulara için;
1- Bunların cevap anahtarını ayrı bir markdown dosyası olarak ver
2- Her soruya verdiğin cevap neden doğru bunu kısaca belirt
3- Markdown dosyasını anlaşılır sade bir şekilde planla ve çıktıyı bana ver
```

# Linux `echo` Komutu – Cevap Anahtarı

---

## Özet Tablo

| Soru | Seviye | Cevap |
| :--: | :----: | :---: |
|  1   | Kolay  | **B** |
|  2   | Kolay  | **C** |
|  3   | Kolay  | **D** |
|  4   |  Orta  | **B** |
|  5   |  Orta  | **C** |
|  6   |  Orta  | **C** |
|  7   |  Zor   | **C** |
|  8   |  Zor   | **D** |
|  9   |  Zor   | **C** |

---

## Açıklamalar

### 🟢 Kolay Seviye

**Soru 1 → B**
`echo`, kendisine verilen metni veya değişken değerini standart çıktıya (ekrana) yazdırır. Diğer seçenekler `rm`, `cd`, `chmod` ve `ps` komutlarının görevleridir.

**Soru 2 → C**
`-n` seçeneği, çıktının sonuna otomatik eklenen yeni satır karakterini kaldırır. `-e` kaçış karakterlerini yorumlar, `-E` yorumlamayı kapatır; `-s` ve `-l` echo'nun seçeneği değildir.

**Soru 3 → D**
Tek tırnak (`' '`) içindeki her şey olduğu gibi yazdırılır; değişken açılımı yapılmaz. Bu yüzden `$isim` yerine değeri değil, metnin kendisi çıkar: `Merhaba $isim`.

### 🟡 Orta Seviye

**Soru 4 → B**
`-e` seçeneği kaçış karakterlerini yorumlatır: `\t` sekme, `\n` yeni satır olur. Sonuç: `A[TAB]B`, alt satırda `C`.

**Soru 5 → C**
`>` dosyanın içeriğini silip üzerine yazar, `>>` sonuna ekler. Son komut yine `>` kullandığı için önceki içerik (`Linux`, `Bash`) silinir ve dosyada yalnızca `Kabuk` kalır.

**Soru 6 → C**
`$(( ))` aritmetik işlem yapar ve işlem önceliği geçerlidir: `7 % 3 = 1`, `2 * 4 = 8`, `1 + 8 = 9`.

### 🔴 Zor Seviye

**Soru 7 → C**
Önce `$(date +%Y)` çalışır ve `2026` döner. Ardından `$(( 2030 - 2026 ))` hesaplanır ve `4` sonucu metne yerleşir: `Kalan: 4 yıl`.

**Soru 8 → D**
Çift tırnak içinde `\$` ifadesi `$` işaretinin özel anlamını kaldırır. Bu yüzden komut ikamesi yapılmaz; ters eğik çizgi kaybolur ve metin olduğu gibi yazdırılır: `Tarih: $(date +%d)`.

**Soru 9 → C**
`%d` günü iki haneli (`04`), `%m` ayı (`11`), `%y` yılı iki haneli (`26`) verir. İlk `echo -n` satır sonu eklemediği için ikinci çıktı aynı satıra yazılır: `04/11/26`.
