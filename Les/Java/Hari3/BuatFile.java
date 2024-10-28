import java.io.File;
import java.io.IOException;

public class BuatFile {
    public static void main(String[] args) {
        try {
            File object = new File("Darren.txt");
            if (object.createNewFile()) {
                System.out.println("File dibuat: " + object.getName());
            } else {
                System.out.println("File sudah ada.");
            }
            
            } catch (IOException e) {
                System.out.println("Terjadi Kesalahan");
                e.printStackTrace();
            }
    }
}
