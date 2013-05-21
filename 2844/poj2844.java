import java.util.Scanner;
import java.math.BigInteger;

// The class name should be "Main" before submitting to POJ
public class poj2844{
	static BigInteger[] cache = new BigInteger[128];
	static void calc(){
		int i,j;
		cache[0] = new BigInteger("1");
		cache[1] = new BigInteger("1");
		for(i=2;i<128;i++){
			cache[i] = new BigInteger("0");
			for(j=0;j<i;j++){
				cache[i] = cache[i].add(cache[j].multiply(cache[i-j-1]));
			}
		}
	}
	public static void main(String[] s){
		int n;
		calc();
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()){
			n = cin.nextInt();
			if(n<0) break;
			System.out.println(cache[n]);
		}
	}
};

