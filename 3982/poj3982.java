import java.util.Scanner;
import java.math.BigInteger;

// The class name should be "Main" before submitting to POJ
public class poj3982{
	public static void main(String[] s){
		int n,i;
		BigInteger[] a = new BigInteger[128];
		
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()){
			a[0] = new BigInteger(""+cin.nextInt());
			a[1] = new BigInteger(""+cin.nextInt());
			a[2] = new BigInteger(""+cin.nextInt());
			for(i=3;i<100;i++)
				a[i] = a[i-1].add(a[i-2].add(a[i-3]));
			System.out.println(a[99]);
		}
	}
};

