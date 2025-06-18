#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>
#include <windows.h>

struct livro
{
    char capa[50], titulo[50], autor[50], genero[50], comentario[500];
    float nota;
};

void preencherEstante(struct livro estante[4][5])
{
    // Linha 0 - Terror
    strcpy(estante[0][0].titulo, "O Iluminado");
    strcpy(estante[0][0].autor, "Stephen King");
    strcpy(estante[0][0].genero, "Terror");
    strcpy(estante[0][0].capa, "livro1.jpg");

    strcpy(estante[0][1].titulo, "It: A Coisa");
    strcpy(estante[0][1].autor, "Stephen King");
    strcpy(estante[0][1].genero, "Terror");
    strcpy(estante[0][1].capa, "livro1.jpg");

    strcpy(estante[0][2].titulo, "A Casa");
    strcpy(estante[0][2].autor, "André Vianco");
    strcpy(estante[0][2].genero, "Terror");
    strcpy(estante[0][2].capa, "livro1.jpg");

    strcpy(estante[0][3].titulo, "Assombração");
    strcpy(estante[0][3].autor, "Joe Hill");
    strcpy(estante[0][3].genero, "Terror");
    strcpy(estante[0][3].capa, "livro1.jpg");

    strcpy(estante[0][4].titulo, "O Exorcista");
    strcpy(estante[0][4].autor, "William Peter Blatty");
    strcpy(estante[0][4].genero, "Terror");
    strcpy(estante[0][4].capa, "livro1.jpg");

    // Linha 1 - Romance
    strcpy(estante[1][0].titulo, "Orgulho e Preconceito");
    strcpy(estante[1][0].autor, "Jane Austen");
    strcpy(estante[1][0].genero, "Romance");
    strcpy(estante[1][0].capa, "livro1.jpg");

    strcpy(estante[1][1].titulo, "Romeu e Julieta");
    strcpy(estante[1][1].autor, "William Shakespeare");
    strcpy(estante[1][1].genero, "Romance");
    strcpy(estante[1][1].capa, "livro1.jpg");

    strcpy(estante[1][2].titulo, "Como Eu Era Antes de Você");
    strcpy(estante[1][2].autor, "Jojo Moyes");
    strcpy(estante[1][2].genero, "Romance");
    strcpy(estante[1][2].capa, "livro1.jpg");

    strcpy(estante[1][3].titulo, "O Morro dos Ventos Uivantes");
    strcpy(estante[1][3].autor, "Emily Brontë");
    strcpy(estante[1][3].genero, "Romance");
    strcpy(estante[1][3].capa, "livro1.jpg");

    strcpy(estante[1][4].titulo, "A Culpa é das Estrelas");
    strcpy(estante[1][4].autor, "John Green");
    strcpy(estante[1][4].genero, "Romance");
    strcpy(estante[1][4].capa, "livro1.jpg");

    // Linha 2 - Poesia
    strcpy(estante[2][0].titulo, "Alguma Poesia");
    strcpy(estante[2][0].autor, "Carlos Drummond de Andrade");
    strcpy(estante[2][0].genero, "Poesia");
    strcpy(estante[2][0].capa, "livro1.jpg");

    strcpy(estante[2][1].titulo, "Poemas Escolhidos");
    strcpy(estante[2][1].autor, "Cecília Meireles");
    strcpy(estante[2][1].genero, "Poesia");
    strcpy(estante[2][1].capa, "livro1.jpg");

    strcpy(estante[2][2].titulo, "A Rosa do Povo");
    strcpy(estante[2][2].autor, "Carlos Drummond de Andrade");
    strcpy(estante[2][2].genero, "Poesia");
    strcpy(estante[2][2].capa, "livro1.jpg");

    strcpy(estante[2][3].titulo, "Sonetos");
    strcpy(estante[2][3].autor, "Vinícius de Moraes");
    strcpy(estante[2][3].genero, "Poesia");
    strcpy(estante[2][3].capa, "livro1.jpg");

    strcpy(estante[2][4].titulo, "Poema Sujo");
    strcpy(estante[2][4].autor, "Ferreira Gullar");
    strcpy(estante[2][4].genero, "Poesia");
    strcpy(estante[2][4].capa, "livro1.jpg");

    // Linha 3 - Fantasia
    strcpy(estante[3][0].titulo, "O Senhor dos Anéis");
    strcpy(estante[3][0].autor, "J.R.R. Tolkien");
    strcpy(estante[3][0].genero, "Fantasia");
    strcpy(estante[3][0].capa, "livro1.jpg");

    strcpy(estante[3][1].titulo, "Harry Potter");
    strcpy(estante[3][1].autor, "J.K. Rowling");
    strcpy(estante[3][1].genero, "Fantasia");
    strcpy(estante[3][1].capa, "livro1.jpg");

    strcpy(estante[3][2].titulo, "O Nome do Vento");
    strcpy(estante[3][2].autor, "Patrick Rothfuss");
    strcpy(estante[3][2].genero, "Fantasia");
    strcpy(estante[3][2].capa, "livro1.jpg");

    strcpy(estante[3][3].titulo, "Fundação");
    strcpy(estante[3][3].autor, "Isaac Asimov");
    strcpy(estante[3][3].genero, "Fantasia");
    strcpy(estante[3][3].capa, "livro1.jpg");

    strcpy(estante[3][4].titulo, "Eragon");
    strcpy(estante[3][4].autor, "Christopher Paolini");
    strcpy(estante[3][4].genero, "Fantasia");
    strcpy(estante[3][4].capa, "livro1.jpg");
}

void mostrarCapas (struct livro linhaEstante[])
{
    for (int i = 0; i < 5; i++)
    {
        int x1 = 50 + i * 190;  // x e
        int y1 = 100;           // Y inicial
        int x2 = x1 + 140;      // Largura
        int y2 = y1 + 180;      // altura

        readimagefile(linhaEstante[i].capa, x1, y1, x2, y2);

        outtextxy(x1, y2 + 10, linhaEstante[i].titulo);//isso daqui printa o titulo embaixo
    }
}

void detectaLivro(int i, struct livro estante[4][5],int x,int y)
{
    int j = -1; //defini como um valor q não entra nos ifs abaixo pra evitar bug

    if (x >= 50 && x <= 220 && y >= 50 && y <= 282) j = 0;

    if (x >= 240 && x <= 380 && y >= 100 && y <= 280) j = 1;

    if (x >= 430 && x <= 570 && y >= 100 && y <= 280) j = 2;

    if (x >= 620 && x <= 760 && y >= 100 && y <= 280) j = 3;

    if (x >= 810 && x <= 950 && y >= 100 && y <= 280) j = 4;

    if (j != -1) //ou seja, se ele tiver entrado em algum dos ifs
    {
        initwindow(500, 300, estante[i][j].titulo, 0, 0);
        outtextxy(180,10,"Detalhes sobre o livro...");
    }

}

int main()
{
    int opcao,i,j;
    struct livro estante[4][5];
    preencherEstante(estante);

    do
    {
        system("cls");
        printf("Escolha um genero para explorar\n\n");
        printf("1) TERROR\n");
        printf("2) ROMANCE\n");
        printf("3) POESIA\n");
        printf("4) FANTASIA\n");
        printf("5) SAIR\n");

        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1: //terror
            initwindow(1000, 600, "Biblioteca: Terror");
            outtextxy(420,10,"Selecione o seu livro");
            mostrarCapas(estante[0]);
            outtextxy(5,570,"Clique em um livro para ver detalhes ou aperte ESC para sair.");
            while (1)
            {
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    closegraph();
                    break;  // sai do loop e do case quando aperta ESC
                }

                if (GetAsyncKeyState(VK_LBUTTON))
                {
                    delay(1000);  // pra nn bugar e dar clique duplo
                    int x = mousex();
                    int y = mousey();
                    detectaLivro(0, estante, x, y);
                }

                delay(50);  // garantia de q nn vai bugar pq essa função de clique é uma MERDa
            }

            break;
        case 2: //romance
            initwindow(1000, 600, "Biblioteca: Romance");
            outtextxy(420,10,"Selecione o seu livro");
            mostrarCapas(estante[1]);
            outtextxy(5,570,"Clique em um livro para ver detalhes ou aperte ESC para sair.");
            while (1)
            {
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    closegraph();
                    break;  // sai do loop e do case quando aperta ESC
                }

                if (GetAsyncKeyState(VK_LBUTTON))
                {
                    delay(150);  // pra nn bugar e dar clique duplo
                    int x = mousex();
                    int y = mousey();
                    detectaLivro(1, estante, x, y);
                }

                delay(50);  // garantia de q nn vai bugar pq essa função de clique é uma MERDa
            }

            break;
        case 3: //poesia
            initwindow(1000, 600, "Biblioteca: Poesia");
            outtextxy(420,10,"Selecione o seu livro");
            mostrarCapas(estante[2]);
            outtextxy(5,570,"Clique em um livro para ver detalhes ou aperte ESC para sair.");
            while (1)
            {
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    closegraph();
                    break;  // sai do loop e do case quando aperta ESC
                }

                if (GetAsyncKeyState(VK_LBUTTON))
                {
                    delay(150);  // pra nn bugar e dar clique duplo
                    int x = mousex();
                    int y = mousey();
                    detectaLivro(2, estante, x, y);
                }

                delay(50);  // garantia de q nn vai bugar pq essa função de clique é uma MERDa
            }


            break;
        case 4: //fantasia
            initwindow(1000, 600, "Biblioteca: Fantasia");
            outtextxy(420,10,"Selecione o seu livro");
            mostrarCapas(estante[3]);
            outtextxy(5,570,"Clique em um livro para ver detalhes ou aperte ESC para sair.");
            while (1)
            {
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    closegraph();
                    break;  // sai do loop e do case quando aperta ESC
                }

                if (GetAsyncKeyState(VK_LBUTTON))
                {
                    delay(150);  // pra nn bugar e dar clique duplo
                    int x = mousex();
                    int y = mousey();
                    detectaLivro(3, estante, x, y);
                }

                delay(50);  // garantia de q nn vai bugar pq essa função de clique é uma MERDa
            }

            break;
        case 5:
            printf("Saindo...");
            delay(500);
            return 0;
            break;
        default:
            printf("Comando invalido, tente novamente.");
            delay(700);
        }
    }
    while (opcao != 5);

}

