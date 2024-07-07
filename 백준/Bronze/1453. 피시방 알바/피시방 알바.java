import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        int x = 0;
        int y = 0;
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
            for (int j = 0; j < i; j++) {
                y=0;
                if (a[i] == a[j]) {
                    x++;
                    y++;
                }
                if(y!=0){
                    break;
                }
            }
        }
        System.out.println(x);
    }
}