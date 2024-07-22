import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] s = new int[30][30];
        for(int i=0; i<30; i++){
            s[i][i] = 1;
            s[i][0] = 1;
        }
        for(int i=2; i<30; i++){
            for(int j=1; j<30; j++){
                s[i][j] = s[i-1][j-1] + s[i-1][j];
            }
        }

        int t = scanner.nextInt();
        for(int i=0; i<t; i++){

            int n = scanner.nextInt();
            int m = scanner.nextInt();

            System.out.println(s[m][n]);
        }
    }
}
