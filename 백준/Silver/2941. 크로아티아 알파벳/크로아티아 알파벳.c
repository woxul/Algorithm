#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);
    
    int cnt = 0;
    int i = 0;
    int len = strlen(str);
    
    while (i < len) {
        if (i + 1 < len && str[i] == 'c' && str[i + 1] == '=') { 
            i += 2;
        }
        else if (i + 1 < len && str[i] == 'c' && str[i + 1] == '-') {
            i += 2;
        }
        else if (i + 2 < len && str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') {
            i += 3;
        }
        else if (i + 1 < len && str[i] == 'd' && str[i + 1] == '-') {
            i += 2;
        }
        else if (i + 1 < len && str[i] == 'l' && str[i + 1] == 'j') {
            i += 2;
        }
        else if (i + 1 < len && str[i] == 'n' && str[i + 1] == 'j') {
            i += 2;
        }
        else if (i + 1 < len && str[i] == 's' && str[i + 1] == '=') {
            i += 2;
        }
        else if (i + 1 < len && str[i] == 'z' && str[i + 1] == '=') {
            i += 2;
        }
        else {
            i++;
        }
        cnt++;
    }
    
    printf("%d\n", cnt);
    return 0;
}
