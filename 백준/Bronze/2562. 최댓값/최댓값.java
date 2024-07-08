import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr=new int[9];
        int max=-1;
        int a=0;
        for(int i=0; i<9; i++){
            arr[i]=scanner.nextInt();
            if(arr[i]>max){
                max=arr[i];
                a=i;
            }
        }
        System.out.println(max);
        System.out.println(a+1);
    }
}