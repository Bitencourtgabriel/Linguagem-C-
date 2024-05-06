# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando a variável. 01ª

int i;

// formula para printar números pares de 100 a 120. 01ª

for (i = 100; i <= 120; i++){
		if (i % 2 == 0){
		    printf("%d \n", i);
		}
}

return 0;	
}

// 01ª == Declarei a variável inteira porque o enunciado já falou os números que era 100 até 120, só que mostrasse apenas os números pares entre 100 a 120.
// 02ª == Usei o " For " para mostrar o laço de repetição de 100 até 120.
// 03ª == Não foi preciso usar o system para limpar, porque já vai aparecer só números pares
