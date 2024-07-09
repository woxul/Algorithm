import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        String a=scanner.nextLine();

        Integer[] arr=new Integer[a.length()];
        for(int i=0; i<a.length(); i++){
            arr[i]=Character.getNumericValue(a.charAt(i));
        }
        Arrays.sort(arr, Collections.reverseOrder());

        for(int i=0; i< arr.length; i++){
            System.out.print(arr[i]);
        }
    }
}