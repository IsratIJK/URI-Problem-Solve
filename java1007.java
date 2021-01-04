import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a,b,c,d,e;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        d = input.nextInt();
        e = ((a*b)-(c*d));
        System.out.println("DIFERENCA = "+e);
    }
}