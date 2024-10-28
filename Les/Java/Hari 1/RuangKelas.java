import java.util.Scanner;
public class RuangKelas {
    public static void main (String[]args) {
        String[][] meja = new String[2][3];
        Scanner scan = new Scanner(System.in);

        for(int bar=0;bar<meja.length;bar++){
            for(int kol=0;kol<meja[bar].length;kol++) {
                System.out.format("Siapa yang akan duduk di meja (%d,%d) : ",bar,kol);
                meja[bar][kol] = scan.nextLine();
            }
        }

        System.out.println("------------------------------------------");
        for(int bar=0;bar<meja.length;bar++){
            for(int kol=0;kol<meja[bar].length;kol++){
                System.out.format("| %s | \t", meja[bar][kol]);
            }
            System.out.println("");
        }
        System.out.println("----------------------------------");
    }
}
