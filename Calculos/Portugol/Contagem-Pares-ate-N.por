programa
{
	funcao inicio()
	{
		//Declaração de variáveis
		inteiro n, x, contador, valorDaSoma
		
		contador = 1
		valorDaSoma = 0

		//Entrada de dados
		escreva("Até qual valor você quer calcular os números pares? ")
		leia(n)

		//Processamento
		enquanto(contador <= n){
				
			se(contador % 2 == 0){
				valorDaSoma = valorDaSoma + contador
			}

			contador = contador + 1
		}

		//Saída de dados
		escreva("A soma dos números pares até ", n, ", é igual a: ", valorDaSoma)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 406; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */