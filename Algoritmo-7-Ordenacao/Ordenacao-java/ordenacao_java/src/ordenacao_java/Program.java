package ordenacao_java;

import java.util.Arrays;

public class Program {

    public static void main(String[] args) {
        int n = 10;
        int[] arr = {12, 20, 5, 38, 27, 3, 10, 42, 54, 2};

        System.out.println("Array original:");
        imprimir(arr, n);

        System.out.println("Array Ordenado:");
        ordenar(arr, n);

        imprimir(arr, n);
    }

    public static void ordenar(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            int iMin = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[iMin]) {
                    iMin = j;
                }
            }
           
            int tmp = arr[i];
            arr[i] = arr[iMin];
            arr[iMin] = tmp;
        }
    }

    public static void imprimir(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
