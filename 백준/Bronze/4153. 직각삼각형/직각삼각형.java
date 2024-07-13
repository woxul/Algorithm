import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int[] arr=new int[3];
        int max=-1;
        int a;
        int c=0;
        while (true) {
            for(int i=0; i<3; i++){
                a=scanner.nextInt();
                arr[i]=a*a;
                if(arr[i]>max) {
                    max = arr[i];
                }
                c+=arr[i];
            }
            if(c==0){
                break;
            }
            if(c-max==max){
                System.out.println("right");
            }
            else{
                System.out.println("wrong");
            }
            max=-1;
            c=0;
        }
    }
}