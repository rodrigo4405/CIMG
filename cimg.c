#include <stdio.h>
#include <string.h>
#define VALID_EXTENSIONS 3

const char* exts[VALID_EXTENSIONS] = {'png', 'jpg', 'webp'};

typedef struct{
    int R;
    int G;
    int B;
} PIXEL;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("No image specified. / Nenhuma imagem selecionada.");
        return 1;
    }

    FILE *img = fopen(argv[1], 'r');

    const char *d = sttrch(argv[1], '.') + 1;

    if (!img || !d) {
        printf("Invalid file. / Ficheiro inválido.");
    }

}

int vext(char* ext) {
    for (int i  = 0; i < VALID_EXTENSIONS; i++) {
        if (!strcmp(exts[i], ext)) {
            return 1;
        }
    }
    
    return 0;
}