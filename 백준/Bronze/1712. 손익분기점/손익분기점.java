import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a=scanner.nextInt();
        int b=scanner.nextInt();
        int c=scanner.nextInt();
        int i;
        
        if(c<=b){
            System.out.println(-1);
        }
        else{
            i=a/(c-b)+1;
            System.out.println(i);
        }
    }
}