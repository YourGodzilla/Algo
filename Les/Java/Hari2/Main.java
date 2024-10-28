public class Main {
    public static void main(String[] args) {
        try {
            int[] nomorSaya = {1,2,3};
            System.out.println(nomorSaya[1]);
        } catch (Exception e) {
            System.out.println("Terjadi kesalahan.");
        } finally {
            System.out.println("'try...catch' sudah selesai.");
        }
    }
}