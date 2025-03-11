// 1)
#include <stdio.h>
int main(){
  int num = 1;
  
  while(num <= 10){
  printf("%d ", num);
  num++;
  }
  
return 0;
}
// 2)

#include <stdio.h>
int main(){
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);
  if(num < 0){
    printf("Seu número é negativo: %d", num);
  }else if(num > 0){
    printf("Seu número é positivo: %d", num);
  }else{
    printf("Seu número é 0");
  }
return 0;
}

// 3)

#include <stdio.h>
int main(){
  int num = 0;
  
  while(num <= 20){
    if(num %2==0){
      printf("%d", num);
    }
    num++;
  }
return 0;
}

// 4

#include <stdio.h>
int main(){
  int n;

  printf("Digite seu palpite (0 à 10): ");
  scanf("%d", &n);

  if(n != 7){
    printf("Resposta ERRADA!");
  }else{
    printf("CERTA RESPOSTA!!");
  }
return 0;
}

// 5

#include <stdio.h>

int main(){
    int n = 10;
    
    while(n >= 1){
        printf("%d ", n);
        n--;
    }
}

// 6

#include <stdio.h>

int main(){
    int n = 1;
    int soma = 0;
    
    while(n <= 50){
        soma = soma + n;
        n++;
    }
    printf("%d", soma);
    return 0;
}

// 7

#include <stdio.h>

int main(){
    int idade;
    
    printf("DIGITE SUA IDADE: ");
    scanf("%d", &idade);
    
    if(idade >= 60){
        printf("Você é um Idoso!");
    }else if(idade >= 18){
        printf("Você é um Adulto!");
    }else if(idade >= 12){
        printf("Você é um Adolescente!");
    }else{
        printf("Você é uma Criança!");
    }
    
    return 0;
}

// 8

