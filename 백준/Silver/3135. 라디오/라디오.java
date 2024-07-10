import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int n = scanner.nextInt();
        int[] arr = new int[n];
        int c = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        c=Math.abs(b-a);
        for (int i = 0; i < n; i++) {
            int d=Math.abs(b-arr[i])+1;
            if(d<c){
                c=d;
            }
        }

        System.out.print(c);
    }
}