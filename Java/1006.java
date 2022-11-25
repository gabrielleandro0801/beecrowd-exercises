import java.io.IOException;

import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double num, num2, num3, med;
        num = sc.nextDouble();
        num2 = sc.nextDouble();
        num3 = sc.nextDouble();
        med = ((num*2)+(num2*3)+(num3*5))/10;
        System.out.println("MEDIA = " + String.format("%.1f",med));
    }
    
}
