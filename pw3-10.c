#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main() {
setlocale(LC_ALL,"");
wchar_t kk[16], dd[21], bb[6];
wscanf(L"%s %s %s", kk, dd, bb);
wprintf(L"%-16s|%21s|%.5s\n", kk, dd, bb);
return 0;
}
