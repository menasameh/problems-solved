import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main{
	public static void main(String[] args) throws IOException {
		BufferedReader x = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(x.readLine());
		while(num --> 0 ){
			String line = x.readLine();
			if(line.length() > 10){
				System.out.println(line.charAt(0)+""+(line.length()-2)+""+line.charAt(line.length()-1));
			}
			else{
				System.out.println(line);
			}
		}
	}
}