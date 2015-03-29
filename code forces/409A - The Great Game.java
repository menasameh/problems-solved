import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    
    public static void main(String[] args) throws IOException {
        BufferedReader b = new BufferedReader (new InputStreamReader(System.in));
        String p1 = b.readLine();
        String p2 = b.readLine();
        //String[] arr1 = p1.split("[]{2}");
        int c1 = 0,c2 = 0;
        for (int y =0 ; y < p1.length() ; y +=2)
        {
            int e = mat(p1.substring(y, y+2),p2.substring(y, y+2));
            if(e == 0)
            {
                c1++;
            }
            else if (e == 1)
            {
                c2++;
            }
        }
        if (c1>c2)
        {
            System.out.println("TEAM 1 WINS");
        }
        else if (c2>c1)
        {
            System.out.println("TEAM 2 WINS");
        }
        else
        {
            System.out.println("TIE");
        }
        
    }

    private static int mat(String substring, String substring2) {
        switch(substring)
        {
        case "()":
            switch(substring2)
            {
            case "()":return 2;
            case "[]":return 1;
            case "8<":return 0;
            }
        case "[]":
            switch(substring2)
            {
            case "()":return 0;
            case "[]":return 2;
            case "8<":return 1;
            }
        case "8<":
            switch(substring2)
            {
            case "()":return 1;
            case "[]":return 0;
            case "8<":return 2;
            }
        }
        return 0;
    }

}