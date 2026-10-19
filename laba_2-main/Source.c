#include <stdio.h>
#include <locale.h>
int Format()
{

    printf("%1d\n%3d\n%5d\n%7d\n", 1, 2, 3, 4);
    printf("%10.3f\n", 12.234657);

    printf("%10.3f\n", 12.234657);

    printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);

    printf("Целочисленное деление 7 на 5 = %d\n", 7 / 5);
    printf("Умножение 2000 на 4 = %d\n", 2000 * 4);

    printf("\n--- Эксперименты со спецификаторами ---\n");

    printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
    //Если считать всё на %d будут ошибки и программа выведет 0, тк битые элементы памяти в double
    printf("Все %%f: %f разделить %f равно %f\n", 5., 2000000., 5. / 2000000.);

    printf("Все %%g: %g разделить %g равно %g\n", 5., 2000000., 5. / 2000000.);

    printf("Все %%e: %e разделить %e равно %e\n", 5., 2000000., 5. / 2000000.);
    return 0;
}
int Time() {
    int N = 11;
    int K = 17;
    int all_minut = N * 60 + K + 1;
    int hour_left = 23 - N;
    int min_left = 59 - K;
    printf("Сейчас %d часов %d минут 00 секунд", N, K);
    printf("\nСейчас %d минута суток\n", all_minut);
    printf("\nДо полуночи осталось %d часов и %d минут", hour_left, min_left);
    int seconds = (N - 8) * 3600 + K * 60;
    printf("С 8.00 прошло %d секунд\n", seconds);
    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n", N / 24.0, K / 60.0);
    return 0;

}
int Individual() {
    //  Вариант 7
    double n = 2.0;
    double L = 353.0;
    int k = 2;
    int m = 4;

    double result = n / L;

    printf("Дано:\n"
        "%10g\n"
        "%10g\n"
        "----------\n"
        "Ответ:\n"
        "%+0*.*f\n",
        n,
        L,
        (k + m + 2),
        m,
        result
    );

    return 0;
}
int main()
{
    setlocale(LC_CTYPE, "RUS");
    Format();
    Individual();
}