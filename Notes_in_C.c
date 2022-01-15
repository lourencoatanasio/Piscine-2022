/* C code */
/* A primeira coisa que o computador corre e a funçao main */

#include <stdio.h>
#include <unistd>               /* -------> #include <> sao as livrarias de codigo que o programa ira usar */

int main()
{
  printf("Hello world!\n");     /* --------> "\n" significa quebra de linha */
  
  return 0;                     /* ------->  O programa precisa de retornar um valor. Ao retornar 0 isso diz ao programa que correu com sucesso */
}

_____________________________________________________________________________________________________________________________________________________
  
#include <stdio.h>
#include <unistd.h>
  
int main()
{
  printf("%s is the best person ever", "Bucky");        /* ---------> "%s" e uma expressao que serve como placeholder para um string (conjunto de caracteres) */
                                                        /* ---------> "%s" vai ser substituido por palavras */
  return 0;
}

____________________________________________________________________________________________________________________________________________________

#include <stdio.h>
#include <unistd.h>

int main()
{
  printf("I ate %d corndogs last night", 9);            /* ---------> "%d" e uma expressao que serva como placeholder para numeros inteiros. */
                                                        /* ---------> para numeros com casas decimais utiliza-se "%f" (float) */
                                                        /* ---------> para receber apenas X casas decimais utilizo "%.Xf" */
    return 0;
}

___________________________________________________________________________________________________________________________________________________
  
  #include <stdio.h>
  #include <unistd.h>
  
  int main ()
{
  
  int age;                      /* --------> Para criar uma variavel primeiro preciso de avisar que ela existe */
  int currentYear;
  int birthYear;
  
  age = currentyear - birthYear;         /* --------> Depois defino o seu valor */  
  birthyear = 2001
  currentYear = 2022
  printf("I am %d years old", age); /* --------> Agora o programa substitui "age" pelo numero 20 */
  
  return 0;
}

___________________________________________________________________________________________________________________________________________________
  
  #include <stdio.h>
  #include <unistd.h>
  
  intmain ()
{
  
  char name[14] = "Bucky Roberts";          /* -------> No fim de qualquer string de characters o computador cria um string terminator que nao e visivel "\0" */ 
  printf("My name is %s \n", name);         /* -------> Como sao letras estou a criar um "character array" (char) */
                                            /* -------> Dentro do [] vou por quantos bytes tem o array (1 byte por cada caracter incluindo o string terminator)*/

  name[2] = 'z';                            /* -------> Posso alterar o valor de um dos bites e como tal alterar a letra desse bite para outra coisa */
  printf("My name is %s \n", name);         /* -------> Sempre que uso uma unica letra devo usar single quotes, ex: 'z'. */ 
    
  return 0;
}

___________________________________________________________________________________________________________________________________________________
  
#include <stdio.h>
#include <unistd.h>
  
int main()
{
  char firstName[20]                                    /* --------> char vai guardar strings de letras e int vai guardar numeros*/
  char crush[20]
  int numberOfBabies;
  
  printf("What is your name? \n");                      /* --------> scanf vai pedir user input depois de escrever a pergunta */
  scanf("%s", firstName);                               /* --------> A resposta ira ser guardada na variavel para ser utilizada depois */
                                                        /* --------> O scanf pensa que espaco e o fim do input por isso so se pode responder com uma palavra de cada vez */
  printf("Who are you going to marry? \n");
  scanf("%s", crush);
  
  printf("How many kids are you going ot have? \n");
  scanf("%d", &numberOfBabies);                         /* --------> Utilizar '&' antes de qualquer variavel exceto quando se usar arrays */
  
  printf("%s and %s are in love and are going to have %d babies", firstName, crush, numberOfBabies);
  
  return 0;
}




















