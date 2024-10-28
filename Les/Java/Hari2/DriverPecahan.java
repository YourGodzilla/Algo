public class DriverPecahan {
    public static void main (String[]args) {
        try {
            System.out.println("Menciptakan pecahan ");
            Pecahan p1 = new Pecahan(1, 1);
        } catch(Exception e){
            System.out.println("Terjadi kesalahan saat penciptaan pecahan ");
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }
}