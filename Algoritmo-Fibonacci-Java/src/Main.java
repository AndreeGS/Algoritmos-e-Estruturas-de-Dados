import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int valueUser;
        do {
            System.out.print("Informe o número que você deseja pesquisar na sequência Fibonacci ou digite 0 para sair: ");
            valueUser = scanner.nextInt();

            if (valueUser > 0) {
                int result = positionInFibonacci(valueUser);

                if (result == -1){
                    System.out.println("Valor não encontrado na sequencia!");
                }
                else{
                    System.out.println("O número " + valueUser + " está na posição " + result + " da sequência de Fibonacci.");
                }
            } else if (valueUser < 0) {
                System.out.println("Por favor, informe um número positivo.");
            } else {
                System.out.println("Encerrando o programa.");
            }
        } while (valueUser != 0);
    }

    public static int positionInFibonacci(int valorPesquisa) {
        int valorAnterior = 0;
        int valorPosterior = 1;
        int position = 1;

        while (valorPosterior < valorPesquisa) {
            int temp = valorPosterior;
            valorPosterior = valorAnterior + valorPosterior;
            valorAnterior = temp;
            position++;
        }

        if (valorPosterior == valorPesquisa) {
            return position;
        } else {
            return -1;
        }
    }
}
