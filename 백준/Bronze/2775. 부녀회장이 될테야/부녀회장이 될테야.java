import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int[][] h=new int[15][15];
        int t=sc.nextInt();
        int k,n;

        for(int i=0; i<15; i++){
            h[0][i]=i;
        }

        for(int i=1; i<15; i++){
            for(int j=1; j<15; j++){
                h[i][j]=h[i-1][j]+h[i][j-1];
            }
        }
        for(int i=0; i<t; i++){
            k=sc.nextInt();
            n=sc.nextInt();
            System.out.println(h[k][n]);
        }
    }
}