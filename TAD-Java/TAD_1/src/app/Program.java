package app;

import java.util.Scanner;

import entities.Numero;

public class Program {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		Numero numero = new Numero();
		
		while (true) {
			System.out.println("===================================================");
			System.out.println("               Estudo do TAD Número");
			System.out.println("===================================================");
			System.out.println("0 - Encerrar");
			System.out.println("1 - Ler valor");
			System.out.println("2 - Atribuir valor");

			System.out.println("Qual a sua opção? ");
			
			int opc = sc.nextInt();
			
			if (opc == 0) {
				break;
			}
			else if (opc == 1) {
				System.out.println("\n\n" + numero.getValor() + "\n\n");
			}
			else if(opc == 2) {
				System.out.print("Preencha um novo valor: ");
				float v = sc.nextFloat();
				numero.setValor(v);
			}
		}
		
		System.out.println("--- FIM ---");
	}
}
