import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x=scanner.nextInt();
        int s=64;
        int c=0;
        int a=0;
        while (a!=x){
            if(s<=x&&(a+s)<=x){
                a+=s;
                c++;
            }
            s=s/2;
        }
        System.out.println(c);
    }
}