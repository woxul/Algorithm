import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int a=scanner.nextInt();
        int b=scanner.nextInt();
        int v=scanner.nextInt();

        if((v-b)%(a-b)==0){
            System.out.println((v-b)/(a-b));
        }
        else{
            System.out.println((v-b)/(a-b)+1);
        }
    }
}