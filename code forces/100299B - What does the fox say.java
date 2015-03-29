import java.io.*;
import java.util.*;
public class test {
    public static void main(String[] args) throws NumberFormatException, IOException
    {   
        BufferedReader x = new BufferedReader(new InputStreamReader(System.in));
        boolean start = true;
        
        int num = Integer.parseInt(x.readLine());
        String line =new String ();
        String sound = new String();
        HashSet<String> sounds = new HashSet<String>();
        for (int y=0;y<num;y++)
        {
            line  = x.readLine();
            while(true)
            {
                sound = x.readLine();
                
                if(sound.equals("what does the fox say?"))
                {
                    for (String m : line.split(" ")) {
                        if (sounds.contains(m))
                        {
                        }
                        else
                        {
                        if (start)
                        {
                            System.out.print(m);
                            start = false;
                        }
                        else
                        {
                            System.out.print(" "+m);
                        }
                        if(y == num-1)
                        {}
                        else
                        {
                            System.out.print("\n"); 
                        }
                        }
                    }
                    break;
                }
                else
                {
                    sounds.add(sound.split(" ")[2]);
                }
            }
            
        }
        
            }
}