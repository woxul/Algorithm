import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int m=scanner.nextInt();
        int n=scanner.nextInt();
        int c=0;
        for(int i=m; i<=n; i++){
            for(int j=2; j<=Math.sqrt(i); j++){
                if(i%j==0){
                    c++;
                }
            }
            if(c==0){
                if(i!=1){
                    System.out.println(i);
                }
            }
            c=0;
        }
    }
}