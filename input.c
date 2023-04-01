#include <stdio.h>

int main()
{

    int inputTake, inputTake2;
    scanf("%d%% %d%%", &inputTake, &inputTake2);
    printf("values are: %d%% %d%%", inputTake, inputTake2);

    int testWithChar, testWithChar2;
    char p;
    scanf("%d%c %d%c", &testWithChar, &p, &testWithChar2, &p);
    printf("Test values are: %d%c %d%c", testWithChar, p, testWithChar2, p);

    long long int a = 10000000;
    double b = 4544541.542121;
    printf("%lld %lf", a, b);

    return 0;
}