import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {

    static  int n;
    static int m;
    public static void main(String[] args) throws IOException {

        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
        StringBuffer stringBuffer = new StringBuffer();

        n = Integer.parseInt(stringTokenizer.nextToken());
        m = Integer.parseInt(stringTokenizer.nextToken());
        HashSet<String> set = new HashSet<>();

        ArrayList<String> strList = new ArrayList<String>();

        for (int i = 0; i < n; i++) {
            set.add(bufferedReader.readLine());
        }
        for (int i = 0; i < m; i++) {
            String str = bufferedReader.readLine();

            if (set.contains(str)) {
                strList.add(str);
            }
        }
        Collections.sort(strList);
        System.out.println(strList.size());

        for (String s : strList) {
            System.out.println(s);
        }
    }
}
