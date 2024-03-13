#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

void sortString(char *str) {
    int size = strlen(str);
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}


int main() {

    char input[1000];
    printf("Masukkan Kalimat : \n");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    removeSpaces(input);
    sortString(input);
    printf("Output : \n %s\n", input);

return 0;
}
