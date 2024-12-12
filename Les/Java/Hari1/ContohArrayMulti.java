public class ContohArrayMulti {
    public static void main (String[]args){
        int[][] pixel = new int[4][3];

        pixel[0][1] = 1;
        pixel[1][1] = 2;
        pixel[1][2] = 3;
        pixel[2][1] = 4;
        pixel[3][1] = 5;

        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                System.out.println(pixel [i][j]+" ");
            }
            System.out.println("");
        }
    }
}
