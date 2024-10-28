public class ArrCopy1 {
    public static void main(String[]args) {
        String[] kota = {"Ambong","Balikpapan","Bandung","Klaten","Yogyakarta"};
        String[] city = new String[5];
        int i;

        System.out.println("Nama Kota Asli: ");
        for (i=0;i<5;i++){
            System.out.println("Kota ke "+i+" adalah "+kota[i]);
        }

        System.out.println("\n");

        System.out.println("Nama Kota Copy: ");
        System.arraycopy(kota, 0, city, 0, 5);

        for(i=0;i<5;i++) {
            System.out.println("City ke "+i+" adalah "+city[i]);
        }
    }
}
