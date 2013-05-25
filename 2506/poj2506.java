import java.util.Scanner;
import java.math.BigInteger;

// The class name should be "Main" before submitting to POJ
public class poj2506{
	static BigInteger[] dp = new BigInteger[256];
	static void calc(){
		int i,j;
		dp[0] = new BigInteger("1");
		dp[1] = new BigInteger("1");
		for(i=2;i<256;i++){
			dp[i] = new BigInteger("0");
			dp[i] = dp[i].add(dp[i-1]);
			dp[i] = dp[i].add(dp[i-2]);
			dp[i] = dp[i].add(dp[i-2]);
		}
	}
	public static void main(String[] s){
		int n;
		calc();
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()){
			n = cin.nextInt();
			if(n<0) break;
			System.out.println(dp[n]);
		}
	}
};

