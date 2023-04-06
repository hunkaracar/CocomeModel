#include<stdio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>

void ayrik_model();
void yari_gomulu_model();
void gomulu_model();

int main() {
	
    int choose;
    
    while (1) {
        printf("\n[1].Ayrik\n[2].Yari Gomulu\n[3].Gomulu\n[4].Cikis\n\nHesaplanmasini istediginiz opsiyonun numarasini giriniz:");
        scanf("%d", &choose);
        
        switch (choose) {
            case 1:
                ayrik_model();
                break;
            case 2:
                yari_gomulu_model();
                break;
            case 3:
                gomulu_model();
                break;
            case 4:
                exit(0);
            default:
                printf("Hatali secenek. Lutfen tekrar deneyin.\n");
                break;
        }
    }
    
    return 0;
}

void ayrik_model() {
    double a = 2.4;
    double b = 1.05;
    double c = 2.5;
    double d = 0.38;
    
    double kodboyut;
    double isgucu;
    double gelistirmesuresi;
    double ortpersonelsayisi;
    double verimlilik;
    
    printf("Ayrik modele gore hesaplanacak...\n");
    sleep(2);
    
    printf("Yazilim kod boyutunuzu giriniz: ");
    scanf("%lf",&kodboyut);
    
    isgucu = a*pow(kodboyut,b);
    gelistirmesuresi = c*pow(isgucu,d);
    ortpersonelsayisi = isgucu/gelistirmesuresi;
    verimlilik = kodboyut/isgucu;
    
    printf("\nAyrik modele gore hesaplaniyor...\n\n");
    sleep(2);
    
    printf("Isgucu: %lf\n",isgucu);
    printf("Gelistirme suresi: %lf\n",gelistirmesuresi);
    printf("Ortalama personel sayisi: %lf\n",ortpersonelsayisi);
    printf("Verimlilik: %lf\n",verimlilik);
}

void yari_gomulu_model() {
    double a = 3.0;
    double b = 1.12;
    double c = 2.5;
    double d = 0.35;
    
    double kodboyut;
    double isgucu;
    double gelistirmesuresi;
    double ortpersonelsayisi;
    double verimlilik;
    
    printf("Yari Gomulu modele gore hesaplanacak...\n");
    sleep(2);
    
    
    printf("Yazilim kod boyutunuzu giriniz: ");
    scanf("%lf",&kodboyut);
    
    isgucu = a*pow(kodboyut,b);	//Kisi-ay
    gelistirmesuresi = c*pow(isgucu,d);	//Ay
    ortpersonelsayisi = isgucu/gelistirmesuresi;	//Kisi
    verimlilik = kodboyut/isgucu;	//kodboyut/kisi/ay
    
    printf("\nYari Gomulu modele gore hesaplaniyor...\n\n");
    sleep(2);
    
    printf("Isgucu: %lf\n",isgucu);
    printf("Gelistirme suresi: %lf\n",gelistirmesuresi);
    printf("Ortalama personel sayisi: %lf\n",ortpersonelsayisi);
    printf("Verimlilik: %lf\n",verimlilik);
    
}
    
void gomulu_model(){
	
	double a = 3.6;
    double b = 1.20;
    double c = 2.5;
    double d = 0.32;
    
    double kodboyut;
    double isgucu;
    double gelistirmesuresi;
    double ortpersonelsayisi;
    double verimlilik;
    
    printf("Gomulu modele gore hesaplanacak...\n");
    sleep(2);
    
    
    printf("Yazilim kod boyutunuzu giriniz: ");
    scanf("%lf",&kodboyut);
    
    isgucu = a*pow(kodboyut,b);
    gelistirmesuresi = c*pow(isgucu,d);
    ortpersonelsayisi = isgucu/gelistirmesuresi;
    verimlilik = kodboyut/isgucu;
    
    printf("\n Gomulu modele gore hesaplanýyor...\n\n");
    sleep(2);
    
    printf("Isgucu: %lf\n",isgucu);
    printf("Gelistirme suresi: %lf\n",gelistirmesuresi);
    printf("Ortalama personel sayisi: %lf\n",ortpersonelsayisi);
    printf("Verimlilik: %lf\n",verimlilik);
	
}  
