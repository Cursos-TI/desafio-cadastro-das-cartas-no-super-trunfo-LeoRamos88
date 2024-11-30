#include <stdio.h>

int input_user(){

    char codigo[] = {'A', 'B'};
    char nome[20];
    int ponto_turistico;
    float area ,calculo_densidade;
    float pib ,calculo_pib,populacao;
    float densidade_ao1 , super_poder_A01,densidade_AO2,super_poder_AO2;


    for (int incremento = 0;incremento <= 1 ;incremento++ )
    {
        for(int i = 1;i <= 2;i++)
    {

        printf("Nome da cidade : ");
        scanf("%s",&nome);


        printf("\nPopulação : ");
        scanf("%f",&populacao);


        printf("Área : ");
        scanf("%f",&area);

        printf("Pib : ");
        scanf("%f",&pib);

        printf("Quantidade de pontos turísticos : ");
        scanf("%d",&ponto_turistico);

        calculo_densidade =  populacao / area;

        calculo_pib =  pib  / populacao;

        printf("\n----------------------------------\n");

        printf("Estado : %c\n",codigo[incremento]);

        printf("Código da carta : %c0%d\n",codigo[incremento],i);
        printf("Nome da cidade : %s\n",nome);

        printf("População : %f\nÁrea : %.2f km²\n",populacao,area);
        printf("Densidade Populacional : %.2f\n",calculo_densidade);
        printf("PIB : %.2f bilhões de reais\nPIB per Capita : %.2f\n",pib,calculo_pib);
        printf("Número de Pontos Turísticos : %d",ponto_turistico);

        printf("\n----------------------------------\n");

        if (i == 1)
        {
           super_poder_A01 = populacao + area + (1/calculo_densidade) + pib + calculo_pib + ponto_turistico;
           densidade_ao1 =  calculo_densidade;
        }
        else if (i == 2 )
        {
            float super_poder_AO2 = populacao + area + (1/calculo_densidade) + pib + calculo_pib + ponto_turistico;
            float densidade_AO2 = calculo_densidade;
        }
        else if(i == 2)
        {
            printf("Vencedor densidade : ");
            if(densidade_ao1 < densidade_AO2  ){
                printf("1");
            }
            else if (densidade_AO2 < densidade_ao1){
                printf("0");
            }

            printf("Vencedor super Poder : ");
            if (super_poder_A01 > super_poder_AO2)
            {
                printf("1");
            }
            if (super_poder_AO2 > super_poder_A01)
            {
                printf("0");
            }
            
        }
        
        

    }

    }

    return 0;
}


int main()
{
    int entrar;

    printf("--Bem vindo ao Jogo--\n");

    printf("Deseja entrar ? (1/0)");
    scanf("%d",&entrar);

    if (entrar == 1)
    {
        input_user();

    }



    return 0;
}
