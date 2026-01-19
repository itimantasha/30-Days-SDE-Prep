//pointer
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));   // same as arr[i]
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

//malloc
int main() {
    int *arr;
    int n = 5;

    arr = (int*) malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);   // important
    return 0;
}
//calloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    arr = (int*) calloc(n, sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);   // initialized to 0
    }

    free(arr);
    return 0;
}
//own string library
#include <stdio.h>

/* Length of string */
int my_strlen(char *s) {
    int count = 0;
    while(*s != '\0') {
        count++;
        s++;
    }
    return count;
}

/* Copy string */
void my_strcpy(char *dest, char *src) {
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

/* Compare strings */
int my_strcmp(char *s1, char *s2) {
    while(*s1 && *s2) {
        if(*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

/* Concatenate strings */
void my_strcat(char *dest, char *src) {
    while(*dest != '\0')
        dest++;

    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
//testing library 
int main() {
    char s1[50] = "Hello";
    char s2[] = "World";
    char s3[50];

    printf("Length: %d\n", my_strlen(s1));

    my_strcpy(s3, s1);
    printf("Copy: %s\n", s3);

    printf("Compare: %d\n", my_strcmp("abc", "abd"));

    my_strcat(s1, s2);
    printf("Concat: %s\n", s1);

    return 0;
}



///////////////////////////   ALL Combined /////////////////////////
#include <stdio.h>
#include <stdlib.h>

/* ================= POINTER ARITHMETIC ================= */
void pointerArithmetic() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("\nPointer Arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

/* ================= MALLOC ================= */
void useMalloc() {
    int n = 5;
    int *arr = (int*) malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Malloc failed\n");
        return;
    }

    printf("\nUsing malloc:\n");
    for(int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }

    free(arr);
    printf("\nMemory freed (malloc)\n");
}

/* ================= CALLOC ================= */
void useCalloc() {
    int n = 5;
    int *arr = (int*) calloc(n, sizeof(int));

    if(arr == NULL) {
        printf("Calloc failed\n");
        return;
    }

    printf("\nUsing calloc (initialized to 0):\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    printf("\nMemory freed (calloc)\n");
}

/* ================= OWN STRING FUNCTIONS ================= */

/* String Length */
int my_strlen(char *s) {
    int count = 0;
    while(*s != '\0') {
        count++;
        s++;
    }
    return count;
}

/* String Copy */
void my_strcpy(char *dest, char *src) {
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

/* String Compare */
int my_strcmp(char *s1, char *s2) {
    while(*s1 && *s2) {
        if(*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

/* String Concatenate */
void my_strcat(char *dest, char *src) {
    while(*dest != '\0')
        dest++;

    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

/* ================= MAIN FUNCTION ================= */
int main() {

    pointerArithmetic();
    useMalloc();
    useCalloc();

    printf("\nOwn String Library:\n");

    char s1[50] = "Hello";
    char s2[] = "World";
    char s3[50];

    printf("Length of '%s' = %d\n", s1, my_strlen(s1));

    my_strcpy(s3, s1);
    printf("Copied string = %s\n", s3);

    printf("Compare abc & abd = %d\n", my_strcmp("abc", "abd"));

    my_strcat(s1, s2);
    printf("Concatenated string = %s\n", s1);

    return 0;
}

