#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main() {
setlocale(LC_ALL,"");
wchar_t name[100];
wscanf(L"%s", name);
wprintf(L"Агент %s авторизован в системе\n", name);
return 0;
}
