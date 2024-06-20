import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int x=scanner.nextInt();
        int y=scanner.nextInt();
        int w=scanner.nextInt();
        int h=scanner.nextInt();
        int min=1000;

        if(w-x<min){
            min=w-x;
        }
        if (h-y<min){
            min=h-y;
        }
        if (x<min){
            min=x;
        }
        if (y<min){
            min=y;
        }
        System.out.println(min);
    }
}