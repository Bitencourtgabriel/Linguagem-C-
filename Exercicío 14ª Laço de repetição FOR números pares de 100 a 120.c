# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando a vari�vel. 01�

int i;

// formula para printar n�meros pares de 100 a 120. 01�

for (i = 100; i <= 120; i++){
		if (i % 2 == 0){
		    printf("%d \n", i);
		}
}

return 0;	
}

// 01� == Declarei a vari�vel inteira porque o enunciado j� falou os n�meros que era 100 at� 120, s� que mostrasse apenas os n�meros pares entre 100 a 120.
// 02� == Usei o " For " para mostrar o la�o de repeti��o de 100 at� 120.
// 03� == N�o foi preciso usar o system para limpar, porque j� vai aparecer s� n�meros pares
