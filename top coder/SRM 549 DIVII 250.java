public class BallAndHats {

	public int getHat(String hats, int numSwaps) {
		int i =hats.indexOf("o");
		if(numSwaps == 0)
			return i;
		else if(numSwaps == 1){
			if(i %2 ==0){
				return 1;
			}
			else
				return 0;
		}
		else if(numSwaps == 2){
			if(i == 1){
				return 1;
			}
			else
				return 0;
		}
		else{
			numSwaps-=hats.indexOf("o");
			if(numSwaps%2 ==0)
				return 0;
			else
				return 1;
		}
	}
}
