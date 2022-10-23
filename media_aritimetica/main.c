#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    int cont, cont2;

    printf("digite o numero de alunos");
    scanf("%d",&cont);
    cont2 = 0;
        while(cont2 < cont)
            {
            printf("digite a primeira nota do aluno:");
            scanf("%f",&nota1);
            printf("digite a segunda nota do aluno:");
            scanf("%f",&nota2);
            printf("digite a terceira nota do aluno:");
            scanf("%f",&nota3);

            media = (nota1 + nota2 + nota3) / 3;

            cont2 ++;

            if(media > 7)
                printf("Sua media foi %f e voce foi Aprovado\n",media);
            else
                printf("Sua media foi %f e voce foi reprovado\n",media);


            }

    return 0;
}
