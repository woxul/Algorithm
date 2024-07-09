import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] arr = new int[n];
        int a = 0;
        int max = -1;
        int b=0;
        int c=0;
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        while (true) {
            int i;
            for (i = 0; i < n; i++) {
                if(i==0){
                    max=arr[i];
                    continue;
                }
                if (arr[i] >= max) {
                    max = arr[i];
                    b=i;
                }
            }
            if(max==arr[0]){
                for(int j=1; j<n; j++){
                    if(arr[0]==arr[j]){
                        c=1;
                    }
                }
                if(c==1){
                    a++;
                }
                break;
            }
            if ((arr[0] - max) <= 0) {
                ++arr[0];
                --arr[b];
                a++;
            }
        }
        System.out.println(a);

    }
}