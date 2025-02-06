#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define VALID_EXTENSIONS 3

const char* exts[VALID_EXTENSIONS] = {"png", "jpg", "webp"};

typedef struct{
    int R;
    int G;
    int B;
} PIXEL;

typedef struct{
    PIXEL pixel;
} IMG;

//int vext(char* ext);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("No image specified. / Nenhuma imagem selecionada.");
        return 1;
    }

    FILE *img = fopen(argv[1], "rb");

    /*
    const char* d = sttrchr(argv[1], '.');

    if (!d) {
        return 3;
    }
    */

    if (!img) {
        printf("Invalid file. / Ficheiro inválido.");
    }

    fseek(img, 0, SEEK_END);
    const long INITIAL_SIZE = ftell(img);
    fseek(img, 0, SEEK_SET);

    printf("Initial Size: %ld Bytes\n", INITIAL_SIZE);

    fclose(img);

}

/*
int vext(char* ext) {
    for (int i  = 0; i < VALID_EXTENSIONS; i++) {
        if (!strcmp(exts[i], ext)) {
            return 1;
        }
    }
    
    return 0;
}
*/