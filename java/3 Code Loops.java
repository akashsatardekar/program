package mycaptain;
import java.util.*;
public class MyCaptain {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int choice;
        System.out.println("Pick one: \n 1. Hi\t 2. Hey\t 3. Hello\n");
        choice = s.nextInt();
        switch(choice){
            case 1: {
                System.out.println("You said Hi");
                break;
            }
            case 2: {
                System.out.println("You said Hey");
                break;
            }
            case 3: {
                System.out.println("You said Hello");
                break;
            }
            default: System.out.println("Invalid Choice");
        }
    }    
}


