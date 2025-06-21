#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>
#include <windows.h>

struct livro
{
    char capa[50], titulo[50], autor[50], genero[50], comentario[500];
    int ano;
    float nota;
};

void preencherEstante(struct livro estante[4][5])
{
    // Linha 0 - Terror
    strcpy(estante[0][0].titulo, "O Iluminado");
    strcpy(estante[0][0].autor, "Stephen King");
    strcpy(estante[0][0].genero, "Terror");
    strcpy(estante[0][0].capa, "iluminado.jpg");
    estante[0][0].ano= 1977;
    strcpy(estante[0][0].comentario,"Jack Torrance leva sua família ao isolado Hotel Overlook para ser zelador no inverno.Lá, forças sobrenaturais influenciam sua mente já instável.Seu filho Danny, com poderes psíquicos, sente a presença maligna do lugar.O hotel revela visões perturbadoras e histórias de violência.Jack enlouquece, colocando a vida da família em risco.");

    strcpy(estante[0][1].titulo, "It: A Coisa");
    strcpy(estante[0][1].autor, "Stephen King");
    strcpy(estante[0][1].genero, "Terror");
    strcpy(estante[0][1].capa, "it.jpg");
    strcpy(estante[0][1].comentario, "Em Derry, crianças desaparecem misteriosamente a cada 27 anos.Um grupo de amigos enfrenta uma entidade que assume a forma de seus maiores medos.Pennywise, o palhaço dançarino, é a forma mais recorrente da criatura.Eles derrotam ""A Coisa"" quando crianças, mas ela retorna anos depois.Já adultos, eles se reúnem para enfrentar novamente o terror.");
    estante[0][1].ano=1986;

    strcpy(estante[0][2].titulo, " A Casa ");
    strcpy(estante[0][2].autor, "Andre Vianco");
    strcpy(estante[0][2].genero, "Terror");
    strcpy(estante[0][2].capa, "casa.jpg");
    strcpy(estante[0][2].comentario," Um grupo é convidado a investigar a mansão Hill House.A casa mostra-se viva, com eventos estranhos e atmosfera opressiva.Eleanor, sensível e solitária, se conecta profundamente com o lugar.As manifestações sobrenaturais aumentam, afetando o equilíbrio mental dos hóspedes.O horror psicológico se intensifica até um desfecho trágico.");
    estante[0][2].ano=2002;

    strcpy(estante[0][3].titulo, " Assombracao ");
    strcpy(estante[0][3].autor, "Joe Hill");
    strcpy(estante[0][3].genero, "Terror");
    strcpy(estante[0][3].capa, "assombracao.jpg");
    strcpy(estante[0][3].comentario,"Uma família descobre que sua casa é maior por dentro do que por fora.Câmaras e corredores surgem misteriosamente, levando à escuridão.Explorações revelam um abismo sem fim e eventos inexplicáveis.A narrativa é complexa, com múltiplos pontos de vista e metalinguagem.O terror cresce conforme a casa consome a sanidade de todos.");
    estante[0][3].ano=2019;

    strcpy(estante[0][4].titulo, " O Exorcista ");
    strcpy(estante[0][4].autor, "William Peter Blatty");
    strcpy(estante[0][4].genero, "Terror");
    strcpy(estante[0][4].capa, "exorcista.jpg");
    strcpy(estante[0][4].comentario,"A jovem Regan começa a apresentar comportamentos estranhos e violentos.Sua mãe busca explicações médicas e psiquiátricas, sem sucesso.Um padre, com ajuda de um exorcista experiente, é chamado para ajudá-la.Descobre-se que ela está possuída por uma entidade demoníaca.O exorcismo é brutal e arriscado, testando fé e resistência até o fim.");
    estante[0][4].ano= 1971;

    // Linha 1 - Romance
    strcpy(estante[1][0].titulo, " Orgulho e Preconceito ");
    strcpy(estante[1][0].autor, "Jane Austen");
    strcpy(estante[1][0].genero, "Romance");
    strcpy(estante[1][0].capa, "orgulhoepreconceito.jpg");
    strcpy(estante[1][0].comentario, "Elizabeth Bennet vive em uma sociedade onde casamentos são essenciais para estabilidade social.Ela conhece o reservado Sr. Darcy, e os dois se julgam mal à primeira vista.Com o tempo, ambos enfrentam seus próprios preconceitos.O orgulho dele e a visão crítica dela criam conflitos e amadurecimento.O romance destaca temas como classe, caráter e amor verdadeiro.");
    estante[1][0].ano=1813;

    strcpy(estante[1][1].titulo, " Romeu e Julieta ");
    strcpy(estante[1][1].autor, "William Shakespeare");
    strcpy(estante[1][1].genero, "Romance");
    strcpy(estante[1][1].capa, "romeuejulieta.jpg");
    strcpy(estante[1][1].comentario, "Dois jovens de famílias rivais, Montéquio e Capuleto, se apaixonam.Apesar da paixão intensa, o ódio entre as famílias impede o amor.Eles se casam em segredo e fazem planos para fugir juntos.Um mal-entendido leva à morte trágica dos dois amantes.A peça é um ícone do amor proibido e das consequências do ódio.");
    estante[1][1].ano=1597;

    strcpy(estante[1][2].titulo, " Como Eu Era Antes de Voce ");
    strcpy(estante[1][2].autor, "Jojo Moyes");
    strcpy(estante[1][2].genero, "Romance");
    strcpy(estante[1][2].capa, "comoeueraantesdevoce.jpg");
    strcpy(estante[1][2].comentario, "Louisa Clark aceita cuidar de Will Traynor, um tetraplégico amargurado.Aos poucos, eles se aproximam e ela tenta devolver-lhe a vontade de viver.Lou descobre que Will deseja realizar suicídio assistido.Entre discussões, carinho e crescimento pessoal, nasce um forte amor.");
    estante[1][2].ano=2012;

    strcpy(estante[1][3].titulo, " O Morro dos Ventos Uivantes ");
    strcpy(estante[1][3].autor, "Emily Bront�");
    strcpy(estante[1][3].genero, "Romance");
    strcpy(estante[1][3].capa, "omorrodosventosuivantes.jpg");
    strcpy(estante[1][3].comentario,"Heathcliff é adotado por uma família rica e se apaixona por Catherine.Separações, vingança e orgulho alimentam um ciclo destrutivo entre gerações.O amor entre Heathcliff e Catherine é intenso e sombrio.A história é narrada por terceiros, revelando as tragédias da família.É um clássico gótico sobre paixão, obsessão e rancor.");
    estante[1][3].ano=1847;

    strcpy(estante[1][4].titulo, "A Culpa � das Estrelas");
    strcpy(estante[1][4].autor, "John Green");
    strcpy(estante[1][4].genero, "Romance");
    strcpy(estante[1][4].capa, "culpadasestrelas.jpg");
    strcpy(estante[1][4].comentario,"Hazel Grace, com câncer terminal, conhece Augustus Waters num grupo de apoio.Eles compartilham amor por literatura e vivem uma conexão profunda.Vão juntos à Holanda para conhecer o autor favorito de Hazel.Vivem momentos intensos apesar da doença e das limitações.A história fala sobre amor, perda, juventude e eternidade em meio à finitude.");
    estante[1][4].ano=2012;

    // Linha 2 - Poesia
    strcpy(estante[2][0].titulo, "Alguma Poesia");
    strcpy(estante[2][0].autor, "Carlos Drummond de Andrade");
    strcpy(estante[2][0].genero, "Poesia");
    strcpy(estante[2][0].capa, "algumapoesia.jpg");
    strcpy(estante[2][0].comentario,"Primeiro livro de Drummond, marca o início do modernismo mineiro.Reúne poemas com linguagem coloquial, ironia e introspecção.Questiona o papel do poeta e os dilemas da existência.Traz o famoso poema No meio do caminho.Inaugura um estilo único na poesia brasileira.");
    estante[2][0].ano=1930;

    strcpy(estante[2][1].titulo, "Poemas Escolhidos");
    strcpy(estante[2][1].autor, "Cec�lia Meireles");
    strcpy(estante[2][1].genero, "Poesia");
    strcpy(estante[2][1].capa, "poemasescolhidos.jpg");
    strcpy(estante[2][1].comentario,"Reúne os versos mais representativos do poeta barroco baiano.Gregório é conhecido por sua sátira mordaz e crítica social.Alterna entre poesia erótica, religiosa e política.Chamado de Boca do Inferno por seu tom provocador.Suas poesias revelam o Brasil colonial com ironia e força.");
    estante[2][1].ano= 1700;

    strcpy(estante[2][2].titulo, "A Rosa do Povo");
    strcpy(estante[2][2].autor, "Carlos Drummond de Andrade");
    strcpy(estante[2][2].genero, "Poesia");
    strcpy(estante[2][2].capa, "arosadodpovo.jpg");
    strcpy(estante[2][2].comentario,"Escrito durante a Segunda Guerra Mundial, une o pessoal ao político.Drummond reflete angústias do mundo moderno e o sofrimento coletivo.A rosa simboliza esperança, mesmo em tempos sombrios.A linguagem é mais direta, com tons sociais e existenciais.É uma das obras mais densas e humanas do autor.");
    estante[2][2].ano=1945;

    strcpy(estante[2][3].titulo, "Sonetos");
    strcpy(estante[2][3].autor, "Vinicius de Moraes");
    strcpy(estante[2][3].genero, "Poesia");
    strcpy(estante[2][3].capa, "sonetos.jpg");
    strcpy(estante[2][3].comentario, "Coletânea dos sonetos mais famosos do poeta renascentista português.Camões aborda amor idealizado, dor da ausência e fugacidade do tempo.Com rigor formal, os sonetos revelam beleza e melancolia.Mistura razão e emoção com linguagem refinada.Sua obra influenciou profundamente a literatura de língua portuguesa");
    estante[2][3].ano=1595;

    strcpy(estante[2][4].titulo, "Poema Sujo");
    strcpy(estante[2][4].autor, "Ferreira Gullar");
    strcpy(estante[2][4].genero, "Poesia");
    strcpy(estante[2][4].capa, "poemasujo.jpg");
     strcpy(estante[2][4].comentario, "Escrito no exílio durante a ditadura militar brasileira.É um longo desabafo sobre memória, identidade e política.Gullar mistura lembranças pessoais com o caos do país.O poema tem tom confessional, emocional e de denúncia.É considerado um dos maiores poemas da literatura brasileira.");
    estante[2][4].ano=1976;

    // Linha 3 - Fantasia
    strcpy(estante[3][0].titulo, "O Senhor dos An�is");
    strcpy(estante[3][0].autor, "J.R.R. Tolkien");
    strcpy(estante[3][0].genero, "Fantasia");
    strcpy(estante[3][0].capa, "senhor.jpg");
    strcpy(estante[3][0].comentario, "Frodo Bolseiro recebe o Um Anel, artefato maligno de Sauron.Ele parte em uma jornada para destruí-lo no vulcão da Montanha da Perdição.Com seus companheiros, forma a Sociedade do Anel.O livro descreve um mundo riquíssimo, com elfos, anões, magos e guerras épicas.É um marco da literatura fantástica, sobre coragem, amizade e sacrifício.");
    estante[3][0].ano=1954;

    strcpy(estante[3][1].titulo, "Harry Potter");
    strcpy(estante[3][1].autor, "J.K. Rowling");
    strcpy(estante[3][1].genero, "Fantasia");
    strcpy(estante[3][1].capa, "harrypotter.jpg");
    strcpy(estante[3][1].comentario, "Harry descobre aos 11 anos que é um bruxo e vai para Hogwarts.Lá, faz amizades e descobre sua ligação com o vilão Voldemort.Ele enfrenta desafios mágicos e tenta impedir o roubo da Pedra Filosofal.O livro mistura magia, mistério e crescimento pessoal.Inicia a saga que marcou gerações com temas de amor e coragem.");
    estante[3][1].ano= 1997;

    strcpy(estante[3][2].titulo, "O Nome do Vento");
    strcpy(estante[3][2].autor, "Patrick Rothfuss");
    strcpy(estante[3][2].genero, "Fantasia");
    strcpy(estante[3][2].capa, "nomedovento.jpg");
    strcpy(estante[3][2].comentario, "Kvothe, um lendário mago e herói, narra sua história de vida.Desde a infância com artistas itinerantes até sua entrada na Universidade.Ele busca entender os Chandrian, seres sombrios ligados à tragédia em sua vida.Com inteligência e paixão, aprende música, alquimia e magia.É uma fantasia rica e lírica sobre saber, dor e lenda.");
    estante[3][2].ano=2007;

    strcpy(estante[3][3].titulo, "Fundacao");
    strcpy(estante[3][3].autor, "Isaac Asimov");
    strcpy(estante[3][3].genero, "Fantasia");
    strcpy(estante[3][3].capa, "fundacao.jpg");
    strcpy(estante[3][3].comentario, "O matemático Hari Seldon prevê a queda do Império Galáctico.Para preservar o conhecimento humano, cria a Fundação.Ao longo dos séculos, crises políticas e sociais desafiam seu plano.A obra une ciência, filosofia e história em um universo futurista.É um clássico da ficção científica sobre previsibilidade e controle social.");
    estante[3][3].ano=1951;

    strcpy(estante[3][4].titulo, "Eragon");
    strcpy(estante[3][4].autor, "Christopher Paolini");
    strcpy(estante[3][4].genero, "Fantasia");
    strcpy(estante[3][4].capa, "eragon.jpg");
    strcpy(estante[3][4].comentario, "Eragon, um jovem fazendeiro, encontra um ovo de dragão.Quando Saphira nasce, ele descobre ser um Cavaleiro do Dragão.Inicia uma jornada de autoconhecimento e luta contra o império tirânico.Com a ajuda de mentores e aliados, enfrenta perigos e magia.É uma aventura épica de coragem, fantasia e amadurecimento.");
    estante[3][4].ano=2002;

}

void mostrarCapas (struct livro linhaEstante[])
{
     for (int i = 0; i < 5; i++) {
        int x1 = 50 + i * 190;  // x e
        int y1 = 100;           // Y inicial
        int x2 = x1 + 140;      // Largura
        int y2 = y1 + 180;      // altura

        readimagefile(linhaEstante[i].capa, x1, y1, x2, y2);

        outtextxy(x1, y2 + 10, linhaEstante[i].titulo);//isso daqui printa o titulo embaixo
    }
}

int main()
{
    int g,i,j;
    struct livro estante[4][5];
    preencherEstante(estante);

    printf("Escolha um genero para explorar\n\n");
    printf("1) TERROR\n");
    printf("2) ROMANCE\n");
    printf("3) POESIA\n");
    printf("4) FANTASIA\n");
    printf("5) SAIR\n");

    scanf("%d", &g);
    switch (g)
    {
    case 1: //terror
        initwindow(1000, 600, "Biblioteca: Terror");
        outtextxy(420,10,"Selecione o seu livro");
        mostrarCapas(estante[0]);

        break;
    case 2: //romance
        initwindow(1000, 600, "Biblioteca: Romance");
        outtextxy(420,10,"Selecione o seu livro");
        mostrarCapas(estante[1]);

        break;
    case 3: //poesia
        initwindow(1000, 600, "Biblioteca: Poesia");
        outtextxy(420,10,"Selecione o seu livro");
        mostrarCapas(estante[2]);


        break;
    case 4: //fantasia
        initwindow(1000, 600, "Biblioteca: Fantasia");
        outtextxy(420,10,"Selecione o seu livro");
        mostrarCapas(estante[3]);


        break;
    case 5:
        return 0;
        break;
defalt:
        printf("Comando invalido, tente novamente.");
    }

    //esse while aqui detecta o clique do mouse pra ver se � na imagem do livro 1 na tela, se for, abre outra janela com os detalhes do livro.
    //Bagulho � tentar fazer isso se aplicar pra todos os outros
    while (!kbhit())
    {
        if (GetAsyncKeyState(VK_LBUTTON))
        {
            int x = mousex();
            int y = mousey();;

            if (x >= 50 && x <= 220 && y >= 50 && y <= 282)
            {
                initwindow(500, 300, "aaaaaaaa", 0, 0);
                outtextxy(210,10,"Detalhes sobre o livro...");
                delay(500);

            }
            delay(50);
        }
    }
}
