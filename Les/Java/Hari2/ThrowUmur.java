public class ThrowUmur {
    static void cekUmur(int umur) {
        if (umur < 18) {
            throw new ArithmeticException("Akses ditolak - ANda setidaknya harus berumur lebih dari 18 tahun");
        } else {
            System.out.println("Akses diterima - Anda sudah cukup umur");
        }
    }

    public static void main (String[]args) {
        cekUmur(15);
    }
}
