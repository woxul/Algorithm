import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int n=scanner.nextInt();

        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                System.out.print("*");
            }
            for(int j=i+1; j<n; j++){
                System.out.print("  ");
            }
            for(int j=0; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++){
            for(int j=i; j<n; j++){
                System.out.print("*");
            }
            for(int j=0; j<i; j++){
                System.out.print("  ");
            }
            for(int j=i; j<n; j++){
                System.out.print("*");
            }
            if(i!=n){
                System.out.println();
            }
        }
    }
}