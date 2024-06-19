import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int a=scanner.nextInt();

        for(int i=0; i<a; i++){
            if(i%2==0){
                for(int j=0; j<a; j++){
                    System.out.print("* ");
                }
                System.out.println();
            }
            else {
                for(int j=0; j<a; j++){
                    System.out.print(" *");
                }
                System.out.println();
            }
        }
    }
}