public class BelajarString1 {
    public static void main(String[] args) {
        String kata = "AGUNG";
        String kata2 = "agung";
        String kata3 = "agung";
        System.out.println(kata2.equalsIgnoreCase(kata3));
        System.out.println(kata.equalsIgnoreCase(kata2));
    }
}