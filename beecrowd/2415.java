import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        ArrayList<Integer> array = new ArrayList<>();
        
        int N = scan.nextInt();
        
        
        int first = scan.nextInt();
        int cont=1;
        
        for(int i=1; i<N; i++){
            int V = scan.nextInt();
            if(V!=first){
                first = V;
                array.add(cont);
                cont=1;
            }
            else{
                cont++;
            }
        }
        array.add(cont);
        
        int maior = array.get(0);
        for(int i=1; i<array.size(); i++){
            if(array.get(i)>maior) maior=array.get(i);
        }
        System.out.println(maior);
    }
}
