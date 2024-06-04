import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int n;

        int[] arr=new int[31];

        for(int i=1; i<=28; i++){
            n=scanner.nextInt();
            arr[n]++;
        }
        for(int i=1; i<=30; i++){
            if(arr[i]<1){
                System.out.println(i);
            }
        }
    }
}