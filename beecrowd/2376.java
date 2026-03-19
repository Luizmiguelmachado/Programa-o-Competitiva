import java.io.IOException;
import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Queue<Character> equipes = new ArrayDeque<>();
        
        for(char c='A'; c<='P'; c++){
            equipes.offer(c);
        }
        
        for(int i = 0; i<15; i++){
            int resp1 = scan.nextInt();
            int resp2 = scan.nextInt();
            
            char c1 = equipes.poll();
            char c2 = equipes.poll();
            
            if(resp1>resp2) equipes.add(c1);
            else equipes.add(c2);
        }
        
        System.out.println(equipes.poll());
    }
}
