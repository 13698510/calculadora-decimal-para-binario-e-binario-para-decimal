#include <stdio.h>
#include <string.h>


int main()
{
   char valor[50], tmp;
   int cont, valor_i, valor_c=0, op_menu, r_div, i, cont2;

   do
   {
     system("cls");
     printf("Calculadora\n");
     {

     }
     printf("1- Decimal para Binario\n");
     printf("2- Binario para Decimal\n");
     printf("3- sair\n");
     do
     {
     scanf("%d", &op_menu);
     }while (op_menu<1||op_menu>3);
     switch(op_menu)
     {
                    case 1:

                         // Decimal para Binario....

                         printf("\nInserir numero a ser convertido: ");
                         scanf("%d", &valor_i);
                         cont=0;
                         i=0;
                         while (i!=1)
                         {
                               r_div=valor_i/2;
                               if (r_div<2)
                               {
                                                i=1;
                                                if (valor_i%2==0)
                                                {
                                                                 valor[cont]='0';
                                                }
                                                else
                                                {
                                                    valor[cont]='1';
                                                }
                                                if (r_div==0)
                                                {
                                                             valor[cont+1]='0';
                                                }
                                                else
                                                {
                                                             valor[cont+1]='1';
                                                }
                                                valor[cont+2]='\0';
                               }
                               else
                               {
                                   if (valor_i%2==0)
                                   {
                                                    valor[cont]= '0';
                                   }
                                   else
                                   {
                                                    valor[cont]= '1';
                                   }
                               }
                               cont++;
                               valor_i=r_div;
                         }
                         cont2=strlen(valor)-1;
                         for (cont=0; cont==cont2||cont<cont2; cont++)
                         {
                             tmp=valor[cont];
                             valor[cont]=valor[cont2];
                             valor[cont2]=tmp;
                             cont2--;
                         }
                         printf("\n%s", valor);
                         fflush(stdin);
                         getch();
                         break;

                    case 2:

                         //Binario para Decimal
                         //***********************************************************************

                         printf("Inserir numero a ser convertido: ");
                         scanf("%s", &valor);
                         for (cont=0; cont<strlen(valor); cont++)
                         {
                             if (valor[cont]=='1')
                             {
                                                  valor_c=valor_c+pow(2, strlen(valor)-(cont+1));
                             }
                             if (valor[cont]!='1'&&valor[cont]!='0')
                             {
                                                  printf("\nValor invalido!");
                                                  cont=strlen(valor); //Terminando o ciclo...
                             }
                         }
                         printf("%d", valor_c);
                         fflush(stdin);
                         getch();
                         break;
                         //***********************************************************************
                    }
     }while (op_menu!=3);


}
