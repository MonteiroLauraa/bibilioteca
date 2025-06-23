#include <graphics.h>
#include <stdio.h>

#define WIDTH 1200
#define HEIGHT 209
#define AREA_COUNT 5

void desenhaFundo(const char *fundo) {
    readimagefile(fundo, 0, 0, WIDTH, HEIGHT);
}

// Função chamada quando o mouse é clicado
void onMouseClick(int x, int y) {
    int areaWidth = WIDTH / AREA_COUNT;
    int index = x / areaWidth;  // determina a área clicada: 0..5

    if (index >= 0 && index < AREA_COUNT) {
        char filename[32];
        const char *names[AREA_COUNT] = {
            "onestar.jpg", "onestar.jpg", "onestar.jpg",
            "onestar.jpg", "onestar.jpg"
        };
        sprintf(filename, "%s", names[index]);

        // Desenha a imagem dentro da área
        int left = index * areaWidth;
        int right = left + areaWidth;
        readimagefile(filename, left, 0, right, HEIGHT);
    }
}

int main() {
    initwindow(WIDTH, HEIGHT, "De sua nota");

    desenhaFundo("fundo.jpg");

    // Divisão visual da tela em colunas
    setcolor(WHITE);
    for (int i = 1; i < AREA_COUNT; ++i) {
        int x = i * (WIDTH / AREA_COUNT);
        line(x, 0, x, HEIGHT);
    }

    // Registra o evento de clique do botão esquerdo do mouse
    registermousehandler(WM_LBUTTONDOWN, onMouseClick);

    // Loop principal: aguarda ESC para sair
    while (!kbhit()) {
        delay(50);
    }

    closegraph();
    return 0;
}

