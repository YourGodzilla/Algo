import java.util.Scanner;

public class ArrayRataRata1 {
    public static void main (String[]args) {
        Scanner input = new Scanner(System.in);

        int jumlah;
        int nilai;
        double rata=0.0;

        System.out.println("Berapa Jumlah Nilai: ");
        jumlah = input.nextInt();

        for (int i=0;i<jumlah;i++) {
            System.out.println("Masukkan nilai : ");
            nilai = input.nextInt();
            rata += nilai; 
        }
        rata /= jumlah;
        System.out.println("nilai rata-rata= "+rata);
    }
}