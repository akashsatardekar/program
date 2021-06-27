package mycaptain;
import java.io.*;
public class MyCaptain { 
    String[] name={"Robert","Sam","John"};
    int[] year={1994,2000,1999};
    String[] adr={"64C- WallsStreet","68D- WallsStreet","26B- WallsStreet"};
    public void printdetails()throws IOException{  
        System.out.println("\nName\t\tyearof joning\t\tAddress");  
        for(int j=0;j<3;j++){
            System.out.println(name[j]+"\t\t"+year[j]+"\t\t\t"+adr[j]);
        }
    }
    public static void main(String[] args) throws IOException {
        MyCaptain M0=new MyCaptain();
        M0.printdetails();
    } 
}