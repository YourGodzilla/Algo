import java.util.Arrays;

public class SortFruits{
    public static void main (String[]args) {
        String[] fruits = {"Pineaplle","Apple","Orange","Banana"};

        Arrays.sort(fruits);

        int i=0;
        for(String temp: fruits){
            System.out.println("fruits "+ ++i + " : " + temp);
        }
    }
}