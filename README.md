# ft_printf

42 okulunun string formatlama projesi olan ft_printf, C dilinin printf fonksiyonunu yeniden oluşturmayı amaçlamaktadır.

## 📚 Proje Hakkında

ft_printf projesi, standart C kütüphanesinin printf fonksiyonunun temel özelliklerini içeren bir klon oluşturmayı hedeflemektedir. Bu proje, değişken argümanlar, string formatlama ve karakter işleme konularında deneyim kazandırmayı amaçlar.

## 💻 Teknolojiler

- C Programlama Dili
- Variadic Functions
- String Formatlama
- Bit Manipülasyonu

## 🛠️ Kurulum

### Gereksinimler
- GCC Derleyici
- Make
- ar (arşiv oluşturucu)

### Derleme
```bash
make
```

## 📝 Fonksiyon Prototipi

```c
int ft_printf(const char *format, ...);
```

### Desteklenen Dönüşümler
- %c - Karakter
- %s - String
- %p - Pointer adresi
- %d - Ondalık sayı
- %i - Tam sayı
- %u - İşaretsiz ondalık sayı
- %x - Küçük harf hexadecimal
- %X - Büyük harf hexadecimal
- %% - Yüzde işareti

## 🎯 42 Proje Gereksinimleri

### Zorunlu Kısım
- [x] Temel dönüşümler (%c, %s, %p, %d, %i, %u, %x, %X, %%)
- [x] Libc printf ile aynı davranış
- [x] Buffer yönetimi yok
- [x] Flags yönetimi yok
- [x] Alan genişliği yönetimi yok

### Bonus Kısım
- [x] Herhangi bir kombinasyonda flags yönetimi (-, 0, ., #, +, space)
- [x] Alan genişliği yönetimi
- [x] Hassasiyet yönetimi

## 📚 Kod Örnekleri

### Ana Fonksiyon
```c
int ft_printf(const char *format, ...)
{
    va_list args;
    int     count;

    va_start(args, format);
    count = process_format(format, args);
    va_end(args);
    return (count);
}
```

### Format İşleme
```c
int process_format(const char *format, va_list args)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
            count += handle_conversion(format[++i], args);
        else
            count += write(1, &format[i], 1);
        i++;
    }
    return (count);
}
```

## 🔍 Test Senaryoları

### Temel Testler
```c
int main(void)
{
    ft_printf("Karakter: %c\n", 'A');
    ft_printf("String: %s\n", "Merhaba");
    ft_printf("Sayı: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

### Karşılaştırmalı Testler
```c
printf("Original: %d\n", 42);
ft_printf("Custom: %d\n", 42);
```

## 🐛 Hata Ayıklama

### Yaygın Hatalar
1. Format Hataları
   - Geçersiz dönüşüm karakterleri
   - Eksik argümanlar
   - Yanlış tip eşleşmesi

2. Bellek Hataları
   - Buffer taşması
   - NULL pointer kontrolü
   - String sonlandırma

## 📈 Optimizasyon İpuçları

1. Performans
   - Gereksiz karakter kopyalamadan kaçınma
   - Verimli sayı dönüşümü
   - Minimal fonksiyon çağrısı

2. Kod Organizasyonu
   - Modüler yapı
   - Tekrar kullanılabilir fonksiyonlar
   - Temiz kod prensipleri

## 🔒 Güvenlik Kontrolleri

1. Giriş Doğrulama
   - NULL format kontrolü
   - Geçerli dönüşüm karakterleri
   - Argüman sayısı kontrolü

2. Çıktı Güvenliği
   - Buffer sınırları kontrolü
   - Özel karakterlerin işlenmesi
   - Hata durumları yönetimi

## 📝 Lisans

Bu proje [MIT](LICENSE) lisansı altında lisanslanmıştır.

## 📚 Kaynaklar

- [Printf Manual](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic Functions](https://en.cppreference.com/w/c/variadic)
- [42 Docs](https://harm-smits.github.io/42docs/)

---

⭐️ Bu projeyi beğendiyseniz yıldız vermeyi unutmayın!
