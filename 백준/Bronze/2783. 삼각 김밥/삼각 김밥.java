import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double x;
        double y;
        double min;
        int n;

        x=scanner.nextInt();
        y=scanner.nextInt();
        min=(x/y);
        n=scanner.nextInt();
        for(int i=0; i<n; i++){
            x=scanner.nextInt();
            y=scanner.nextInt();
            if((x/y)<min){
                min=(x/y);
            }
        }
        System.out.println(min*1000);
    }
}