import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/*Custo do algoritmo O(log n)*/

public class Main {

    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);
        List<Integer> valores = new ArrayList<>();

        for(int i = 0; i <= 128; i++){
            valores.add(i);
        }

        System.out.println("Insira o valor a ser pesquisado: ");
        int valor = sc.nextInt();

        int indice = pesquisaBin(valores, valor);

        System.out.println("O valor procurado está na posição: " + indice);
    }

    public static int pesquisaBin(List<Integer> valores, int valorProcurado){

        int posLInicial = 0;
        int posLFinal = valores.size() - 1;

        while (posLInicial <= posLFinal){

            int posMeio = ((posLInicial + posLFinal)/2);

            int palpite = valores.get(posMeio);

            if (palpite == valorProcurado){
                return posMeio;
            }

            else if(palpite > valorProcurado){
                posLFinal = posMeio - 1;
            }

            else {
                posLInicial = posMeio + 1;
            }
        }

        return -1;
    }
}