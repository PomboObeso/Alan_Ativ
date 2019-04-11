// Desenvolvido por Angelino Gonsalves
// Melhoria por Enrick Gonçalves, Lucas Raimundo Rocha, Matheus Gomes de Oliveira, José Rubens da Silva Brito

#include<windows.h>
#include<stdio.h>
#include<conio.h>


#define i 20     // quantia de linhas // alteração na área do jogog
#define j 80    // quantia de colunas //alteração na area do jogo

char nome[30];
int veloc, op=2;
int record = 0;

void irparaxy(int x,int y) {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y}); // x=j (sao colunas) e y=i (sao as linhas)
}

void ranking(int pontos) {

        irparaxy(20, 8);
        printf("PARABÉNS, VOCÊ BATEU O RECORD\n");
        printf("RECORD ANTIGO= %d --- RECORD ATUAL= %d", record, pontos);
        Sleep(7);
        return;
}

void gameover(int pontos) { /*TELA DE FINAL DE JOGO*/
    int resp;

    system("cls");
    printf("\n\n\n");Sleep(100);
    printf("\t\t########## ########## #####    #### ##########    #############    #####       #####  ############ ##### ##### \n");Sleep(100);
    printf("\t\t###        ###     ## ######  ##### #####         ####     ####     #####     #####   ######       ####   #####\n");Sleep(100);
    printf("\t\t###  ##### ###     ## ###### ###### #####         ####     ####      #####   ####     ######       ###     ####\n");Sleep(100);
    printf("\t\t###    ### ########## ############# ##########    ####     ####       ##### ####      ############ #### ###### \n");Sleep(100);
    printf("\t\t###    ### ####   ### #####    #### #####         ####     ####        #######        ######       ###   ###    \n");Sleep(100);
    printf("\t\t########## ####   ### #####    #### #####         #############         #####         ######       ###    ###   \n");Sleep(100);
    printf("\t\t########## ####   ### #####    #### ##########    #############          ###          ############ ###      ### \n");Sleep(100);
    Sleep(600);
    system("cls");

    if(pontos > record) {
        ranking(pontos);
    }
    system("cls");

    do
    {
        irparaxy(20, 8);
        printf("\n\n\t\t DESEJA COME%cAR OUTRA VEZ? \n\n\n\n\t\t   <1> SIM - <2> N%cO \n", 128, 199);      // sele��o para recome�ar o jogo
        scanf("%d", &resp);
    }while (resp != 1 && resp != 2);

    system("cls");

    if (resp==1)        // se 1 pressionado, ele retorna ao main e começa tudo de novo
    {
        main();
    }
    else
    {
        printf("\n\n\t\t FIM DE JOGO \n\n");       // se o 2 pressionado, ele finaliza o jogo
        Sleep(3);
        printf("OBRIGADO POR JOGAR SNAKE GAME\n");
    }
    system("cls");
    return;
}

void desenha_campo() { /*DESENHA AS PAREDES DO JOGO*/
    system("COLOR 01");
    int z; // variavel auxiliar para desenhar

    for(z = 0; z < j; z++) {  // desenha parede de cima
        irparaxy(z, 0);
        printf("%c", 176);
        Sleep(5);
    }
    for(z = 0; z < i; z++) {   // desenha parede da direita
        irparaxy(j, z);
        printf("%c", 176);
        Sleep(5);
    }
    for(z = j; z >= 0; z--) {  // desenha parede de baixo horizontal
        irparaxy(z,i);
        printf("%c", 176);
        Sleep(5);
    }
    for(z = i; z > 0; z--) {   // desenha parede da esquerda vertical
        irparaxy(0, z);
        printf("%c", 176);
        Sleep(5);
    }
}

void bem_vindo() { //TELA DE BOAS VINDAS DO JOGO
    int tecla, aux_dif=0;

    irparaxy(15,5); //Interface
    Sleep(100);
    printf("\n\t       /######                    | ##|  /##/           \n");Sleep(100);
    printf("\t      /##__  ##                   | ##| /##/            \n");Sleep(100);
    printf("\t      | ##  \\__//######  /########| ##|/##/     /######|\n");Sleep(100);
    printf("\t      |  ######  ##_  ##| |___ ###| ##|###\\    /##____#|\n");Sleep(100);
    printf("\t       \\____  #| ## \\ ##| /#######| ##|\\ ##\\  | ########\n");Sleep(100);
    printf("\t       /##  \\ #| ## | ##|/##__  ##| ##| \\ ##\\ | ##_____/\n");Sleep(100);
    printf("\t      |  ######| ## | ##| ########| ##|  \\ ##\\|  #######\n");Sleep(100);
    printf("\t       \\______/|__/ | _/ \\_______/\\___|   \\ _/\\________/\n");Sleep(100);

    irparaxy(2,16);//identação do menu
    printf("\t              DIGITE SEU NOME: ");
    fflush(stdin);
    gets(nome);
    system("cls");
    irparaxy(15, 4);
    printf("\t\t\t\tMENU");
    irparaxy(15, 7);
    printf("                SELECIONE UMA DAS OP%c%cES", 128, 229);
    irparaxy(15,10);
    printf("             PRESSIONE UMA DAS TECLAS ABAIXO!");
    irparaxy(15,13);
    printf("<ENTER> INICIAR     <ESC> INSTRU%c%cES     <ESPACO> DIFICULDADE ", 128, 229);
    irparaxy(15, 16);
    printf("       JOGUE EM TELA CHEIA PARA UMA MELHOR EXPERIENCIA");

    do
    {
        tecla=getch();

        if(tecla == 27) //27 tecla ESC
        {
            instrucoes();
            system("cls");
            irparaxy(15,5);
            printf("<ENTER> INICIAR \t\t <ESPACO> DIFICULDADE ");
            tecla=getch();
        }

        if(tecla == 32) //32 tecla espaço
        {
            veloc=dificuldade();
            aux_dif=1;
            irparaxy(15,5);
            printf("PRESSIONE ENTER PARA COME%cAR", 128);
            tecla=getch();
        }
        if(aux_dif == 0) veloc=100;

        system("cls");
    }while (tecla != 13 && tecla != 27 && tecla != 32);

}

void instrucoes() { /*DA TODAS AS INSTRUÇÕES DO JOGO*/
    system("cls");
    irparaxy(15,3);
    printf("USE AS SETAS PARA CONTROLAR A SNAKE:");
    irparaxy(15,5);
    printf("COMA A MA%c%c PEQUENA PARA EVOLUIR", 128, 199);
    irparaxy(15,8);
    printf("COMA A MA%c%c GRANDE PARA DOBRAR OS PONTOS ATUAIS\n", 128, 199);
    irparaxy(15,11);
    printf("EVITE OS OBST%cCULOS %c e %c", 181, 186, 179);
    irparaxy(15,14);
    printf("USE A TECLA [ESPA%cO] PARA PAUSAR A QUALQUER MOMENTO ", 135);
    irparaxy(15,17);
    printf("USE A TECLA [ESC] PARA FINALIZAR A QUALQUER MOMENTO");
    printf("\n\n\t");
    system("pause");
}

int dificuldade() {
        int nivel_dif;
        do
        {
            system("cls");
            irparaxy(15,5);
            printf("Escolha o Nivel de Dificuldade: ");
            irparaxy(15,8);
            printf("<1> FACIL \t <2> MEDIA \t <3> DIFICIL ");
            scanf("%d", &op);
            nivel_dif=200/op;
        }while (op<1 || op>3);
        system("cls");
        return(nivel_dif);
}

void desenvolvimento() {
    system("COLOR E");
    int d=2, x, t=1, pontos=0, level=1, k=10;
    //d= direção x= auxiliar/ t= auxiliar/ level = nivel k = controle do nivel
    //pontos= pontuação/ veloc= controle sleep
    int cx[300]={1,2}, cy[300]={7,7}, ax, ay, ox, oy, bx, by, zx, zy;
    // cx= tamanho da cobra na horizontal // cy= tamanho da cobra na vertical // ax e ay = local do alimento
    // ox e oy = local do obstculo
    int tecla=32;
    // tecla para receber o botao pressionado

    irparaxy(3, i+2);     // mostra o nome da pessoa abaixo do quadro do jogo
    printf("%s", nome);

    srand(time(NULL)); //cria as frutas e os obstáculos em posições aleatórias
    ax = (rand() % (j-1)) +1;
    ay = (rand() % (i-1)) +1;
    ox = (rand() % (j-1)) +1;
    oy = (rand() % (i-1)) +1;
    bx = (rand() % (j-1)) +1;
    by = (rand() % (i-1)) +1;
    zx = (rand() % (j-1)) +1;
    zy = (rand() % (i-1)) +1;


    while(tecla != 27)       // desenvolvimento do jogo
    {   while(tecla != 27 &&!(tecla = kbhit()))
        {   for(x = t; x > 0; x--)
            {   cx[x] = cx[x-1];
                cy[x] = cy[x-1];
            }
            if(d == 0)cx[0]--;    //esquerda
            if(d == 1)cy[0]--;    //cima
            if(d == 2)cx[0]++;    //direita
            if(d == 3)cy[0]++;    //baixo
            irparaxy(cx[t], cy[t]);
            printf(" ");

            if(ax == cx[0] && ay == cy[0]) {
                t++;
                ax = (rand()%(j-1))+1;
                ay = (rand()%(i-1))+1;
                pontos++; //quando a cabeça da cobra alcança a fruta o usuário ganha 1 ponto
            }

            if(bx == cx[0] && by == cy[0]) { //esse if controla a maçã maior que dobra os pontos do player
                t++;
                bx = (rand()%(j-1))+1;
                by = (rand()%(i-1))+1;
                pontos *= 2;
                veloc -= 25; //aumento na velocidade
            }

            if(zx == cx[0] && zy == cy[0]) { //obstáculo que zera os pontos do player ao ser acertado
                zx = (rand()%(j-1))+1;
                zy = (rand()%(i-1))+1;
                pontos = 0;
            }

            if(ox == cx[0] && oy == cy[0]) { //ao acertar o obstáculo principal a cobra perde um pedaço da cauda
                t--;
                irparaxy(cx[t],cy[t]);
                printf(" ");
                ox = (rand()%(j-1))+1;
                oy = (rand()%(i-1))+1;

                if(t == 0) { //se a snake ficar sem cabeça o jogo acaba
                    gameover(pontos);
                }
            }

            irparaxy(cx[0],cy[0]);
            printf("%c",254); //cabeça da cobra
            irparaxy(ax,ay);
            printf("%c",162); //maçã pequena
            irparaxy(ox,oy);
            printf("#"); //obstáculo 1
            irparaxy(zx, zy);
            printf("%c", 220); //obstáculo 2
            irparaxy(bx, by);
            printf("%c", 224); //maçã grande

            if(pontos > k) //quando pontos for maior que k, ele aumenta o level e dificulta mais o game
            {
                level++;
                k=k+10;
                veloc=veloc-veloc/10;
                ox=(rand()%(j-1))+1; //cria um novo obstáculo
                oy=(rand()%(i-1))+1;
            }

            irparaxy(20, i+2);
            printf("PONTUA%c%cO= %d", 128, 199, pontos);
            irparaxy(45, i+2);
            printf("LEVEL= %d", level);
            Sleep(veloc);
            irparaxy(10,i+4);
            printf("DIFICULDADE= %d", op);
            irparaxy(30,i+4);
            printf("SLEEP REAL: %d", veloc);

            for(x = 1; x < t; x++)
            {
                if(cx[0]==cx[x] && cy[0] == cy[x])tecla=27;
            }
            if(cy[0] == 0 || cy[0] == i || cx[0] == 0 || cx[0] == j)tecla=27; //aqui é onde o game acaba se a cabeça da cobra tocar na parede
        }
        if(tecla != 27)tecla=getch();
        if(tecla == 75)d=0;
        if(tecla == 72)d=1;
        if(tecla == 77)d=2;
        if(tecla == 80)d=3;
        if(tecla == 32) system("pause");
        if(cy[0] == 0 || cy[0] == i || cx[0] == 0 || cx[0] == j)tecla = 27;
    }
    system("cls");
    gameover(pontos);
}

void main() {
    system("cls");
    system("COLOR 02");     // alteração de cor
    bem_vindo();            // tela inicial
    desenha_campo();        // desenha o quadro do campo
    desenvolvimento();      // desenvolvimento do jogo
}
//teclas: 13= ENTER, 27= ESC, 32= Espaço
