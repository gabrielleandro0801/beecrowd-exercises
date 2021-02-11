import java.io.IOException;

import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double num, num2, med;
        num = sc.nextDouble();
        num2 = sc.nextDouble();
        med = ((num2*7.5)+(num*3.5))/11;
        System.out.println("MEDIA = " + String.format("%.5f",med));
    }
    
}