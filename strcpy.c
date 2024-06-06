#include <stdio.h>

int main() {
    printf("char* strcpy(char* strDest, const char* strSrc) {\n"
           "    char* temp = strDest;\n"
           "    while ((*strDest++ = *strSrc++) != '\\0');\n"
           "    return temp;\n"
           "}\n");
    return 0;
}
