public class ArrCopy {
    public static void main (String[]args) {
        int[] angka = {2,4,5,1,12,5};
        int[] nomor = new int[6];
        int i;

        System.out.println("Array Pertama");

        for(i=0;i<angka.length;i++){
            System.out.println(angka[i]+" ");
        }

        System.out.println("\n\nArray yang kedua ");
        System.arraycopy(angka,0,nomor,0,6);
        
        for(i=0;i<nomor.length;i++){
            System.out.println(nomor[i]+" ");
        }

        System.out.println("\n");
    }
}
