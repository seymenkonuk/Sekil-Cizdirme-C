/*
Ekrana Geometrik Þekiller Çizer
*/

#ifndef SEKIL_H
#define SEKIL_H
#include <stdio.h>

void dikdortgen(int genislik, int yukseklik);
void kare(int kenar);
void ucgen(int yukseklik);
void tersUcgen(int yukseklik);
void solUcgen(int yukseklik);
void sagUcgen(int yukseklik);
void solDikUcgen(int yukseklik);
void sagDikUcgen(int yukseklik);
void tersSolDikUcgen(int yukseklik);
void tersSagDikUcgen(int yukseklik);
void cember(int cap, int kalinlik);
void daire(int cap);

void dikdortgen(int genislik, int yukseklik) {
    int i, j;
    for (i=0; i<yukseklik; i++) {
        for (j=0; j<genislik; j++)
            printf("* ");
        printf("\n");
    }
}

void kare(int kenar) {
    dikdortgen(kenar, kenar);
}

void ucgen(int yukseklik) {
    int i, j;
    for (i=0; i<yukseklik; i++) {
        for (j=0; j<yukseklik-i-1; j++) printf("  ");
        for (j=0; j<i*2+1; j++) printf("* ");
        printf("\n");
    }
}

void tersUcgen(int yukseklik) {
    int i, j;
    for (i=yukseklik-1; i>=0; i--) {
        for (j=0; j<yukseklik-i-1; j++) printf("  ");
        for (j=0; j<i*2+1; j++) printf("* ");
        printf("\n");
    }
}

void solUcgen(int yukseklik) {
    int i, j;
    for (i=1; i<=yukseklik; i++) {
        for (j=0; j<i; j++)
            printf("* ");
        printf("\n");
    }
    for (i=yukseklik-1; i>0; i--) {
        for (j=0; j<i; j++)
            printf("* ");
        printf("\n");
    }
}

void sagUcgen(int yukseklik) {
    int i, j;
    for (i=1; i<=yukseklik; i++) {
        for (j=0; j<yukseklik-i; j++)
            printf("  ");
        for (j=0; j<i; j++)
            printf("* ");
        printf("\n");
    }
    for (i=yukseklik-1; i>0; i--) {
        for (j=0; j<yukseklik-i; j++)
            printf("  ");
        for (j=0; j<i; j++)
            printf("* ");
        printf("\n");
    }
}

void solDikUcgen(int yukseklik) {
    int i, j;
    for (i=1; i<=yukseklik; i++) {
        for (j=1; j<=i; j++)
            printf("* ");
        printf("\n");
    }
}

void sagDikUcgen(int yukseklik) {
    int i, j;
    for (i=1; i<=yukseklik; i++) {
        for (j=1; j<=yukseklik-i; j++)
            printf("  ");
        for (j=1; j<=i; j++)
            printf("* ");
        printf("\n");
    }
}

void tersSolDikUcgen(int yukseklik) {
    int i, j;
    for (i=yukseklik; i>=1; i--) {
        for (j=1; j<=i; j++)
            printf("* ");
        printf("\n");
    }
}

void tersSagDikUcgen(int yukseklik) {
    int i, j;
    for (i=yukseklik; i>=1; i--) {
        for (j=1; j<=yukseklik-i; j++)
            printf("  ");
        for (j=1; j<=i; j++)
            printf("* ");
        printf("\n");
    }
}

void cember(int cap, int kalinlik) {
    if (kalinlik > (cap-cap%2)/2) kalinlik = (cap-cap%2)/2;
    int x, y; cap *= 2;
    for (y = 1; y <= cap; y+=2) {
        for (x = 1; x <= cap; x+=2)
            if ((x - cap/2)*(x - cap/2) + (y - cap/2)*(y - cap/2) >= (cap/2 - 2*kalinlik)*(cap/2 - 2*kalinlik) && (x - cap/2)*(x - cap/2) + (y - cap/2)*(y - cap/2) <= (cap/2)*(cap/2))
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }  
}

void daire(int cap) {
    int x, y; cap *= 2;
    for (y=1; y<=cap; y+=2) {
        for (x=1; x<=cap; x+=2)
            if ((x - cap/2)*(x - cap/2) + (y - cap/2)*(y - cap/2) < cap*cap/4)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
}
#endif
