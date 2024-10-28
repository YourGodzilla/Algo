public class Pecahan {
    private int pembilang;
    private int penyebut;

    public Pecahan(int pemb,int peny) throws Exception {
        if (peny==0){
            throw new Exception("Penyebut tidak boleh nol");
        }
        this.pembilang = pemb;
        this.penyebut = peny;
    }
}
