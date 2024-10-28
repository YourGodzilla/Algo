import java.util.Scanner;

public class WordCount {
    public static int countWords(String str) {
        if (str.length()==0) {
            return 0;
        }

        int wordCount = 0;
        int state = 0;

        for(int i = 0; i < str.length();i++) {
            if (Character.isLetterOrDigit(str.charAt(i))) {
                if (state == 0) {
                    wordCount++;
                    state = 1;
                }
            }
            else {
                state = 0;
            }
        }

        return wordCount;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Masukkan kata: ");
        String str = scan.nextLine();
        System.out.println("Jumlah kata: " + countWords(str));
    }
}
