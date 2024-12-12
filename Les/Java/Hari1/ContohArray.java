public class ContohArray {
    public static void main(String[]args) {
        String[] kota = new String[5];

        kota[0] = "Ambon";
        kota[1] = "Balikpapan";
        kota[2] = "Bandung";
        kota[3] = "Klaten";
        kota[4] = "Yogyakarta";

        for (int i=0;i<5;i++){
            System.out.println("Kota ke "+i+" adalah "+kota[i]);
        }

        System.out.println("jumlah kota = "+kota.length);
    }
}