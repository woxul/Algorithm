import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int a=scanner.nextInt();
        int b=scanner.nextInt();
        int c=scanner.nextInt();
        int n;
        if(a==b&&b==c){
            n=10000+a*1000;
        }
        else if (a==b||a==c||b==c) {
            if(a==b){
                n=1000+(100*a);
            }
            else if (a==c){
                n=1000+(100*c);
            }
            else{
                n=1000+(100*b);
            }
        }
        else {
            if(a>b&&a>c){
                n=a*100;
            }
            else if (b>a&&b>c) {
                n=b*100;
            }
            else {
                n=c*100;
            }
        }
        System.out.println(n);
    }
}