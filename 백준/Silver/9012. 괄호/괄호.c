#include <stdio.h>
#include <string.h> 

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[51];
        scanf("%s", str); 
        int count = 0;  
        int isValid = 1;  

        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == '(') {
                count++; 
            } else if (str[i] == ')') {
                count--; 
                if (count < 0) {
                    isValid = 0;
                    break;
                }
            }
        }

        if (count != 0) {
            isValid = 0;
        }

        if (isValid) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
