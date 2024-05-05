programa
{
	funcao inicio()
	{
		//Declaração de variáveis
		inteiro A, B, AX

		//Entrada de dados
		escreva("Insira o valor de A: ")
		leia(A)

		escreva("Insira o valor de B: ")
		leia(B)

		//Processamento
		AX = A - B

		se (AX > 0) 
		{
			escreva(" B é o Menor \n A é o Maior" )
		}
		senao 
		{
			escreva(" A é o Menor \n B é o Maior")
		}
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 356; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */