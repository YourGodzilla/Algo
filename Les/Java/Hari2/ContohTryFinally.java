public class ContohTryFinally {
    public static void main(String[] args) {
        double bil = 100.0;
        for(int i=5;i>=0;i--) {
            try{
                System.out.print(bil+ "/" +i+ "= ");
                System.out.println(bil/i);
            } finally {
                System.out.println("bagian finally dijalankan");
            }
        }
        System.out.println("Selesai");
    }
}
