import java.io.IOException;

import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double num, area;
        num = sc.nextDouble();
        area = 3.14159 * Math.pow(num, 2);
        System.out.println("A=" + String.format("%.4f", area));
    }
    
}