import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int[] a=new int[3];
        int sum=0;
        for(int i=0; i<3; i++){
            a[i]=scanner.nextInt();
            sum+=a[i];
        }
        if(sum==180){
            if(a[0]==a[1]&&a[1]==a[2]){
                System.out.println("Equilateral");
            }
            else if (a[0]==a[1]||a[1]==a[2]||a[0]==a[2]){
                System.out.println("Isosceles");
            }
            else if (a[0]!=a[1]&&a[1]!=a[2]&&a[0]!=a[2]){
                System.out.println("Scalene");
            }
        }
        else System.out.println("Error");
    }
}