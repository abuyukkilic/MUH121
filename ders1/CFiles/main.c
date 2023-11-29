#include <stdio.h>
#include <stdlib.h>

int main() {
    // Basit bir selamlama mesaj�n� ekrana yazd�r
    printf("Merhaba, D�nya!\n");

    // T�rk�e karakter sorununu g�stermek i�in T�rk�e bir yorum eklendi
    // printf("Merhaba, D�nya\n"); // T�rk�e karakter problemi mevcut.

    // Konsol penceresini a��k tutmak i�in bir tu�a bas�lmas�n� bekleyin
    // getch() standart olmayan bir fonksiyondur, ta��nabilirlik i�in getchar() kullanmay� d���n�n
    // getch(); 

    // Bir tu�a bas�lmas�n� beklemek i�in alternatif bir y�ntem, bu standartt�r
    // getchar(); 

    // Bir de�i�keni tan�mlay�n ve ba�lang�� de�erini atay�n
    int x = 3;

    // De�i�ken isimleri anlaml� olmal�d�r (�rne�in, anlaml� isimler kullan�n)
    // Tek harfli de�i�ken isimlerinden ka��n�n, bunlar genellikle d�ng� saya�lar�n� temsil etmiyorsa kullan�lmamal�d�r
    // De�i�ken isimlerinde kelimeler aras�nda alt �izgi (_) kullanmay� d���n�n (�rne�in, int kullanici_girdisi)
    
    // De�i�kenin amac�n� a��klayan anlaml� bir yorum ekleyin
    // Bu durumda, 'x' genel bir isim gibi g�r�n�yor, bu y�zden 'sayac' veya 'kullaniciGirdisi' gibi daha a��klay�c� bir isim d���n�n
    
    // De�i�ken isimlendirme kurallar�na uymal�d�r. (Say� ile ba�lama, rezerve edilmi� kelimeler ...)
    
    // Daha a��klay�c� bir de�i�ken ismi �rne�i:
    int kullaniciGirdisi = 3;

    // Her zaman main fonksiyonundan bir de�er d�nd�r�n (0 ba�ar�l� y�r�tme anlam�na gelir)
    return 0;
}
