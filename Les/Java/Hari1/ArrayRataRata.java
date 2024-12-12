public class ArrayRataRata {
    public static void main (String[]args) {
        int[]x = {70,80,60};
        double rata=0.0;

        for (int i=0;i<x.length;i++) {
            rata += x[i]; 
        }
        
        rata /= x.length;
        System.out.println("nilai rata-rata= "+rata);
    }
}