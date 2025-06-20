#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>
#include <windows.h>

struct livro
{
    char capa[50], titulo[50], autor[50], genero[50], comentario[500],ano[5];
    float nota;
};

void preencherEstante(struct livro estante[4][5])
{
    strcpy(estante[0][0].titulo, "O Iluminado");
    strcpy(estante[0][0].autor, "Stephen King");
    strcpy(estante[0][0].genero, "Terror");
    strcpy(estante[0][0].capa, "livro1.jpg");
    strcpy(estante[0][0].comentario, "Jack Torrance leva sua fam�lia ao isolado Hotel Overlook para ser zelador no inverno.L�, for�as sobrenaturais influenciam sua mente j� inst�vel.Seu filho Danny, com poderes ps�quicos, sente a presen�a maligna do lugar.O hotel revela vis�es perturbadoras e hist�rias de viol�ncia.Jack enlouquece, colocando a vida da fam�lia em risco. ");
    strcpy(estante[0][0].ano, "1977");

    strcpy(estante[0][1].titulo, "It: A Coisa");
    strcpy(estante[0][1].autor, "Stephen King");
    strcpy(estante[0][1].genero, "Terror");
    strcpy(estante[0][1].capa, "livro1.jpg");
    strcpy(estante[0][1].comentario, "Em Derry, crian�as desaparecem misteriosamente a cada 27 anos.Um grupo de amigos enfrenta uma entidade que assume a forma de seus maiores medos.Pennywise, o palha�o dan�arino, � a forma mais recorrente da criatura.Eles derrotam \"A Coisa\" quando crian�as, mas ela retorna anos depois.J� adultos, eles se re�nem para enfrentar novamente o terror. ");
    strcpy(estante[0][1].ano, "1986");

    strcpy(estante[0][2].titulo, "A Casa ");
    strcpy(estante[0][2].autor, "Andre Vianco");
    strcpy(estante[0][2].genero, "Terror");
    strcpy(estante[0][2].capa, "livro1.jpg");
    strcpy(estante[0][2].comentario, " Um grupo � convidado a investigar a mans�o Hill House.A casa mostra-se viva, com eventos estranhos e atmosfera opressiva.Eleanor, sens�vel e solit�ria, se conecta profundamente com o lugar.As manifesta��es sobrenaturais aumentam, afetando o equil�brio mental dos h�spedes.O horror psicol�gico se intensifica at� um desfecho tr�gico. ");
    strcpy(estante[0][2].ano, "2002");

    strcpy(estante[0][3].titulo, "Assombra��o ");
    strcpy(estante[0][3].autor, "Joe Hill");
    strcpy(estante[0][3].genero, "Terror");
    strcpy(estante[0][3].capa, "livro1.jpg");
    strcpy(estante[0][3].comentario, "Uma fam�lia descobre que sua casa � maior por dentro do que por fora.C�maras e corredores surgem misteriosamente, levando � escurid�o.Explora��es revelam um abismo sem fim e eventos inexplic�veis.A narrativa � complexa, com m�ltiplos pontos de vista e metalinguagem.O terror cresce conforme a casa consome a sanidade de todos. ");
    strcpy(estante[0][3].ano, "2019");

    strcpy(estante[0][4].titulo, "O Exorcista ");
    strcpy(estante[0][4].autor, "William Peter Blatty");
    strcpy(estante[0][4].genero, "Terror");
    strcpy(estante[0][4].capa, "livro1.jpg");
    strcpy(estante[0][4].comentario, "A jovem Regan come�a a apresentar comportamentos estranhos e violentos.Sua m�e busca explica��es m�dicas e psiqui�tricas, sem sucesso.Um padre, com ajuda de um exorcista experiente, � chamado para ajud�-la.Descobre-se que ela est� possu�da por uma entidade demon�aca.O exorcismo � brutal e arriscado, testando f� e resist�ncia at� o fim. ");
    strcpy(estante[0][4].ano, "1971");

    // Linha 1 - Romance
    strcpy(estante[1][0].titulo, "Orgulho e Preconceito ");
    strcpy(estante[1][0].autor, "Jane Austen");
    strcpy(estante[1][0].genero, "Romance");
    strcpy(estante[1][0].capa, "livro1.jpg");
    strcpy(estante[1][0].comentario, "Elizabeth Bennet vive em uma sociedade onde casamentos s�o essenciais para estabilidade social.Ela conhece o reservado Sr. Darcy, e os dois se julgam mal � primeira vista.Com o tempo, ambos enfrentam seus pr�prios preconceitos.O orgulho dele e a vis�o cr�tica dela criam conflitos e amadurecimento.O romance destaca temas como classe, car�ter e amor verdadeiro." );
    strcpy(estante[1][0].ano, "1813");

    strcpy(estante[1][1].titulo, "Romeu e Julieta ");
    strcpy(estante[1][1].autor, "William Shakespeare");
    strcpy(estante[1][1].genero, "Romance");
    strcpy(estante[1][1].capa, "livro1.jpg");
    strcpy(estante[1][1].comentario, "Dois jovens de fam�lias rivais, Mont�quio e Capuleto, se apaixonam.Apesar da paix�o intensa, o �dio entre as fam�lias impede o amor.Eles se casam em segredo e fazem planos para fugir juntos.Um mal-entendido leva � morte tr�gica dos dois amantes.A pe�a � um �cone do amor proibido e das consequ�ncias do �dio. ");
    strcpy(estante[1][1].ano, "1597");

    strcpy(estante[1][2].titulo, " Como Eu Era Antes de Voc� ");
    strcpy(estante[1][2].autor, "Jojo Moyes");
    strcpy(estante[1][2].genero, "Romance");
    strcpy(estante[1][2].capa, "livro1.jpg");
    strcpy(estante[1][2].comentario, "Louisa Clark aceita cuidar de Will Traynor, um tetrapl�gico amargurado.Aos poucos, eles se aproximam e ela tenta devolver-lhe a vontade de viver.Lou descobre que Will deseja realizar suic�dio assistido.Entre discuss�es, carinho e crescimento pessoal, nasce um forte amor. ");
    strcpy(estante[1][2].ano, "2012");

    strcpy(estante[1][3].titulo, " O Morro dos Ventos Uivantes ");
    strcpy(estante[1][3].autor, "Emily Bront�");
    strcpy(estante[1][3].genero, "Romance");
    strcpy(estante[1][3].capa, "livro1.jpg");
    strcpy(estante[1][3].comentario,"Heathcliff � adotado por uma fam�lia rica e se apaixona por Catherine.Separa��es, vingan�a e orgulho alimentam um ciclo destrutivo entre gera��es.O amor entre Heathcliff e Catherine � intenso e sombrio.A hist�ria � narrada por terceiros, revelando as trag�dias da fam�lia.� um cl�ssico g�tico sobre paix�o, obsess�o e rancor. ");
    strcpy(estante[1][3].ano, "1847");

    strcpy(estante[1][4].titulo, "A Culpa � das Estrelas");
    strcpy(estante[1][4].autor, "John Green");
    strcpy(estante[1][4].genero, "Romance");
    strcpy(estante[1][4].capa, "livro1.jpg");
    strcpy(estante[1][4].comentario,"Hazel Grace, com c�ncer terminal, conhece Augustus Waters num grupo de apoio.Eles compartilham amor por literatura e vivem uma conex�o profunda.V�o juntos � Holanda para conhecer o autor favorito de Hazel.Vivem momentos intensos apesar da doen�a e das limita��es.A hist�ria fala sobre amor, perda, juventude e eternidade em meio � finitude. ");
    strcpy(estante[1][4].ano, "2012");

    // Linha 2 - Poesia
    strcpy(estante[2][0].titulo, "Alguma Poesia");
    strcpy(estante[2][0].autor, "Carlos Drummond de Andrade");
    strcpy(estante[2][0].genero, "Poesia");
    strcpy(estante[2][0].capa, "livro1.jpg");
    strcpy(estante[2][0].comentario,"Primeiro livro de Drummond, marca o in�cio do modernismo mineiro.Re�ne poemas com linguagem coloquial, ironia e introspec��o.Questiona o papel do poeta e os dilemas da exist�ncia.Traz o famoso poema No meio do caminho.Inaugura um estilo �nico na poesia brasileira. ");
    strcpy(estante[2][0].ano, "1930");

    strcpy(estante[2][1].titulo, "Poemas Escolhidos");
    strcpy(estante[2][1].autor, "Cec�lia Meireles");
    strcpy(estante[2][1].genero, "Poesia");
    strcpy(estante[2][1].capa, "livro1.jpg");
    strcpy(estante[2][1].comentario,"Re�ne os versos mais representativos do poeta barroco baiano.Greg�rio � conhecido por sua s�tira mordaz e cr�tica social.Alterna entre poesia er�tica, religiosa e pol�tica.Chamado de Boca do Inferno por seu tom provocador.Suas poesias revelam o Brasil colonial com ironia e for�a. ");
    strcpy(estante[2][1].ano, "1700");

    strcpy(estante[2][2].titulo, "A Rosa do Povo");
    strcpy(estante[2][2].autor, "Carlos Drummond de Andrade");
    strcpy(estante[2][2].genero, "Poesia");
    strcpy(estante[2][2].capa, "livro1.jpg");
    strcpy(estante[2][2].comentario,"Escrito durante a Segunda Guerra Mundial, une o pessoal ao pol�tico.Drummond reflete ang�stias do mundo moderno e o sofrimento coletivo.A rosa simboliza esperan�a, mesmo em tempos sombrios.A linguagem � mais direta, com tons sociais e existenciais.� uma das obras mais densas e humanas do autor. ");
    strcpy(estante[2][2].ano, "1945");

    strcpy(estante[2][3].titulo, "Sonetos");
    strcpy(estante[2][3].autor, "Vin�cius de Moraes");
    strcpy(estante[2][3].genero, "Poesia");
    strcpy(estante[2][3].capa, "livro1.jpg");
    strcpy(estante[2][3].comentario, "Colet�nea dos sonetos mais famosos do poeta renascentista portugu�s.Cam�es aborda amor idealizado, dor da aus�ncia e fugacidade do tempo.Com rigor formal, os sonetos revelam beleza e melancolia.Mistura raz�o e emo��o com linguagem refinada.Sua obra influenciou profundamente a literatura de l�ngua portuguesa ");
    strcpy(estante[2][3].ano, "1595");

    strcpy(estante[2][4].titulo, "Poema Sujo");
    strcpy(estante[2][4].autor, "Ferreira Gullar");
    strcpy(estante[2][4].genero, "Poesia");
    strcpy(estante[2][4].capa, "livro1.jpg");
    strcpy(estante[2][4].comentario, "Escrito no ex�lio durante a ditadura militar brasileira.� um longo desabafo sobre mem�ria, identidade e pol�tica.Gullar mistura lembran�as pessoais com o caos do pa�s.O poema tem tom confessional, emocional e de den�ncia.� considerado um dos maiores poemas da literatura brasileira. ");
    strcpy(estante[2][4].ano, "1976");

    // Linha 3 - Fantasia
    strcpy(estante[3][0].titulo, "O Senhor dos An�is");
    strcpy(estante[3][0].autor, "J.R.R. Tolkien");
    strcpy(estante[3][0].genero, "Fantasia");
    strcpy(estante[3][0].capa, "livro1.jpg");
    strcpy(estante[3][0].comentario, "Frodo Bolseiro recebe o Um Anel, artefato maligno de Sauron.Ele parte em uma jornada para destru�-lo no vulc�o da Montanha da Perdi��o.Com seus companheiros, forma a Sociedade do Anel.O livro descreve um mundo riqu�ssimo, com elfos, an�es, magos e guerras �picas.� um marco da literatura fant�stica, sobre coragem, amizade e sacrif�cio. ");
    strcpy(estante[3][0].ano, "1954");

    strcpy(estante[3][1].titulo, "Harry Potter");
    strcpy(estante[3][1].autor, "J.K. Rowling");
    strcpy(estante[3][1].genero, "Fantasia");
    strcpy(estante[3][1].capa, "livro1.jpg");
    strcpy(estante[3][1].comentario, "Harry descobre aos 11 anos que � um bruxo e vai para Hogwarts.L�, faz amizades e descobre sua liga��o com o vil�o Voldemort.Ele enfrenta desafios m�gicos e tenta impedir o roubo da Pedra Filosofal.O livro mistura magia, mist�rio e crescimento pessoal.Inicia a saga que marcou gera��es com temas de amor e coragem. ");
    strcpy(estante[3][1].ano, "1997");

    strcpy(estante[3][2].titulo, "O Nome do Vento");
    strcpy(estante[3][2].autor, "Patrick Rothfuss");
    strcpy(estante[3][2].genero, "Fantasia");
    strcpy(estante[3][2].capa, "livro1.jpg");
    strcpy(estante[3][2].comentario, "Kvothe, um lend�rio mago e her�i, narra sua hist�ria de vida.Desde a inf�ncia com artistas itinerantes at� sua entrada na Universidade.Ele busca entender os Chandrian, seres sombrios ligados � trag�dia em sua vida.Com intelig�ncia e paix�o, aprende m�sica, alquimia e magia.� uma fantasia rica e l�rica sobre saber, dor e lenda. ");
    strcpy(estante[3][2].ano, "2007");

    strcpy(estante[3][3].titulo, "Funda��o");
    strcpy(estante[3][3].autor, "Isaac Asimov");
    strcpy(estante[3][3].genero, "Fantasia");
    strcpy(estante[3][3].capa, "livro1.jpg");
    strcpy(estante[3][3].comentario, "O matem�tico Hari Seldon prev� a queda do Imp�rio Gal�ctico.Para preservar o conhecimento humano, cria a Funda��o.Ao longo dos s�culos, crises pol�ticas e sociais desafiam seu plano.A obra une ci�ncia, filosofia e hist�ria em um universo futurista.� um cl�ssico da fic��o cient�fica sobre previsibilidade e controle social. ");
    strcpy(estante[3][3].ano, "1951");

    strcpy(estante[3][4].titulo, "Eragon");
    strcpy(estante[3][4].autor, "Christopher Paolini");
    strcpy(estante[3][4].genero, "Fantasia");
    strcpy(estante[3][4].capa, "livro1.jpg");
    strcpy(estante[3][4].comentario, "Eragon, um jovem fazendeiro, encontra um ovo de drag�o.Quando Saphira nasce, ele descobre ser um Cavaleiro do Drag�o.Inicia uma jornada de autoconhecimento e luta contra o imp�rio tir�nico.Com a ajuda de mentores e aliados, enfrenta perigos e magia.� uma aventura �pica de coragem, fantasia e amadurecimento. ");
    strcpy(estante[3][4].ano, "2002");

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
        outtextxy(x1, y2 + 30, linhaEstante[i].autor);
    }
}

void quebraLinha (char comentario[1000],int tamanhoMax)
{
    int i,tamanhoTexto,ultimoEspaco,linha=0,y=560,linhaComeco,tamanhoParaCopiar;
    char comentarioLinha[1000];

    tamanhoTexto = strlen(comentario);
    strcpy(comentarioLinha,comentario);
    linhaComeco = 0;

    for(i=0; i<=tamanhoTexto; i++)
    {
        if(comentario[i] == ' ')
        {
            ultimoEspaco = i;
        }
        if(i == tamanhoMax*(linha+1)|| (ultimoEspaco<i && i==tamanhoTexto))
        {
            strncpy(comentarioLinha, &comentario[linhaComeco],tamanhoParaCopiar = ultimoEspaco - linhaComeco);
            comentarioLinha[ultimoEspaco - linhaComeco] = '\0';
            y = 565+20*linha;
            outtextxy(280,y,comentarioLinha);
            linha++;
            linhaComeco = ultimoEspaco+1;
        }
    }
}

void detectaLivro(int i, struct livro estante[4][5],int x,int y)
{
    int j = -1; //defini como um valor q n�o entra nos ifs abaixo pra evitar bug

    if (x >= 50 && x <= 220 && y >= 50 && y <= 282) j = 0;

    if (x >= 240 && x <= 380 && y >= 100 && y <= 280) j = 1;

    if (x >= 430 && x <= 570 && y >= 100 && y <= 280) j = 2;

    if (x >= 620 && x <= 760 && y >= 100 && y <= 280) j = 3;

    if (x >= 810 && x <= 950 && y >= 100 && y <= 280) j = 4;

    if (j != -1) //ou seja, se ele tiver entrado em algum dos ifs
    {
        setfillstyle(SOLID_FILL, BLACK);
        bar(10,375,1000,750);
        outtextxy(400,380,"Detalhes sobre o livro...");
        readimagefile(estante[i][j].capa,50,430,260,720);
        outtextxy(280,450, "T�tulo: ");
        outtextxy(325,450, estante[i][j].titulo);
        outtextxy(280,470, "Autor(a): ");
        outtextxy(340,470, estante[i][j].autor);
        outtextxy(280,490, "Ano de Publica��o:  ");
        outtextxy(410,490, estante[i][j].ano);
        outtextxy(280,540, "Sinopse ======================");
        quebraLinha(estante[i][j].comentario,90);
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
            initwindow(1000, 750, "Biblioteca: Terror");
            outtextxy(420,10,"Selecione o seu livro");
            mostrarCapas(estante[0]);
            outtextxy(5,10,"{   Sair (ESC)   }");
            outtextxy(5,350,"===========================================================================================================================");
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

                delay(50);  // garantia de q nn vai bugar pq essa fun��o de clique � uma MERDa
            }

            break;
        case 2: //romance
            initwindow(1000, 750, "Biblioteca: Romance");
            outtextxy(420,10,"Selecione o seu livro");
            mostrarCapas(estante[1]);
            outtextxy(5,10,"{   Sair (ESC)   }");
            outtextxy(5,350,"===========================================================================================================================");
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

                delay(50);  // garantia de q nn vai bugar pq essa fun��o de clique � uma MERDa
            }

            break;
        case 3: //poesia
            initwindow(1000, 750, "Biblioteca: Poesia");
            outtextxy(420,10,"Selecione o seu livro");
            mostrarCapas(estante[2]);
            outtextxy(5,10,"{   Sair (ESC)   }");
            outtextxy(5,350,"===========================================================================================================================");
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

                delay(50);  // garantia de q nn vai bugar pq essa fun��o de clique � uma MERDa
            }


            break;
        case 4: //fantasia
            initwindow(1000, 750, "Biblioteca: Fantasia");
            outtextxy(420,10,"Selecione o seu livro");
            mostrarCapas(estante[3]);
            outtextxy(5,10,"{   Sair (ESC)   }");
            outtextxy(5,350,"===========================================================================================================================");
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

                delay(50);  // garantia de q nn vai bugar pq essa fun��o de clique � uma MERDa
            }

            break;
        case 5:
            printf("Saindo...\n\n\n");
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

