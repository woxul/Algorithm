import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int t=scanner.nextInt();
        int c;
        int[][] n=new int[t][4];
        for(int i=0; i<t; i++){
            c=scanner.nextInt();
            n[i][0]=c/25;
            n[i][1]=c%25/10;
            n[i][2]=c%25%10/5;
            n[i][3]=c%25%10%5/1;
        }
        for(int i=0; i<t; i++){
            for(int j=0; j<4; j++){
                System.out.print(n[i][j]+" ");
            }
            System.out.println();
        }
    }
}