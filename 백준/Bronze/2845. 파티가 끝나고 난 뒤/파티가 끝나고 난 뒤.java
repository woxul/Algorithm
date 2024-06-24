import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int[] arr=new int[5];
        int a=scanner.nextInt();
        int b=scanner.nextInt();

        for(int i=0; i<5; i++){
            arr[i]=scanner.nextInt();
            arr[i]=arr[i]-a*b;
        }
        for(int i=0; i<5; i++){
            System.out.print(arr[i]+" ");
        }
    }
}