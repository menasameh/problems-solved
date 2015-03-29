import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	
	public static void main(String[] args) throws IOException {
		BufferedReader b = new BufferedReader (new InputStreamReader(System.in));
		String p12 = b.readLine();
		int sum =0;
		for (String s : p12.split(" "))
		{
			sum+= Integer.parseInt(s);
		}
		System.out.println(sum);
	}
}