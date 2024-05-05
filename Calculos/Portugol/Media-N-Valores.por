programa
{
	funcao inicio()
	{
		//Declaração de variáveis
		inteiro x, soma, contador, valorQuantidade
		real media

		soma = 0
		contador = 1
		
		//Entrada de dados
		escreva("Quantos valores você quer adicionar para calcular a média? ")
		leia(valorQuantidade)

		escreva("Insira os valores: ")
		enquanto(contador <= valorQuantidade){
			
			leia(x)
			soma = soma + x
				
			contador = contador + 1		
		}

		//processamento
		media = soma / valorQuantidade 

		//Saída
		escreva("O valor da média é: ", media)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 521; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */