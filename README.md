# varianza

Creare il file "stat.c" e il corrispondente header "stat.h" (che conterrà solo le dichiarazioni). Nel file, si realizzi in linguaggio C la funzione corrispondente alla seguente dichiarazione:


extern double varianza(double *x, unsigned int n);


La funzione deve calcolare la varianza (cercate la formula su Wikipedia se non la ricordate) del vettore x contenente n elementi. Se n è minore di 2 la varianza è 0.

Nel testare il programma si scriva una funzione main() in cui il vettore deve essere allocato dinamicamente utilizzando le funzioni malloc() e free().

Ricordate di inserire nel file .h l'include guard e nel file .c di includere l'header corrispondente.

