#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

void imprime(int poder_magico, int agilidade, int dano_fisico, int vida);

int main()
{

    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    float agilidade_atual;
    float agilidade_atual_oponente;
    int moeda = 10, mana = 50, escolha_de_ataque[100], i, escolha_conversa[10], boss, skillboss, skill_condenar = 0;
    int atributo[10];
    int classe[10], poder_magico, agilidade, dano_fisico, vida, ataque, vida_atual;
    char nome[100];
    int vida_oponente, poder_oponente, agilidade_oponente, dano_oponente, ataque_oponente;





    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t      ===Skulls of the Necromancer===\n\n\n\n\n\n");


    system("pause>null");

    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t          Escolha seu nome: \n\n\t\t\t\t\t\t\t\t               ");
    scanf("%s", &nome);
    system("cls");
    printf("\t\t\t\t\t\t\t\t\t\tBEM VINDO %s,", nome);
    printf("\n\n\t\t\t\t\t\t\t\t\t-->PRIMEIRO ESCOLHA SUA CLASSE:<--\n\n\n\n");

    printf("\t\t\t\t                      ________________                                  ________________\n ");
    printf("\t\t\t\t                      |   1- Mago    |                                  |  2- Ladino   |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n");
    printf("\t\t\t\t          | Poder M�gico: +7  |  Agilidade: +4  |          | Poder M�gico: +3  |  Agilidade: +7  |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n");
    printf("\t\t\t\t          |  Dano F�sico: +4  |     Vida: +5    |          |  Dano F�sico: +5  |     Vida: +5    |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");

    printf("\t\t\t\t                      ________________                                 _________________\n ");
    printf("\t\t\t\t                      | 3- Guerreiro |                                 |  4- Arqueiro  |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n");
    printf("\t\t\t\t          | Poder M�gico: +3  |  Agilidade: +3  |          | Poder M�gico: +3  |  Agilidade: +5  |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n");
    printf("\t\t\t\t          |  Dano F�sico: +6  |     Vida: +8    |          |  Dano F�sico: +7  |     Vida: +5    |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t|| Resposta: ");
    scanf("%i", &classe[0]);
    switch(classe[0]){
        case 1:
            poder_magico= 7;
            agilidade= 4;
            dano_fisico= 4;
            vida= 5;
        break;

        case 2:
            poder_magico= 3;
            agilidade= 7;
            dano_fisico= 5;
            vida= 5;
        break;

        case 3:
            poder_magico= 3;
            agilidade= 3;
            dano_fisico= 6;
            vida= 8;
        break;

        case 4:
            poder_magico= 3;
            agilidade= 5;
            dano_fisico= 7;
            vida= 5;
        break;

        case 5:
            break;

        default:{
            printf("\n|| Plim, Plim, Plim, Abuso do c�digo alertado, Sua conta foi banida. ||\n");
            return 0;
        }
    }

    if(classe[0] == 5){

    printf("\t\t\t\t                       ________________                             _________________________\n ");
    printf("\t\t\t\t                      |   1- Celso    |                             |  2- Vinicius(Prog I)  |\n");
    printf("\t\t\t\t          ________________________________________        _________________________________________\n");
    printf("\t\t\t\t          | Poder M�gico: 10 | Reprovados: 10000  |       |   Poder M�gico: 300  | Reprovados: 100% |\n");
    printf("\t\t\t\t          ________________________________________        _________________________________________\n");
    printf("\t\t\t\t          |  Dano F�sico: 1000 |     Vida: 1000  |        |  Dano F�sico: 500  |     Vida: 100    |\n");
    printf("\t\t\t\t          ________________________________________        _________________________________________\n\n");


    printf("\t\t\t\t                      ________________                             _________________________\n ");
    printf("\t\t\t\t                      | 3- Trist�o   |                             |  4- DJ Dennis(REDES)  |\n");
    printf("\t\t\t\t          _______________________________________         _______________________________________\n");
    printf("\t\t\t\t          | Poder M�gico: 0  |  Agilidade: 0    |         | Poder M�gico: 150  |  Cisco: 5000   |\n");
    printf("\t\t\t\t          _______________________________________         _______________________________________\n");
    printf("\t\t\t\t          |  Dano F�sico: 0  |     Vida: 0      |         |  Dano F�sico: +7  |     Vida: +5    |\n");
    printf("\t\t\t\t          _______________________________________         _______________________________________\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t|| Resposta: ");
    scanf("%i", &classe[10]);


    system("cls");
        switch(classe[10]){
            case 1:
                printf("\n\n\n\n\n\t\t\t\t\t||  Voc� foi reprovado em c�lculo, at� ano que vem!  ||");
                system("pause>null");
                return 0;
            break;

            case 2:
                printf("\n\n\n\n\n\t\t\t\t\t||  Reprovei em programa��o n�o pude continuar o jogo  ||");
                system("pause>null");
                return 0;

            break;

            case 3:
                printf("\n\n\n\n\n\t\t\t\t\t||  Voc� n�o foi enturmado, passou despercebido pela hist�ria, parab�ns voc� ganhou!  ||");
                system("pause>null");
                return 0;

            break;

            case 4:
                 printf("\n\n\n\n\n\t\t\t\t\t||  Abre o Linux ai e roda o Packet Tracer meu guerreiro, e vem para a CISCO! ||");
                system("pause>null");
                return 0;
            break;






        }








    }

system("cls");

    printf("\n\n\t\t\t\t\t\t\t\t\t-->AGORA ESCOLHA SUA RA�A:<--\n\n");
    printf("\t\t\t\t                      _______________                                   _______________\n ");
    printf("\t\t\t\t                      |  1- Humano  |                                   |   2- Elfo   |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n");
    printf("\t\t\t\t          | Poder M�gico: +2  |  Agilidade: +2  |          | Poder M�gico: +3  |  Agilidade: +3  |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n");
    printf("\t\t\t\t          |  Dano F�sico: +3  |     Vida: +3    |          |  Dano F�sico: +1  |     Vida: +3    |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");

    printf("\t\t\t\t                      _______________                                  ________________\n ");
    printf("\t\t\t\t                      |   3- Orc    |                                  |    4- An�o   |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n");
    printf("\t\t\t\t          | Poder M�gico: +2  |  Agilidade: +2  |          | Poder M�gico: +3  |  Agilidade: +3  |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n");
    printf("\t\t\t\t          |  Dano F�sico: +3  |     Vida: +3    |          |  Dano F�sico: +1  |     Vida: +3    |\n");
    printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");




    printf("\n\n\t\t\t\t\t\t\t\t\t\t|| Resposta: ");
    scanf("%i", &classe[1]);


        switch(classe[1]){
        case 1:
            poder_magico= poder_magico + 2;
            agilidade= agilidade + 2;
            dano_fisico= dano_fisico + 3;
            vida= vida + 3;
        break;

        case 2:
           poder_magico= poder_magico + 3;
            agilidade= agilidade + 3;
            dano_fisico= dano_fisico + 1;
            vida= vida + 3;
        break;

        case 3:
            poder_magico= poder_magico + 1;
            agilidade= agilidade + 1;
            dano_fisico= dano_fisico + 4;
            vida= vida + 4;
        break;

        case 4:
            poder_magico= poder_magico + 2;
            agilidade= agilidade + 1;
            dano_fisico= dano_fisico + 4;
            vida= vida + 3;
        break;

        default:{
            printf("\n|| Plim, Plim, Plim, Abuso do c�digo alertado, Sua conta foi banida. ||\n");
            return 0;
        }

    }

    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t\t||   Em uma noite voc� acorda ao som de ruidos e espadas brandindo, gritos de desespero e sentindo cheiro de fuma�a,voc� sem saber ||\n\t\t|| o que fazercorre para fora de sua casa e tudo que v� s�o corpos dilacerados ao ch�o, enquanto mortos-vivos realizam um massacre ||\n\t\t|| em sua vila...\t\t\t\t\t\t\t\t\t\t\t\t\t\t   ||\n\n");
    system("pause>null");
    printf("\t\t||   Voc� percebe que um ser misterioso, com uma presen�a sombria, montado em um cavalo esquel�tico observa s�dicamente, vendo que ||\n\t\t|| seria impossivel acabar com tamanhas aberra��es voc� decide correr para a floresta de Trendarell.                               ||\n\n");
   system("pause>null");
    printf("\t\t||Em meio � escurid�o, voc� � surpreendido por um Morto-Vivo sem os bra�os!                                                        ||");

system("pause>>nul");

    system("cls");

//Come�a a 1 battle

    if(classe[0] == 1){

        printf("\t\t\t\t\t\t\t\t|| Voc� dever� lutar contra este oponente! ||\n");
        vida_oponente = 10;
        dano_oponente = 2;
        agilidade_oponente = 4;
        poder_oponente = 0;
        vida_atual = vida;
        agilidade_atual_oponente = agilidade_oponente;
        agilidade_atual = agilidade;


        while((vida_oponente > 0) && (vida_atual > 0)){

            printf("\t\t\t\t                 __________________________                      __________________________\n ");
            printf("\t\t\t\t                 |      Seus status       |                      |    Status Oponente     |\n");
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: %i  |  Agilidade: %i  |\n", poder_magico, agilidade, poder_oponente, agilidade_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida: %i    |          |  Dano F�sico: %i  |     Vida: %i    |\n", dano_fisico, vida_atual, dano_oponente, vida_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");

            if(agilidade_atual >= agilidade_atual_oponente){
                agilidade_atual = agilidade_atual/2;

                printf("\n\n\t\t\t\t\t\t\t|| Escolha sua A��o: ||\n\n\t\t\t\t\t\t\t1- Soco\n\n\t\t\t\t\t\t\t|| Resposta: ");
                scanf("%i", &ataque);
                ataque = rand() % dano_fisico;

                vida_oponente = vida_oponente - ataque;
                printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                system("pause>>nul");
                system("cls");

            }
            else{
                agilidade_atual_oponente = agilidade_atual_oponente/2;
                printf("\n\n\t\t\t\t\t\t\t\t|| O Morto-Vivo usa 'Cabe�ada'!||\n");
                ataque_oponente = rand() % 2;
                printf("\n\t\t\t\t\t\t\t\t|| O inimigo te deu %i de Dano ||", ataque_oponente);
                vida_atual = vida_atual - ataque_oponente;
                system("pause>>nul");
                system("cls");
            }
        }
        if(vida_atual > 0){
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t|| Voc� venceu! ||");
            system("pause>null");
            system("cls");
        }
        else{
            printf("\nVoc� Morreu...");
            return 0;
        }
}
//-----------------------------------------------------------------------------
    if(classe[0] == 2){

       printf("\t\t\t\t\t\t\t\t|| Voc� dever� lutar contra este oponente! ||\n");
        vida_oponente = 10;
        dano_oponente = 2;
        agilidade_oponente = 4;
        poder_oponente = 0;
        vida_atual = vida;
        agilidade_atual_oponente = agilidade_oponente;
        agilidade_atual = agilidade;


        while((vida_oponente > 0) && (vida_atual > 0)){

            printf("\t\t\t\t                 __________________________                      __________________________\n ");
            printf("\t\t\t\t                 |      Seus status       |                      |    Status Oponente     |\n");
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: %i  |  Agilidade: %i  |\n", poder_magico, agilidade, poder_oponente, agilidade_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida: %i    |          |  Dano F�sico: %i  |     Vida: %i    |\n", dano_fisico, vida_atual, dano_oponente, vida_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");

            if(agilidade_atual >= agilidade_atual_oponente){
                agilidade_atual = agilidade_atual/2;

                printf("\n\n\t\t\t\t\t\t\t|| Escolha sua A��o: ||\n\n\t\t\t\t\t\t\t1- Soco\n\n\t\t\t\t\t\t\t|| Resposta: ");
                scanf("%i", &ataque);
                ataque = rand() % dano_fisico;

                vida_oponente = vida_oponente - ataque;
                printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                system("pause>>nul");
                system("cls");

            }
            else{
                agilidade_atual_oponente = agilidade_atual_oponente/2;
                printf("\n\n\t\t\t\t\t\t\t\t|| O Morto-Vivo usa 'Cabe�ada'!||\n");
                ataque_oponente = rand() % 2;
                printf("\n\t\t\t\t\t\t\t\t|| O inimigo te deu %i de Dano ||", ataque_oponente);
                vida_atual = vida_atual - ataque_oponente;
                system("pause>>nul");
                system("cls");
            }
        }
        if(vida_atual > 0){
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t|| Voc� venceu! ||");
            system("pause>null");
            system("cls");
        }
        else{
            printf("\nVoc� Morreu...");
            return 0;
        }
}
//----------------------------------------------------------------------
    if(classe[0] == 3){

        printf("\t\t\t\t\t\t\t\t|| Voc� dever� lutar contra este oponente! ||\n");
        vida_oponente = 10;
        dano_oponente = 2;
        agilidade_oponente = 4;
        poder_oponente = 0;
        vida_atual = vida;
        agilidade_atual_oponente = agilidade_oponente;
        agilidade_atual = agilidade;


        while((vida_oponente > 0) && (vida_atual > 0)){

            printf("\t\t\t\t                 __________________________                      __________________________\n ");
            printf("\t\t\t\t                 |      Seus status       |                      |    Status Oponente     |\n");
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: %i  |  Agilidade: %i  |\n", poder_magico, agilidade, poder_oponente, agilidade_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida: %i    |          |  Dano F�sico: %i  |     Vida: %i    |\n", dano_fisico, vida_atual, dano_oponente, vida_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");

            if(agilidade_atual >= agilidade_atual_oponente){
                agilidade_atual = agilidade_atual/2;

                printf("\n\n\t\t\t\t\t\t\t|| Escolha sua A��o: ||\n\n\t\t\t\t\t\t\t1- Soco\n\n\t\t\t\t\t\t\t|| Resposta: ");
                scanf("%i", &ataque);
                ataque = rand() % dano_fisico;

                vida_oponente = vida_oponente - ataque;
                printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                system("pause>>nul");
                system("cls");

            }
            else{
                agilidade_atual_oponente = agilidade_atual_oponente/2;
                printf("\n\n\t\t\t\t\t\t\t\t|| O Morto-Vivo usa 'Cabe�ada'!||\n");
                ataque_oponente = rand() % 2;
                printf("\n\t\t\t\t\t\t\t\t|| O inimigo te deu %i de Dano ||", ataque_oponente);
                vida_atual = vida_atual - ataque_oponente;
                system("pause>>nul");
                system("cls");
            }
        }
        if(vida_atual > 0){
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t|| Voc� venceu! ||");
            system("pause>null");
            system("cls");
        }
        else{
            printf("\nVoc� Morreu...");
            return 0;
        }
}
//-------------------------------------------------------------------------
    if(classe[0] == 4){

        printf("\t\t\t\t\t\t\t\t|| Voc� dever� lutar contra este oponente! ||\n");
        vida_oponente = 6;
        dano_oponente = 2;
        agilidade_oponente = 4;
        poder_oponente = 0;
        vida_atual = vida;
        agilidade_atual_oponente = agilidade_oponente;
        agilidade_atual = agilidade;


        while((vida_oponente > 0) && (vida_atual > 0)){

            printf("\t\t\t\t                 __________________________                      __________________________\n ");
            printf("\t\t\t\t                 |      Seus status       |                      |    Status Oponente     |\n");
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: %i  |  Agilidade: %i  |\n", poder_magico, agilidade, poder_oponente, agilidade_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida: %i    |          |  Dano F�sico: %i  |     Vida: %i    |\n", dano_fisico, vida_atual, dano_oponente, vida_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");

            if(agilidade_atual >= agilidade_atual_oponente){
                agilidade_atual = agilidade_atual/2;

                printf("\n\n\t\t\t\t\t\t\t|| Escolha sua A��o: ||\n\n\t\t\t\t\t\t\t1- Soco\n\n\t\t\t\t\t\t\t|| Resposta: ");
                scanf("%i", &ataque);
                ataque = rand() % dano_fisico;

                vida_oponente = vida_oponente - ataque;
                printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                system("pause>>nul");
                system("cls");

            }
            else{
                agilidade_atual_oponente = agilidade_atual_oponente/2;
                printf("\n\n\t\t\t\t\t\t\t\t|| O Morto-Vivo usa 'Cabe�ada'!||\n");
                ataque_oponente = rand() % 2;
                printf("\n\t\t\t\t\t\t\t\t|| O inimigo te deu %i de Dano ||", ataque_oponente);
                vida_atual = vida_atual - ataque_oponente;
                system("pause>>nul");
                system("cls");
            }
        }
        if(vida_atual > 0){
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t|| Voc� venceu! ||");
            system("pause>null");
            system("cls");
        }
        else{
            printf("\nVoc� Morreu...");
            return 0;
        }
}



    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\n\n\t||   Exausto da batalha voc� sente suas pernas tremerem, sua vis�o emba�ando, e ap�s alguns segundos voc� desmaia...                          \t  ||\n\n");
    printf("\t||                                                          ........                                                                              ||\n");
    system("pause>>nul");
    printf("\t||                                                            ....                                                                                ||\n");
    system("pause>>nul");
    printf("\t||                                                             ..                                                                                 ||\n\n");
    system("pause>>nul");
    printf("\t||   Voc� levemente abre os olhos, sentindo o balan�ar de uma carro�a...                                                                          ||\n\n");
    system("pause>>nul");
    printf("\t||   Ao tentar se levantar, mesmo machucado, voc� escuta uma voz de um homem, ao olhar para ele percebe que o homem com estatura alta,            ||\n");
    printf("\t||  pele clara, cabelos longos, usando um sobretudo e uma m�scara.                                                                                ||\n\n");
    system("pause>>nul");
    printf("\t||   O homem misterioso olha para voc� e diz com ironia:                                                                                          ||\n\n");
    system("pause>>nul");
    printf("\t\||   - Ah, voc� finalmente acordou, pensei estar carregando um cad�ver ai atr�s!                                                                  ||\n\n");
    system("pause>>null");
    printf("\t||   O estranho lhe encara por um tempo e solta uma risada, logo ap�s se apresenta alegando ser um mercador chamado Viktor...                     ||\n\n");
    system("pause>>null");
    printf("\t\||   Voc� o interrompe por um momento e ainda um pouco tonto o pergunta o que aconteceu...                                                        ||\n\n");
    system("pause>>null");
    printf("\t||   O mercador entendendo que diversas duvidas acercavam seus pensamentos sobre a noite anterior, respira fundo e com um tom de ironia pergunta: ||\n\n");
    system("pause>>null");
    printf("\t||   - Acampar na floresta em tempos como esses pode n�o ser a melhor das ideias sabia?                                                           ||\n\n");
    system("pause>null");
    printf("\t||   - De qualquer forma, creio que quando era menor j� escutou alguns contos de fadas ou historias para amedrontar crian�as levadas...           ||\n\n");
    system("pause>null");
    printf("\t||   - Mas o que vou te mostrar agora � algo que vai muito al�m disso, al�m de tudo o que um povo c�tico como esse possa acreditar.               ||\n\n");
    system("pause>null");
    printf("\t||   O mercador para a carroagem e passa para o compartimento de tr�s aonde voc� esta deitado, puxando uma caixa trancada por um cadeado,         ||\n");
    printf("\t|| lhe deixando espantado por n�o ter visto uma caixa daquele tamanho.                                                                            ||");
    system("pause>null");
    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t||   Viktor puxou uma chave enferrujada e destrancou o cadeado, retirando de dentro dela um livro enrolado com um pano desgastado e empoeirado,   ||\n");
    printf("\t|| ao retirar o livro dos trapos ele te entrega o livro e diz para come�ar a ler.                                                                 ||\n\n");
    system("pause>null");
    printf("\t||   Voc� segura o livro pesado com as duas m�os, e come�a a folhear p�gina por p�gina...                                                         ||\n\n");
    system("pause>null");
    printf("\t||   O livro conta a hist�ria de um Lich louco que ansiava por um mundo onde seria adorado como um Deus, e quando estava quase alcan�ando seu     ||\n");
    printf("\t|| objetivo foi desafiado por um andarilho portador de um artefato m�tico que acreditavam ter sido criado por Deuses.                             ||\n\n");
    system("pause>null");
    printf("\t||   O Lich foi gravemente ferido e recuou com o que restou de seu exercito para o submundo.                                                      ||\n\n");
    system("pause>null");
    printf("\t||   Voc� respira fundo e pergunta a Viktor se o massacre da vila tem algo a ver com o retorno desse Lich.                                        ||\n\n");
    system("pause>null");
    printf("\t||   Ele suspira e diz com pesar e diz:                                                                                                           ||\n\n");
    system("pause>null");
    printf("\t||   - Voc� realmente acha que um Lich desistiria t�o f�cil assim de suas ambi��es?                                                               ||\n\n");
    printf("\t||   - Creio que temos muito o que discutir mas antes preciso saber se voc� esta preparado para o que vem a seguir...                             ||\n\n");
    system("pause>null");
    printf("\t||   Viktor se levanta e lhe entrega uma de suas armas , ap�s isso desce da carroagem e abre os bra�os dizendo:                                   ||\n\n");
    system("pause>null");
    printf("\t||   - Vamos! Me mostre do que � capaz!                                                                                                           ||\n\n");
    system("pause>null");

    if(classe[0] == 1){
        printf("\t||   Viktor lhe entrega uma Varinha! +3 Poder de habilidade                                                                                   ||\n\n");
        poder_magico = poder_magico + 3;
        system("pause>null");
    }
    if(classe[0] == 2){
        printf("\t||    Viktor lhe entrega uma Adaga! +2 Dano Fisico                                                                                            ||\n\n");

        dano_fisico = dano_fisico + 2;
        system("pause>null");
    }
    if(classe[0] == 3){
        printf("\t||   Viktor lhe entrega uma Espada Longa! +3 Dano Fisico                                                                                      ||\n\n");
        dano_fisico = dano_fisico + 3;
        system("pause>null");
    }
    if(classe[0] == 4){
        printf("\t||   Viktor lhe entrega um Arco Recurvado! +3 Dano Fisico  +1 Agilidade                                                                       ||\n\n");
        dano_fisico = dano_fisico + 3;
        agilidade = agilidade + 1;
        system("pause>null");
    }
    printf("\t\t\t\t\t\t\t\t--> Prove suas habilidades lutando com Viktor! <--\n\n");

    system("pause>null");
    system("cls");

    switch(classe[0]){
        case 1:
            for(i = 0; i <= 3; i++){
            printf("\t\t\t\t                    ____________________                            ____________________\n ");
            printf("\t\t\t\t                    |  1- Seus Status  |                            |   2- Viktor      |\n");
            printf("\t\t\t\t          _______________________________________          _____________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: ?  |  Agilidade: ?  |\n", poder_magico, agilidade);
            printf("\t\t\t\t          _______________________________________          _____________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida:  %i   |          |  Dano F�sico: ?  |     Vida: ?    |\n", dano_fisico, vida);
            printf("\t\t\t\t          _______________________________________          _____________________________________\n\n");
                printf("\n\n\t\t\t\t\t\t\t||  Escolha sua habilidade:  ||\n\n");
                printf("\t\t\t\t\t\t\t1- Soco\n\t\t\t\t\t\t\t2- Rajada de Vento\n\t\t\t\t\t\t\t|| Resposta: ");
                scanf("%i", &escolha_de_ataque[0]);

                if(escolha_de_ataque[0] == 1){
                    ataque = rand() % dano_fisico;
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    system("pause>>nul");
                    system("cls");
                }
                else{
                    ataque = (7 + (rand() % poder_magico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", poder_magico);

                    system("pause>>nul");
                    system("cls");
                }
            }
            break;

            //---------------------------------------------------------------

            case 2:
            for(i = 0; i <= 3; i++){
                 printf("\t\t\t\t                    ____________________                            ____________________\n ");
            printf("\t\t\t\t                    |  1- Seus Status  |                            |   2- Viktor      |\n");
            printf("\t\t\t\t          _______________________________________          _____________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: ?  |  Agilidade: ?  |\n", poder_magico, agilidade);
            printf("\t\t\t\t          _______________________________________          _____________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida:  %i   |          |  Dano F�sico: ?  |     Vida: ?    |\n", dano_fisico, vida);
            printf("\t\t\t\t          _______________________________________          _____________________________________\n\n");
                printf("||  Escolha sua habilidade:  ||\n\n");
                printf("\t\t\t\t\t\t\t1- Soco\n\t\t\t\t\t\t\t2- Apunhalar\n\t\t\t\t\t\t\t|| Resposta: ");
                scanf("%i", &escolha_de_ataque[0]);

                if(escolha_de_ataque[0] == 1){
                    ataque = rand() % dano_fisico;
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    system("pause>>nul");
                    system("cls");
                }
                else{
                    ataque = (7 + (rand() % dano_fisico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);

                    system("pause>>nul");
                    system("cls");
                }
            }
            break;

            //------------------------------------------

            case 3:
            for(i = 0; i <= 3; i++){
                 printf("\t\t\t\t                    ____________________                            ____________________\n ");
            printf("\t\t\t\t                    |  1- Seus Status  |                            |   2- Viktor      |\n");
            printf("\t\t\t\t          _______________________________________          _____________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: ?  |  Agilidade: ?  |\n", poder_magico, agilidade);
            printf("\t\t\t\t          _______________________________________          _____________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida:  %i   |          |  Dano F�sico: ?  |     Vida: ?    |\n", dano_fisico, vida);
            printf("\t\t\t\t          _______________________________________          _____________________________________\n\n");
                printf("|| Escolha sua habilidade: ||\n\n");
                printf("\t\t\t\t\t\t\t1- Soco\n\t\t\t\t\t\t\t2- Dilacerar\n\t\t\t\t\t\t\t|| Resposta: ");
                scanf("%i", &escolha_de_ataque[0]);

                if(escolha_de_ataque[0] == 1){
                    ataque = rand() % dano_fisico;
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    system("pause>>nul");
                    system("cls");
                }
                else{
                    ataque = (4 + (rand() % dano_fisico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);

                    system("pause>>nul");
                    system("cls");
                }
            }
            break;

            //--------------------------------------------

            case 4:
            for(i = 0; i <= 3; i++){
            printf("\t\t\t\t                    ____________________                            ____________________\n ");
            printf("\t\t\t\t                    |  1- Seus Status  |                            |   2- Viktor      |\n");
            printf("\t\t\t\t          _______________________________________          _____________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: ?  |  Agilidade: ?  |\n", poder_magico, agilidade);
            printf("\t\t\t\t          _______________________________________          _____________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida:  %i   |          |  Dano F�sico: ?  |     Vida: ?    |\n", dano_fisico, vida);
            printf("\t\t\t\t          _______________________________________          _____________________________________\n\n");
                printf("|| Escolha sua habilidade: ||\n\n");
                printf("\t\t\t\t\t\t\t1- Soco\n\t\t\t\t\t\t\t2- Tiro Perfurante\n\t\t\t\t\t\t\t|| Resposta: ");
                scanf("%i", &escolha_de_ataque[0]);

                if(escolha_de_ataque[0] == 1){
                    ataque = rand() % dano_fisico;
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    system("pause>>nul");
                    system("cls");
                }
                else{
                    ataque = (7 + (rand() % dano_fisico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    system("pause>>nul");
                    system("cls");
                }
            }
            break;
    }



    imprime(poder_magico, agilidade, dano_fisico, vida);
    printf("\t||   Ap�s a batalha intensa Viktor guarda suas armas e diz impressionado:                                                                         ||\n\n");
    system("pause>null");
    printf("\t||   - Parece que n�o vou ter problemas vigiando minhas costas                                                                                    ||\n\n");
    system("pause>null");
    printf("\t||   Entre na carruagem, vamos para a cidade de Rumbell nos equipar para enfrentar o primeiro desafio antes de derrotar o Lich                    ||\n\n");
    system("pause>null");
    printf("\t||   Voc� entra na carruagem e segue viagem at� a cidade de Rumbell ...                                                                           ||\n\n");
    system("pause>null");
    printf("\t||                                                    ..........                                                                                  ||\n");
    system("pause>null");
    printf("\t||                                                     ......                                                                                     ||\n");
    system("pause>null");
    printf("\t||                                                      ....                                                                                      ||\n");
    system("pause>null");
    printf("\t||                                                       ..                                                                                       ||\n");
    system("pause>null");
    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t||   - Ei acorde, n�o quero perder tempo parado nessa cidade enquanto um ser demon�aco tenta tomar conta do meu mundo.                            ||\n\n");
    system("pause>null");
    printf("\t||   Voc� acorda e percebe que j� chegaram em Rumbell , vendo a impaci�ncia de Viktor voc� pergunta qual seria o motivo de vir a essa cidad       ||\n\n");
    system("pause>null");
    printf("\t||  Ele responde com um sorriso no rosto:                                                                                                         ||\n\n");
    system("pause>null");
    printf("\t||   - Voc� acha mesmo que conseguiria derrotar pelo menos 10 dos lacaios do Lich antes dessa arma e esse pano que chama de roupa se desgastarem? ||\n");
    system("pause>null");
    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t||   Viktor come�a a vasculhar os bolsos de seu sobretudo e puxa uma bolsa de couro e joga ela em sua dire��o. Ao pega-la � percept�vel que       ||\n");
    printf("\t|| aquela bolsa estava cheia de moedas de ouro.                                                                                                   ||\n\n");
    system("pause>null");
    printf("\t||   Anda logo e v� ver Hezer o ferreiro da Ala Diacr�nica, e diga a seguinte frase: �As noites mais escuras est�o chegando companheiro� e ele    ||\n");
    printf("\t|| entendera o motivo de ter lhe enviado.                                                                                                         ||\n\n");
    system("pause>null");
    printf("\t||   Voc� pega a bolsa de moedas e segue em dire��o a loja Ala Drag�nica.                                                                         ||\n\n");
    system("pause>null");
    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t||   Chegando l� voc� v� velho usando roupas desgastadas e um martelo de ferro enquanto golpeia com for�a uma espada em cima de uma bigorna.      ||\n\n");
    system("pause>null");
    printf("\t||   Voc� tenta chamar a aten��o do velho ficando parado atr�s dele, por�m � ignorado e quase leva uma cotovelada na barriga.                     || \n\n");
    system("pause>null");
    printf("\t||   Voc� coloca a m�o no bra�o do velho ferreiro e com uma agilidade descomunal para um homem daquela idade o ferreiro segura seu bra�o e puxa   ||\n");
    printf("\t|| voc� para baixo deixando-o cara a cara com o mesmo.                                                                                            ||\n\n");
    system("pause>null");
    printf("\t||   Ele cospe no ch�o e diz com raiva:                                                                                                           ||\n\n");
    system("pause>null");
    printf("\t||   N�o v� que estou trabalhando??? Estamos fechados e al�m do mais n�o tenho tempo para tolices, saia daqui antes que eu fique mais irritado!!  ||\n\n");
    system("pause>null");
    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t||   O velho solta seu bra�o e o empurra para fora da loja virando as costas e voltando para a bigorna.                                           ||\n\n");
    system("pause>null");
    printf("\t||   Voc� respira fundo, e diz ao ferreiro que parecia estar-lhe ignorando:                                                                       ||\n\n");
    system("pause>null");
    printf("\t||   - 'As noites mais escuras est�o chegando companheiro'                                                                                        ||\n\n");
    system("pause>null");
    printf("\t||   O ferreiro quase que automaticamente larga o martelo e se vira para voc� e come�a a te encarar, depois de alguns segundos ele diz:           ||\n\n");
    system("pause>null");
    printf("\t||   - Venha vamos para um lugar mais reservado na parte de materiais da loja                                                                     ||\n\n");
    system("pause>null");
    printf("\t||   Voc� o segue at� uma porta trancada com 10 tipos de trancas com todos os tipos de fechaduras poss�veis de se imaginar, o ferreiro destranca  ||\n");
           printf("\t|| todas as fechaduras e diz:\n\n");
    system("pause>null");
    printf("\t||   - J� esperava que algum dia isso aconteceria, procure algo que v� lhe servir e diga a Viktor que � por conta da casa se ele voltar vivo...   ||\n\n");
    system("pause>null");
    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t||   Ao passar pela porta voc� se depara com um arsenal de armas e armaduras incrivelmente diferentes dos padr�es de armas que voc� j� viu em     ||\n");
    printf("\t|| outros lugares, algumas at� mesmo feitas de materiais raros como osso de drag�o e obsidiana.                                                   ||\n\n");
    system("pause>null");
    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t\t\t\t\t\t\t          ====> Escolha uma Arma <====\n\n");
    printf("\t\t\t\t\t       1- Cajado Arcano(+20 Poder M�gico)\n\n\t\t\t\t\t\t2- Adaga de Obsidiana(+4 Agilidade // +4 Dano Fisico)\n\n\t\t\t\t\t\t3- Machado R�nico(+ 8 Dano F�sico)\n\n\t\t\t\t\t\t4- Arco de Tyrpa(+6 Dano F�sico // +2 Agilidade)\n\n\t\t\t\t\t\t\t\tResposta: ");
    scanf("%i", &atributo[0]);
    printf("\n\n\n\t\t\t\t\t\t\t          ====> Escolha uma Armadura <====\n\n");
    printf("\t\t\t\t\t       1- Vestes Arcanas(+100 Vida // +20 Poder M�gico)\n\n\t\t\t\t\t\t2- Armadura de Escamas Drag�nicas(+100 Vida // +10 Agilidade // +20 Dano) \n\n\t\t\t\t\t\t3- Armadura R�nica(+100 Vida // +30 Dano) \n\n\t\t\t\t\t\t4- Armadura de Escamas Drag�nicas(+100 Vida // +5 Agilidade // +25 Dano)\n\n\n\n\t\t\t\t\t\t\t\tResposta: ");
    scanf("%i", &atributo[1]);

    switch(atributo[0]){
        case 1:
            poder_magico = poder_magico + 20;
        break;
        case 2:
        agilidade = agilidade + 4;
        dano_fisico = dano_fisico + 4;
        break;
        case 3:
        dano_fisico = dano_fisico + 8;
        break;
        case 4:
        agilidade = agilidade + 2;
        dano_fisico = dano_fisico + 2;
        break;

        default:printf("ERRO! POR PENALIDADE VOC� N�O RECEBE ITEM!");

    }

    switch(atributo[1]){
        case 1:
            vida = vida + 100;
            poder_magico = poder_magico + 20;
        break;
        case 2:
        vida = vida + 100;
        agilidade = agilidade + 10;
        dano_fisico = dano_fisico + 20;
        break;
        case 3:
        vida = vida + 100;
        dano_fisico = dano_fisico + 30;
        break;
        case 4:
        vida = vida + 100;
        agilidade = agilidade + 5;
        dano_fisico = dano_fisico + 25;
        break;

        default:printf("ERRO! POR PENALIDADE VOC� N�O RECEBE ITEM!");
    }

    system("pause>null");
    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t||   Ap�s se equipar voc� diz adeus ao ferreiro que lhe responde com sarcasmo:                                                                    ||\n\n");
    system("pause>null");
    printf("\t||   - Eu espero que isso n�o seja um adeus e que volte para me pagar caso falhem em derrotar o z� caveira!                                       ||\n\n");
    system("pause>null");
    printf("\t||   Voc� solta uma risadinha ao ver que ele ainda estava irritado com a visita inesperada.                                                       ||\n\n");
    system("pause>null");
    system("cls");

    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t||   Ao retornar at� Viktor ele se espanta com o novo visual e diz:                                                                               ||\n\n");
    system("pause>null");
    printf("\t||   - � isso que eu chamo de estar preparado pra tudo....                                                                                        ||\n\n");
    printf("\t||   - Enfim vamos seguir nossa jornada, precisamos impedir que um bastlha ao norte da cidade seja tomado pelos lacaios do Lich.                  ||\n\n");
    system("pause>null");


    printf("\t||   Voc�s entram na carruagem e seguem em dire��o a bastilha.                                                                                    ||\n\n");
    system("pause>null");
    printf("\t||                                                      .........                                                                                 ||\n");
    system("pause>null");
    printf("\t||                                                        ....                                                                                    ||\n");
    system("pause>null");
    printf("\t||                                                         ..                                                                                     ||\n\n");
    system("pause>null");
    printf("\t||   O vento frio soprava enquanto as nuvens fechavam bem acima de suas cabe�as, voc�s chegaram � bastilha, por�m tarde demais...                 ||\n\n");
    system("pause>null");
    printf("\t||   Ao chegar nos gigantescos port�es uma nevoa densa envolve voc� e Viktor tornando imposs�vel enxergar 5 passos de dist�ncia de onde estavam.  ||\n\n");
    system("pause>null");
    printf("\t||   Surpreendentemente voc�s n�o encontram nada al�m de um lugar vazio e destru�do.                                                              ||\n\n");
    printf("\t||   O silencio desconfortante foi quebrado quando uma figura humanoide esquel�tica usando uma armadura pesada e desgastada apareceu montada em   ||\n");
    system("pause>null");
    printf("\t|| em um cavalo esquel�tico empunhando uma alabarda enorme que facilmente destruiria a parede de uma casa de madeira.                             ||\n\n");
    system("pause>null");
    printf("\t||   Com uma respira��o pesada e olhando friamente para voc�, a criatura prepara sua alabarda e aponta em dire��o a voc�s, tomando uma postura de ||\n");
    printf("\t|| avan�o!                                                                                                                                        ||");
    system("pause>null");
    system("cls");



    //----------------COME�A A BATALHA CONTRA VAREN( BOSS )-----------------------


    vida_oponente = 250;
    agilidade_oponente = 8;
    dano_oponente = 15;
    poder_oponente = 15;
    agilidade_atual_oponente = agilidade_oponente;

    agilidade_atual = agilidade;
    vida_atual = vida;

    if(classe[0] == 1){
        while((vida_atual > 0) && (vida_oponente > 100)){

            printf("\t\t\t\t                 __________________________                      __________________________\n ");
            printf("\t\t\t\t                 |      Seus status       |                      |    Status Oponente     |\n");
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: %i  |  Agilidade: %i  |\n", poder_magico, agilidade, poder_oponente, agilidade_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida: %i    |          |  Dano F�sico: %i  |     Vida: %i    |\n", dano_fisico, vida_atual, dano_oponente, vida_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");



            if(agilidade_atual >= agilidade_atual_oponente){

                agilidade_atual = agilidade_atual/2;

                    printf("\n\n\t\t\t\t\t\t\t|| Escolha sua A��o: ||\n\n\t\t\t\t\t\t\t1- Soco\n\n\t\t\t\t\t\t\t2- Carbonizar\n\n\t\t\t\t\t\t\t3- Rajada de Vento\n\n\t\t\t\t\t\t\t?- Skill Secreta( ENTRE 4 - 15 )\n\n\t\t\t\t\t\t\t|| Resposta: ");
                    scanf("%i", &ataque);

                    if(ataque == 1){
                    ataque = rand() % dano_fisico;
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - ataque;
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 2){
                    ataque = (11 + (rand() % poder_magico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - ataque;
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 3){

                    ataque = ( 1 + (rand() % 10));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu 3 x %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - (3 * ataque);
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 5){

                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu 100 de Dano no inimigo ||\n");
                    vida_oponente = vida_oponente - 100;
                    system("pause>>nul");
                    system("cls");
                    }else{
                        printf("\n\t\t\t\t\t\t\t\t|| Voc� tentou usar outra skill, seu turno passou! ||\n");
                        system("pause>>nul");
                        system("cls");
                    }


            }else{
                agilidade_atual_oponente = agilidade_atual_oponente/2;
                boss = rand() % 2;
                if(boss == 0){
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Investida Sombria! ||\n\n");
                    skillboss = (5 + (rand() % dano_oponente));
                    vida_atual = vida_atual - skillboss;
                    printf("\t\t\t\t\t\t\t\t|| Deu %i de Dano ||\n\n", skillboss);
                    system("pause>>nul");
                    system("cls");
                }

                if(boss == 1){
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Sif�o D'alma ||\n\n");
                    skillboss = (2 + (rand() % poder_oponente));
                    vida_oponente = skillboss + vida_oponente;
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen se cura em %i ||\n\n", skillboss);
                    system("pause>>nul");
                    system("cls");
                }else{
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Condenar(+2 de Dano por cada turno usado) ||\n\n");
                    skill_condenar = skill_condenar + 2;
                    printf("\t\t\t\t\t\t\t\t|| Deu %i de Dano ||\n\n", skill_condenar);
                    vida_atual = vida_atual - skill_condenar;
                    system("pause>>nul");
                    system("cls");
                }


                    system("pause>>nul");
                    system("cls");


        }
    }

    }

     if(vida_atual<0){
        printf("\n\n\n\t\t\t\t\t\t\t\t\tVoc� morreu!");
    }

    //------------------------------------------------------

    if(classe[0] == 2){
        while((vida_atual > 0) && (vida_oponente > 100)){

            printf("\t\t\t\t                 __________________________                      __________________________\n ");
            printf("\t\t\t\t                 |      Seus status       |                      |    Status Oponente     |\n");
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: %i  |  Agilidade: %i  |\n", poder_magico, agilidade, poder_oponente, agilidade_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida: %i    |          |  Dano F�sico: %i  |     Vida: %i    |\n", dano_fisico, vida_atual, dano_oponente, vida_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");



            if(agilidade_atual >= agilidade_atual_oponente){

                agilidade_atual = agilidade_atual/2;

                    printf("\n\n\t\t\t\t\t\t\t|| Escolha sua A��o: ||\n\n\t\t\t\t\t\t\t1- Soco\n\n\t\t\t\t\t\t\t2- Apunhalar\n\n\t\t\t\t\t\t\t3- Golpe Rel�mpago\n\n\t\t\t\t\t\t\t?- Skill Secreta( ENTRE 4 - 15 )\n\n\t\t\t\t\t\t\t|| Resposta: ");
                    scanf("%i", &ataque);

                    if(ataque == 1){
                    ataque = rand() % dano_fisico;
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - ataque;
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 2){
                    ataque = (11 + (rand() % dano_fisico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - ataque;
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 3){

                    ataque = ( 7 + (rand() % dano_fisico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu 3 x %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - (3 * ataque);
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 5){

                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu 100 de Dano no inimigo ||\n");
                    vida_oponente = vida_oponente - 100;
                    system("pause>>nul");
                    system("cls");
                    }else{
                        printf("\n\t\t\t\t\t\t\t\t|| Voc� tentou usar outra skill, seu turno passou! ||\n\n\n");
                        system("pause>>nul");
                        system("cls");
                    }


            }else{
                agilidade_atual_oponente = agilidade_atual_oponente/2;
                boss = rand() % 2;
                if(boss == 0){
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Investida Sombria! ||\n\n");
                    skillboss = (5 + (rand() % dano_oponente));
                    vida_atual = vida_atual - skillboss;
                    printf("\t\t\t\t\t\t\t\t|| Deu %i de Dano ||\n\n", skillboss);
                    system("pause>>nul");
                    system("cls");
                }

                if(boss == 1){
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Sif�o D'alma ||\n\n");
                    skillboss = (2 + (rand() % poder_oponente));
                    vida_oponente = skillboss + vida_oponente;
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen se cura em %i ||\n\n", skillboss);
                    system("pause>>nul");
                    system("cls");
                }else{
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Condenar(+2 de Dano por cada turno usado) ||\n\n");
                    skill_condenar = skill_condenar + 2;
                    printf("\t\t\t\t\t\t\t\t|| Deu %i de Dano ||\n\n", skill_condenar);
                    vida_atual = vida_atual - skill_condenar;
                    system("pause>>nul");
                    system("cls");
                }

                system("pause>>nul");
                system("cls");



        }
    }

    }

     if(vida_atual<0){
        printf("\n\n\n\t\t\t\t\t\t\t\t\tVoc� morreu!");
    }

    //-------------------------------------------------

    if(classe[0] == 3){
        while((vida_atual > 0) && (vida_oponente > 100)){

            printf("\t\t\t\t                 __________________________                      __________________________\n ");
            printf("\t\t\t\t                 |      Seus status       |                      |    Status Oponente     |\n");
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: %i  |  Agilidade: %i  |\n", poder_magico, agilidade, poder_oponente, agilidade_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida: %i    |          |  Dano F�sico: %i  |     Vida: %i    |\n", dano_fisico, vida_atual, dano_oponente, vida_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");



            if(agilidade_atual >= agilidade_atual_oponente){

                agilidade_atual = agilidade_atual/2;

                    printf("\n\n\t\t\t\t\t\t\t|| Escolha sua A��o: ||\n\n\t\t\t\t\t\t\t1- Soco\n\n\t\t\t\t\t\t\t2- Dilacerar\n\n\t\t\t\t\t\t\t3- F�ria Irrefre�vel\n\n\t\t\t\t\t\t\t?- Skill Secreta( ENTRE 4 - 15 )\n\n\t\t\t\t\t\t\t|| Resposta: ");
                    scanf("%i", &ataque);

                    if(ataque == 1){
                    ataque = rand() % dano_fisico;
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - ataque;
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 2){
                    ataque = (11 + (rand() % dano_fisico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - ataque;
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 3){

                    ataque = ( 5 + (rand() % dano_fisico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� Ganhou %i de Dano ||\n", ataque);
                    dano_fisico = dano_fisico + ataque;
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 5){

                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu 100 de Dano no inimigo ||\n");
                    vida_oponente = vida_oponente - 100;
                    system("pause>>nul");
                    system("cls");
                    }else{
                        printf("\n\t\t\t\t\t\t\t\t|| Voc� tentou usar outra skill, seu turno passou! ||\n");
                        system("pause>>nul");
                        system("cls");
                    }


            }else{
                agilidade_atual_oponente = agilidade_atual_oponente/2;
                boss = rand() % 2;
                if(boss == 0){
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Investida Sombria! ||\n\n");
                    skillboss = (5 + (rand() % dano_oponente));
                    vida_atual = vida_atual - skillboss;
                    printf("\t\t\t\t\t\t\t\t|| Deu %i de Dano ||\n\n", skillboss);
                    system("pause>>nul");
                    system("cls");
                }

                if(boss == 1){
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Sif�o D'alma ||\n\n");
                    skillboss = (2 + (rand() % poder_oponente));
                    vida_oponente = skillboss + vida_oponente;
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen se cura em %i ||\n\n", skillboss);
                    system("pause>>nul");
                    system("cls");
                }else{
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Condenar(+2 de Dano por cada turno usado) ||\n\n");
                    skill_condenar = skill_condenar + 2;
                    printf("\t\t\t\t\t\t\t\t|| Deu %i de Dano ||\n\n", skill_condenar);
                    vida_atual = vida_atual - skill_condenar;
                    system("pause>>nul");
                    system("cls");
                }

                    system("pause>>nul");
                    system("cls");



        }
    }

    }



     if(vida_atual<0){
        printf("\n\n\n\t\t\t\t\t\t\t\t\tVoc� morreu!");
    }

    //---------------------------------

    if(classe[0] == 4){
        while((vida_atual > 0) && (vida_oponente > 100)){

            printf("\t\t\t\t                 __________________________                      __________________________\n ");
            printf("\t\t\t\t                 |      Seus status       |                      |    Status Oponente     |\n");
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |          | Poder M�gico: %i  |  Agilidade: %i  |\n", poder_magico, agilidade, poder_oponente, agilidade_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n");
            printf("\t\t\t\t          |  Dano F�sico: %i  |     Vida: %i    |          |  Dano F�sico: %i  |     Vida: %i    |\n", dano_fisico, vida_atual, dano_oponente, vida_oponente);
            printf("\t\t\t\t          _______________________________________          _______________________________________\n\n");



            if(agilidade_atual >= agilidade_atual_oponente){

                agilidade_atual = agilidade_atual/2;

                    printf("\n\n\t\t\t\t\t\t\t|| Escolha sua A��o: ||\n\n\t\t\t\t\t\t\t1- Soco\n\n\t\t\t\t\t\t\t2- Disparo Perfurante\n\n\t\t\t\t\t\t\t3- Saraivada de Flechas\n\n\t\t\t\t\t\t\t?- Skill Secreta( ENTRE 4 - 15 )\n\n\t\t\t\t\t\t\t|| Resposta: ");
                    scanf("%i", &ataque);

                    if(ataque == 1){
                    ataque = rand() % dano_fisico;
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - ataque;
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 2){
                    ataque = (11 + (rand() % dano_fisico));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - ataque;
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 3){

                    ataque = ( 3 + (rand() % 5));
                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu 5 x %i de Dano no inimigo ||\n", ataque);
                    vida_oponente = vida_oponente - (5 * ataque);
                    system("pause>>nul");
                    system("cls");

                    }if(ataque == 5){

                    printf("\n\t\t\t\t\t\t\t\t|| Voc� deu 100 de Dano no inimigo ||\n");
                    vida_oponente = vida_oponente - 100;
                    system("pause>>nul");
                    system("cls");
                    }else{
                        printf("\n\t\t\t\t\t\t\t\t|| Voc� tentou usar outra skill, seu turno passou! ||\n");
                    }


            }else{
                agilidade_atual_oponente = agilidade_atual_oponente/2;
                boss = rand() % 2;
                if(boss == 0){
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Investida Sombria! ||\n\n");
                    skillboss = (5 + (rand() % dano_oponente));
                    vida_atual = vida_atual - skillboss;
                    printf("\t\t\t\t\t\t\t\t|| Deu %i de Dano ||\n\n", skillboss);
                    system("pause>>nul");
                    system("cls");
                }

                if(boss == 1){
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Sif�o D'alma ||\n\n");
                    skillboss = (2 + (rand() % poder_oponente));
                    vida_oponente = skillboss + vida_oponente;
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen se cura em %i ||\n\n", skillboss);
                    system("pause>>nul");
                    system("cls");
                }else{
                    printf("\t\t\t\t\t\t\t\t|| Arauto da Morte Varen usa Condenar(+2 de Dano por cada turno usado) ||\n\n");
                    skill_condenar = skill_condenar + 2;
                    printf("\t\t\t\t\t\t\t\t|| Deu %i de Dano ||\n\n", skill_condenar);
                    vida_atual = vida_atual - skill_condenar;
                    system("pause>>nul");
                    system("cls");
                }

                    system("pause>>nul");
                    system("cls");



        }
    }

    }

    system("pause>null");
    system("cls");

    if(vida_atual<0){
        printf("\n\n\n\t\t\t\t\t\t\t\t\tVoc� morreu!\n\n");
        return 0;
    }
    imprime(poder_magico, agilidade, dano_fisico, vida);

    printf("\t||   A Morte avan�a em sua dire��o e aperta seu pesco�o com uma de suas m�os, voc� sente que � o fim de sua jornada, , ela te puxa para perto e   ||\n");
    printf("\t||  m�os fantasmag�ricas come�am a puxar sua alma, cada segundo de dor incessante faz voc� desejar que tudo acabe logo.                           ||\n\n");
    system("pause>null");
    printf("\t||   Mas o fim n�o viria de maneira t�o f�cil assim....                                                                                           ||\n\n");
    system("pause>null");
    printf("\t||   Viktor desesperadamente tira de seu bolso uma joia verde e come�a a recitar palavras incompreens�veis que n�o pareciam ser de um dialeto     ||\n");
    printf("\t|| comum, a morte rapidamente larga seu pesco�o e corre na dire��o de Viktor por�m � tarde demais, a troca havia sido feita.                      ||\n\n");
    system("pause>null");
    printf("\t||   Uma alma por uma alma....                                                                                                                    ||\n\n");
    system("pause>null");
    printf("\t||   A pedra come�a a sugar Varen para dentro de si enquanto gritos de sofrimento pairam no ar, e quando tudo acabar nada mais resta al�m do      ||\n");
    printf("\t|| corpo de Viktor jogado ao ch�o em seus momentos finais...                                                                                      ||\n\n");
    system("pause>null");
    printf("\t||   Voc� junta o que restou de suas for�as e se arrasta em dire��o ao corpo de Viktor, segurando seu corpo voc� se encontra em desespero.        ||\n\n");
    system("pause>null");
    printf("\t||   .....Viktor tentando manter os olhos abertos segura abre sua m�o e lhe entrega um amuleto....                                                ||\n\n");
    system("pause>null");
    printf("\t||   -....S-S-Se mantenha firme jovem, n�s dois sab�amos que isso poderia acontecer....                                                           ||\n\n");
    system("pause>null");
    printf("\t||   -Quando estiver confuso abra esse rel�gio e lembre-se de que.... Quanto mais escura a noite.... Mais brilhante s�o as estrelas...            ||\n\n");
    system("pause>null");
    printf("\t||   Viktor solta seu �ltimo suspiro...                                                                                                           ||\n\n");
    system("pause>null");
    printf("\t||   Uma chuva serena se inicia.                                                                                                                  ||\n\n");
    system("pause>null");
    printf("\t||   Voc� segura o amuleto e o aperta com for�a e faz um juramento de que ir� acabar com tudo isso, todo esse sofrimento causado pelo Lich.       ||");
    system("pause>null");
    system("cls");


    printf("\t\t\t\t\t\t\t\t\t_____________________\n");
    printf("\t\t\t\t\t\t\t\t\t||      Grupo      ||\n");
    printf("\t\t\t\t\t\t\t\t\t_____________________\n");
    printf("\t\t\t\t\t\t\t\t\t||      Arthur     ||\n");
    printf("\t\t\t\t\t\t\t\t\t||  Gabriel Silva  ||\n");
    printf("\t\t\t\t\t\t\t\t\t|| Lucas Oliveira  ||\n");
    printf("\t\t\t\t\t\t\t\t\t|| Pedro Henrrique ||\n");
    printf("\t\t\t\t\t\t\t\t\t_____________________\n");












    return 0;
}


void imprime(int poder_magico, int agilidade, int dano_fisico, int vida){

    printf("\t\t\t\t\t\t\t                 __________________________\n ");
    printf("\t\t\t\t\t\t\t                 |   Seus status atual    |\n");
    printf("\t\t\t\t\t\t\t          _______________________________________\n");
    printf("\t\t\t\t\t\t\t          | Poder M�gico: %i  |  Agilidade: %i  |\n", poder_magico, agilidade);
    printf("\t\t\t\t\t\t\t          _______________________________________\n");
    printf("\t\t\t\t\t\t\t          |  Dano F�sico: %i  |     Vida: %i    |\n", dano_fisico, vida);
    printf("\t\t\t\t\t\t\t          _______________________________________\n\n\n\n\n");
}
