programa
{
    funcao inicio()
    {
        // Declaração de variáveis
        inteiro salarioDeEntrada, valorDeSaidaINSS

        // Entrada de dados
        escreva("Insira o salário que você deseja calcular: ")
        leia(salarioDeEntrada)

        // Processamento
        se(salarioDeEntrada <= 1659.38)
        {
            valorDeSaidaINSS = salarioDeEntrada * 0.08
            salarioDeEntrada = salarioDeEntrada * 0.92
        }
        senao se(salarioDeEntrada <= 2765.66)
        {
            valorDeSaidaINSS = salarioDeEntrada * 0.09
            salarioDeEntrada = salarioDeEntrada * 0.91
        }
        senao se(salarioDeEntrada <= 5531.31)
        {
            valorDeSaidaINSS = salarioDeEntrada * 0.11
            salarioDeEntrada = salarioDeEntrada * 0.89
        }
        senao
        {
            valorDeSaidaINSS = 608.44
            salarioDeEntrada = salarioDeEntrada - 608.44
        }

        // Saída
        escreva("O valor de saída é: ", valorDeSaidaINSS, ". E o salário liquido é: ", salarioDeEntrada)
    }
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 940; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */