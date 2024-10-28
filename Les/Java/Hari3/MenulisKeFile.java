import java.io.FileWriter;
import java.io.IOException;

public class MenulisKeFile {
    public static void main(String[] args) {
        try {
            FileWriter tulisan = new FileWriter("Nathan.txt");
            tulisan.write("Nathan Ganteng.");
            tulisan.close();
            System.out.println("Berhasil menulis ke file");
        } catch (IOException e) {
            System.out.println("Terjadi Kesalahan.");
            e.printStackTrace();
        }
    }
}
