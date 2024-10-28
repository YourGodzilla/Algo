class DemoEksepsi {
    public static void main(String[] args) {
        try{
            int[] arr=new int[1];
            System.out.println(arr[1]);
            System.out.println("baris ini tidak akan pernah dieksekusi");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("terjadi eksepsi karena indeks diluar kapasitas array.");
        }
        System.out.println("sesdah blok try catch");
    }
}
