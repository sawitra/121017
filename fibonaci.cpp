#include <cstdlib>
#include <iostream>
#include <stdio.h>
int main()
{
    int i, n, satu = 0, dua = 1, tiga;
    printf("Masukkan banyak deret: ");
    scanf("%d", &n);
   
    printf("Deret fibonacci: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", satu);
        tiga = satu + dua;
        satu = dua;
        dua = tiga;
    }
system("PAUSE");
    return 0;
}
