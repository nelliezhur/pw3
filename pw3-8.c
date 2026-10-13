#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "");
char frfr[] = "Сбой матрицы";
wchar_t sese[] = L"Сбой матрицы";
printf("char -> sizeof: %zd bytes, strlen: %d chars\n", sizeof frfr, strlen(frfr));
printf("wchar -> sizeof: %zd bytes, wcslen: %d chars\n", sizeof SESE, wcslen(SESE));  
return 0;
}
