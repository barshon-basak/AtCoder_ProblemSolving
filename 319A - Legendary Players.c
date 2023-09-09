#include <stdio.h>
#include <string.h>

int main() {

    char usernames[][20] = {
        "tourist",
        "ksun48",
        "Benq",
        "Um_nik",
        "apiad",
        "Stonefeang",
        "ecnerwala",
        "mnbvmar",
        "newbiedmy",
        "semiexp"
    };

    int codes[] = {
        3858,
        3679,
        3658,
        3648,
        3638,
        3630,
        3613,
        3555,
        3516,
        3481
    };

    char inputUsername[20];
    scanf("%s", inputUsername);

    for (int i = 0; i < 10; i++) {
        if (strcmp(inputUsername, usernames[i]) == 0) {
            printf("%d", codes[i]);
            break;
        }
    }

    return 0;
}
