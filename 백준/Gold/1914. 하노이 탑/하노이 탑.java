import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static ArrayList<int[]> step;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        step = new ArrayList<int[]>();

        BigInteger c = new BigInteger("2");
        System.out.println(c.pow(n).subtract(new BigInteger("1")));

        if (n <= 20) {
            hanoi(n,1,2,3);
            for (int i=0; i<step.size(); i++){
                int[] s=step.get(i);
                System.out.println(s[0]+" "+s[1]);
            }
        }
    }

    private static void hanoi(int n, int start, int work, int target) {
        if (n == 1) {
            step.add(new int[]{start, target});
        }
        else{
            hanoi(n-1,start,target,work);
            step.add(new int[] {start,target});
            hanoi(n-1,work,start,target);
        }
    }
}
