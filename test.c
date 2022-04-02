#include <stdio.h>

int main()
{
    /*int a = 5;
    printf("%d %d %d\n", a++, a, a);
    a = 5;
    printf("%d %d %d\n", a, a, a++);
    a = 5;
    printf("%d %d %d\n", a, a++, a);
    a = 5;
    printf("%d %d %d\n", a--, a, a++);
    */


    /*int a, b, t;
    for(a=3,b=0;!a==b;a--,b++)
        if (a > b) {
            t = a;
            a = b;
            b = t;
    }
    printf("%d%d", a, b);
    printf("%d", !a==b);
    */


    /*int i = 0, s = 0;
    do {
        if (i % 2) {
            i++;
            continue;
        }
        i++;
        s += i;
    } while (i < 7);
    printf("%d", s);
    */

   
    int a, b;
    for (a = 1, b = 1; a <= 100; a++) {
        if (b >= 10)break;
        if (b % 3 == 1) {
            b += 3; continue;
        }
    }
    printf("%d", a);
    

   
    

    return 0;
}

