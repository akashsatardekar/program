package mycaptain;
import java.util.*;
public class MyCaptain {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int a=0,b=1,c;
        System.out.print(a+","+b);
        for(int i=1; i<=10; i++){
            c=a+b;
            System.out.print(","+c);
            a=b;
            b=c;
        }
    }    
}