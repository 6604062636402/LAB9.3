#include <stdio.h>
#define MAX 50

void countVowel(char t[]);

int main() {
    char text[MAX];

    printf("Enter text : ");
    scanf("%s", text);

    countVowel(text);

    return 0;
}

void countVowel(char t[]) {
    int i = 0;
    int a=0, e=0, i_v=0, o=0, u=0;

    while (i < MAX && t[i] != '\0') {

        if (t[i]=='A' || t[i]=='a') a++;
        else if (t[i]=='E' || t[i]=='e') e++;
        else if (t[i]=='I' || t[i]=='i') i_v++;
        else if (t[i]=='O' || t[i]=='o') o++;
        else if (t[i]=='U' || t[i]=='u') u++;

        i++;
    }

    printf("Text : [%s]\n", t);
    printf("a = %d\n", a);
    printf("e = %d\n", e);
    printf("i = %d\n", i_v);
    printf("o = %d\n", o);
    printf("u = %d\n", u);
}
