import java.io.File;
import java.io.IOException;

public class BuatFileDir {
    public static void main(String[] args) {
        try {
            File object = new
            File("/Users/theodorusyuriputrawibisono/Documents/Belajar/Les/Java/testBuatFileDir.txt");
            if (object.createNewFile()) {
                System.out.println("File dibuat: " + object.getName());
                System.out.println("Path absolut: "+ object.getAbsolutePath());
            } else {
                System.out.println("File Sudah Ada.");
            }
        } catch (IOException e){
            System.out.println("Terjadi Kesalahan.");
            e.printStackTrace();
        }
    }
}
