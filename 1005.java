import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        Double a,b,result;
        a = input.nextDouble();
        b = input.nextDouble();
        result=((a*3.5)+(b*7.5))/(3.5+7.5);
        System.out.println("MEDIA = "+String.format("%.5f", result));
       
        
    }
}

 
