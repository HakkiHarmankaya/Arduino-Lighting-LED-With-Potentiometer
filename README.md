# 🎛️ Arduino #4: Potansiyometre ile LED Işık Seviyesi Ayarlama

Bu projede, **potansiyometre** kullanarak bir **LED'in parlaklığını analog olarak kontrol etmeyi** öğreneceğiz.  
Potansiyometre döndürüldükçe LED'in parlaklığı artacak veya azalacaktır.

🔗 [Web Siteme Bakmak İçin Tıkla](https://www.hakkiharmankaya.com/)
 
🔗 [Tinkercad Tasarımına Göz At](https://www.tinkercad.com/things/7iJgCOMMT0L?sharecode=T2q1EgOAqxZi5lHyJ6BG4cRU_FI047ZcG8qRlP_16Ss)

---

## 🧰 Gerekli Malzemeler

- 1 adet **LED**
- 1 adet **potansiyometre**
- 1 adet **direnç** (220Ω veya 330Ω)
- 1 adet **Arduino**
- 1 adet **breadboard**
- 6 adet **jumper kablosu**

---

## ⚙️ Adım Adım Devre Kurulumu

### 🔹 Adım 1: Devreyi Tasarlayın

- LED'in **anot (uzun bacak)** ucu → Arduino **D3** pinine
- LED'in **katot (kısa bacak)** ucu → direnç → **GND**
- Potansiyometrenin:
  - **Orta bacağı** → Arduino **A0** analog pinine
  - **Sol bacağı** → **5V**
  - **Sağ bacağı** → **GND**

---

### 🔹 Adım 2: Arduino Kodunu Yazın ve Yükleyin

```cpp
void setup() {
  pinMode(3, OUTPUT);   // LED pini çıkış olarak ayarlandı
  pinMode(A0, INPUT);   // Potansiyometre girişi
}

void loop() {
  int deger = analogRead(A0);           // A0 pininden değeri oku (0-1023)
  deger = map(deger, 0, 1023, 0, 255);  // 0-1023 → 0-255'e dönüştür
  analogWrite(3, deger);                // LED parlaklığını ayarla
}
