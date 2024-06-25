import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int k=scanner.nextInt();
        int n=scanner.nextInt();
        int m=scanner.nextInt();

        if(n*k-m>0){
            System.out.println(n*k-m);
        }
        else{
            System.out.println("0");
        }
    }
}