import java.util.Scanner;

public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        int c = 0;

        for (int i = 0; i < n; i++) {
            if (check()) {
                c++;
            }
        }
        System.out.println(c);
    }

    public static boolean check() {
        boolean[] ch = new boolean[26];
        int a = 0;
        String s = scanner.next();
        for (int i = 0; i < s.length(); i++) {
            int h = s.charAt(i);
            if (a != h) {
                if (!ch[h - 'a']) {
                    ch[h - 'a'] = true;
                    a = h;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
}