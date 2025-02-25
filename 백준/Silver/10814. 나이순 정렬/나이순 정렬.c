#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[101];
    int order;
} member;

int compare(const void *a, const void *b) {
    member *m1 = (member *)a;
    member *m2 = (member *)b;

    if (m1->age != m2->age) {
        return m1->age - m2->age;
    } else {
        return m1->order - m2->order;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    member m[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &m[i].age, m[i].name);
        m[i].order = i; 
    }
    
    qsort(m, n, sizeof(member), compare);
    
    for (int i = 0; i < n; i++) {
        printf("%d %s\n", m[i].age, m[i].name);
    }
    
    return 0;
}
