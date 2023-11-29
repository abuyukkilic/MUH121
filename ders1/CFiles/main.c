#include <stdio.h>
#include <stdlib.h>

int main() {
    // Basit bir selamlama mesajýný ekrana yazdýr
    printf("Merhaba, Dünya!\n");

    // Türkçe karakter sorununu göstermek için Türkçe bir yorum eklendi
    // printf("Merhaba, Dünya\n"); // Türkçe karakter problemi mevcut.

    // Konsol penceresini açýk tutmak için bir tuþa basýlmasýný bekleyin
    // getch() standart olmayan bir fonksiyondur, taþýnabilirlik için getchar() kullanmayý düþünün
    // getch(); 

    // Bir tuþa basýlmasýný beklemek için alternatif bir yöntem, bu standarttýr
    // getchar(); 

    // Bir deðiþkeni tanýmlayýn ve baþlangýç deðerini atayýn
    int x = 3;

    // Deðiþken isimleri anlamlý olmalýdýr (örneðin, anlamlý isimler kullanýn)
    // Tek harfli deðiþken isimlerinden kaçýnýn, bunlar genellikle döngü sayaçlarýný temsil etmiyorsa kullanýlmamalýdýr
    // Deðiþken isimlerinde kelimeler arasýnda alt çizgi (_) kullanmayý düþünün (örneðin, int kullanici_girdisi)
    
    // Deðiþkenin amacýný açýklayan anlamlý bir yorum ekleyin
    // Bu durumda, 'x' genel bir isim gibi görünüyor, bu yüzden 'sayac' veya 'kullaniciGirdisi' gibi daha açýklayýcý bir isim düþünün
    
    // Deðiþken isimlendirme kurallarýna uymalýdýr. (Sayý ile baþlama, rezerve edilmiþ kelimeler ...)
    
    // Daha açýklayýcý bir deðiþken ismi örneði:
    int kullaniciGirdisi = 3;

    // Her zaman main fonksiyonundan bir deðer döndürün (0 baþarýlý yürütme anlamýna gelir)
    return 0;
}
