# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main(){
setlocale(LC_ALL,"");

// Declarando vari�veis. 01�

char loginSalvo [200] = "Jesus";
char senhaSalva [200] = "123456";
char login      [200]; 
char senha      [200];


// Solicitando dados ao usu�rio. 02�

printf("Login: ");
scanf("%s",&login);

printf("Senha: ");
scanf("%s",&senha);

// Condi��o IF & ELSE. 03�

if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0){
	printf("Bem Vindo!");
}else{
	printf("Acesso negado!");
}
return 0;	
}

// 01� == Declarei a vari�veis login e senha.
// 02� == Pedir que o usu�rio colocasse o login e senha.
// 03� == Usei o condi��o IF e ELSE para poder ler o login e senha correto. 
// OBS: N�o conseguir colocar a senha com letras s� com n�mero 
