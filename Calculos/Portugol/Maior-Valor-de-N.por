programa
{
	
	funcao inicio()
	{
		
		inteiro N, x, maior, contador
		contador = 1
		
		escreva("Quantos valores você quer inserir? ")
		leia(N)
		
		escreva("Insira o primeiro valor: ")
		leia(maior)

		
		enquanto (contador < N){

			leia(x)

			se(x > maior){
				maior = x
			}
						
			contador = contador +1
		}	
		escreva("O maior valor é: ", maior)	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 87; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */