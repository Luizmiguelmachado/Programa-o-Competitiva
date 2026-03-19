import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        ArrayList<Integer> array = new ArrayList<>();
        
        for(int i=0; i<6; i++){
            int N = scan.nextInt();
            array.add(N);
        }
        
        int cont=0;
        for(int i=0; i<6; i++){
            int N = scan.nextInt();
            if(array.contains(N))   cont++;
        }
        
        if(cont==3){
            System.out.println("terno");
        }
        if(cont==4){
            System.out.println("quadra");
        }
        if(cont==5){
            System.out.println("quina");
        }
        if(cont==6){
            System.out.println("sena");
        }
        if(cont<3){
            System.out.println("azar");
        }
        
    }
}
