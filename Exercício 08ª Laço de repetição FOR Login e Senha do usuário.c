# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main(){
setlocale(LC_ALL,"");

// Declarando variáveis. 01ª

char loginSalvo [200] = "Jesus";
char senhaSalva [200] = "123456";
char login      [200]; 
char senha      [200];


// Solicitando dados ao usuário. 02ª

printf("Login: ");
scanf("%s",&login);

printf("Senha: ");
scanf("%s",&senha);

// Condição IF & ELSE. 03ª

if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0){
	printf("Bem Vindo!");
}else{
	printf("Acesso negado!");
}
return 0;	
}

// 01ª == Declarei a variáveis login e senha.
// 02ª == Pedir que o usuário colocasse o login e senha.
// 03ª == Usei o condição IF e ELSE para poder ler o login e senha correto. 
// OBS: Não conseguir colocar a senha com letras só com número 
