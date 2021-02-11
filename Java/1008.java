import java.io.IOException;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num, h;
        double sal;
        num = sc.nextInt();
        h = sc.nextInt();
        sal = sc.nextDouble();
        sal = sal * h;
        System.out.println("NUMBER = " + num);
        System.out.println("SALARY = U$ " + String.format("%.2f", sal));
    }
    
}