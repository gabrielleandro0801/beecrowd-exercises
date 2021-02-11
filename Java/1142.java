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
        int vezes;
        int i, j = 1;
        int aux = 1;
        vezes = sc.nextInt();
        for(i = 1; i <= vezes; i++){
          System.out.println(j + " " + (j+1) + " " + (j+2) +" PUM");
          j = j+4;
        }
    }
    
}