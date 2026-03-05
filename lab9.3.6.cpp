#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char result[100];
    int i, j, k;
    int count;

    printf("Enter the First string (characters to remove):\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';   

    printf("Enter the Second string:\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';   

    printf("\n--- Summary ---\n");

    for(i = 0; str1[i] != '\0'; i++) {

        count = 0;
        k = 0;

        for(j = 0; str2[j] != '\0'; j++) {
            if(str2[j] == str1[i]) {
                count++;        
            } else {
                result[k++] = str2[j];  
            }
        }
        result[k] = '\0';
        strcpy(str2, result);   

        if(count > 0)
            printf("Character '%c' removed %d time(s)\n", str1[i], count);
        else
            printf("Character '%c' not found\n", str1[i]);
    }

    printf("\nResulting string: %s\n", str2);

    return 0;
}
