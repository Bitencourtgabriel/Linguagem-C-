# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando vari�vel 01�.

int i;


// Mostrando os n�meros impares de 1 a 20 02�.

for (i = 1; i <= 20; i++){
	 if (i % 2 == 1)
	
	printf("%d \n", i);
}	
	
return 0;	
}
