import java.io.IOException;

import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
        int cod1, cod2;
        int qtd1, qtd2;
        double preco1, preco2, total;
        Scanner sc = new Scanner(System.in);
        
        cod1 = sc.nextInt();
        qtd1 = sc.nextInt();
        preco1 = sc.nextDouble();
        cod2 = sc.nextInt();
        qtd2 = sc.nextInt();
        preco2 = sc.nextDouble();
        
        total = (qtd1 * preco1) + (qtd2 * preco2);
        
        System.out.println("VALOR A PAGAR: R$ " + String.format("%.2f", total));
 
    }
 
}