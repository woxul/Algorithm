import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    final static int r=0;
    final static int g=1;
    final static int b=2;


    public static void main(String[] args) throws IOException {

        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer stringTokenizer;

        int n = Integer.parseInt(bufferedReader.readLine());

        int[][] cost = new int[n][3];

        for(int i=0; i<n; i++){
            stringTokenizer = new StringTokenizer(bufferedReader.readLine()," ");

            cost[i][r] = Integer.parseInt(stringTokenizer.nextToken());
            cost[i][g] = Integer.parseInt(stringTokenizer.nextToken());
            cost[i][b] = Integer.parseInt(stringTokenizer.nextToken());
        }

        for (int i=1; i<n; i++){
            cost[i][r] += Math.min(cost[i-1][g], cost[i-1][b]);
            cost[i][g] += Math.min(cost[i-1][r], cost[i-1][b]);
            cost[i][b] += Math.min(cost[i-1][r], cost[i-1][g]);
        }
        System.out.println(Math.min(Math.min(cost[n-1][r], cost[n-1][g]), cost[n-1][b]));
    }
}
