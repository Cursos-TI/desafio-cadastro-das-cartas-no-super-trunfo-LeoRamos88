#include <stdio.h>

int input_user(){

    char cidade[] = {'A', 'B', 'C', 'D', 'E','F','G','H'};
    int populacao ,ponto_turistico;
    float area,pib;

    for (int incremento = 0;incremento <= 7 ;incremento++ )
    {
        for(int i = 1;i <= 4;i++)
    {   
        printf("População : ");
        scanf("%d",&populacao);

        printf("Área : ");
        scanf("%g",&area);

        printf("Pib : ");
        scanf("%g",&pib);

        printf("Quantidade de pontos turísticos : ");
        scanf("%d",&ponto_turistico);

        printf("\n----------------------------------\n");

        printf("Cidade : %c0%d\n",cidade[incremento],i);

        printf("População : %d\nÁrea : %f",populacao,area);
        printf("PIB :%f\nPontos turísticos : %d",pib,ponto_turistico);

        printf("\n----------------------------------\n");

    }
        
    }
    

    return 0;
}


int main()
{
    int entrar;
    
    printf("--Bem vindo ao Jogo--");

    printf("Deseja entrar ? (1/0)");
    scanf("%d",&entrar);

    if (entrar == 1)
    {
        input_user();
    }
    


    return 0;
}