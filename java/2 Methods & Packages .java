package mycaptain;
import java.util.*;
public class MyCaptain {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
	int a,year,days;
        System.out.print("Input the number of minutes: ");
	a=s.nextInt();
	int cn=60*24*365;
	year=a/cn;
	System.out.print("\n"+a+" minutes is approximately "+year+" years ");
	a=a-(year*cn);
	int cm=60*24;
	days=a/cm;
	System.out.print("and "+days+" days.\n");
    }    
}
