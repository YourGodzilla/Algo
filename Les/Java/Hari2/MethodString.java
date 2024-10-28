public class MethodString {
    public static void main(String[] args) {
        String st = "TES,Tes,tes";
        System.out.println("toLowerCase: "+st.toLowerCase());
        System.out.println("toUpperCase: "+st.toUpperCase());
        System.out.println("karakter pada index ke-4: "+ st.charAt(4));
        System.out.println("jumlah karakter: "+ st.length());
        System.out.println("substring: " + st.substring(2, 5));
    }
}