import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] a=new int[5];
        int min=1000000000;
        int min2=1000000000;
        for(int i=0; i<5; i++){
            a[i]=scanner.nextInt();
            if(i<3){
                if(a[i]<min){
                    min=a[i];
                }
            }
            else{
                if(a[i]<min2){
                    min2=a[i];
                }
            }
        }
        System.out.println(min+min2-50);
    }
}