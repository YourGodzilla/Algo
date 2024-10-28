import java.util.Scanner;
public class Latihan1 {
    public static void main(String[] args) {
        String[] kata = {"Saya","belajar","bahasa","Java"};
        /*Scanner input = new Scanner(System.in);

        System.out.println("Masukkan kalimat: ");
        kata = input.nextLine();*/

        System.out.println(kata.length);
        
        for(String k : kata) {
            System.out.println(k);
        }
    }
}
