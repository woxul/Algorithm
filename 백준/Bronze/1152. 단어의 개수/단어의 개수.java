import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        String m=scanner.nextLine();

        StringTokenizer str=new StringTokenizer(m," ");

        System.out.println(str.countTokens());
    }
}