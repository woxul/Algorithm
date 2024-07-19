import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int s=0;
        int n=scanner.nextInt();
        for(int i=0; i<n; i++){
            int a=scanner.nextInt();
            int b=scanner.nextInt();
            int c=scanner.nextInt();
            s++;
            if(a+b<=c||b+c<=a||a+c<=b){
                System.out.println("Case #"+s+": invalid!");
            }
            else if(a==b&&b==c){
                System.out.println("Case #"+s+": equilateral");
            }
            else if(a==b||b==c||c==a){
                System.out.println("Case #"+s+": isosceles");
            }
            else{
                System.out.println("Case #"+s+": scalene");
            }
        }
    }
}