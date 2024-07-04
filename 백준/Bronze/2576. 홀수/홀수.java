import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int min=1000000000;
        int a;
        int b=0;
        for(int i=0; i<7; i++){
            a=scanner.nextInt();
            if(a%2!=0){
                b+=a;
                if(a<min){
                    min=a;
                }
            }
        }
        if(b==0){
            System.out.println("-1");
        }
        else {
            System.out.println(b);
            System.out.println(min);
        }
    }
}