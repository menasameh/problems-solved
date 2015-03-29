import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

class Main {
	public static int Fuel_consumption = 0;
	public static int Leak = 1;
	public static int Gas_station = 2;
	public static int Mechanic = 3;
	public static int Goal = 4;

	static double min ;
	static class pair{
		public int type,i,j;
		public pair(int type,int i,int j){
			this.type = type;
			this.i=i;
			this.j=j;
		}
		public pair(int type,int i){
			this.type = type;
			this.i=i;
		}
	}
	static LinkedList<pair> road = new LinkedList<pair>();

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		while(true){
			min =  1e7;
			while(true){
				
				
				String s = br.readLine();
				if(s.equals("0 Fuel consumption 0"))
					return ;
				
				
				String [] list = s.split(" ");
				
				if(list[1].equals("Fuel")){
					road.add(new pair(Fuel_consumption,Integer.parseInt(list[0]),Integer.parseInt(list[3])));
				}
				else if(list[1].equals("Goal")){
					road.add(new pair(Goal,Integer.parseInt(list[0])));
					break;
				}
				else if(list[1].equals("Leak")){
					road.add(new pair(Leak,Integer.parseInt(list[0])));
				}
				else if(list[1].equals("Gas")){
					road.add(new pair(Gas_station,Integer.parseInt(list[0])));
				}
				else if(list[1].equals("Mechanic")){
					road.add(new pair(Mechanic,Integer.parseInt(list[0])));
				}
			}

			getAns();
			System.out.printf("%.3f\n",min);
			road.clear();

		}
	}



	private static void getAns() {
		double hi=1e7,lo=0,mid;
		while(hi - lo >= 1e-7){
			mid = (hi + lo)/2;
			if(p(mid)){
				hi = mid;
				if (mid < min){
					min = mid;
				}
			}
			else{
				lo = mid;
			}
		}
	}



	private static boolean p(double x) {
		double lastX = x;
		int leak = 0;
		int fuel =0;
		for( int i = 0;i<road.size()-1;i++){
			pair p = road.get(i);
			pair next = road.get(i+1);
			if(p.type == Fuel_consumption){fuel =p.j; x = x - ((fuel * (next.i - p.i))/100.0) - (leak * (next.i - p.i));}
			else if(p.type == Leak){leak++;x = x-(leak * (next.i - p.i)) - ((fuel * (next.i - p.i))/100.0);}
			else if(p.type == Gas_station){x = lastX -(leak * (next.i - p.i)) - ((fuel * (next.i - p.i))/100.0); }
			else if(p.type == Mechanic){leak = 0;x = x - ((fuel * (next.i - p.i))/100.0);}
			if (x < 0){
				return false;
			}
		}
		return true;
	}
}
