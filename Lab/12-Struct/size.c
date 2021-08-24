#include <stdio.h>

struct s1 {
    int f1;
    int f2;
    char f3[12];
};

struct s2 {
    int f1;
    char f2[3];
    char f3[2];
};

struct s3 {
    int f1;
    char f2[3];
    char f3[2];
} __attribute__((packed));

int main () {
    printf("%lu\n", sizeof(struct s1));
    printf("%lu\n", sizeof(struct s2));
    printf("%lu\n", sizeof(struct s3));
}