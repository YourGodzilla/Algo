public class Array2D {
    public static void main(String[]args){
        String[][] arrNama = {
            {"Ano","Lichin","Iim"},
            {"Zhay","Dicky","Wimbo"},
            {"Tommy","Pliqu","Jati"}
        };

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                System.out.print(arrNama[i][j]);
                System.out.print(" ");
            }
            System.out.println("\n");
        }
        System.out.print("\n\n");
    }
}
