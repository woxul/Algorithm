import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        HashSet<Integer> set=new HashSet<>();
        int s;
        for(int i=0; i<n; i++){
            set.add(scanner.nextInt());
        }
        int m=scanner.nextInt();
        int[] c=new int[m];
        for(int i=0; i<m; i++){
            s=scanner.nextInt();
            if (set.contains(s)){
                c[i]=1;
            }
        }
        for(int i=0; i<m; i++){
            System.out.println(c[i]);
        }
    }
}