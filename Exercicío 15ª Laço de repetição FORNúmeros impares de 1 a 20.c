# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando variável 01º.

int i;


// Mostrando os números impares de 1 a 20 02ª.

for (i = 1; i <= 20; i++){
	 if (i % 2 == 1)
	
	printf("%d \n", i);
}	
	
return 0;	
}
