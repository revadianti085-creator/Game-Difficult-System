#include <stdio.h>

typedef enum { Easy, Medium, Hard, Nightmare} Difficulty;

int main() {

    Difficulty kesulitan = Hard;
    switch(kesulitan) {
        case Nightmare: printf("Kamu Memilih Nightmare\n"); break;
        case Hard: printf("Kamu Memilih Hard\n"); break;
        case Medium: printf("Kamu Memilih Medium\n"); break;
        case Easy: printf("Kamu Memilih Easy\n"); break;
    }
    return 0;
}
