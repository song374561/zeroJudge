import java.util.Scanner;
import java.math.BigInteger;

public class d636
{
	public static void main(String args[])
	{
		Scanner cin = new Scanner(System.in);
		int n,m;
		while(cin.hasNext())
		{
			n = cin.nextInt();
			m = cin.nextInt();
			BigInteger bn = BigInteger.valueOf(n);
			BigInteger bm = BigInteger.valueOf(m);
			bn = bn.modPow(bm, BigInteger.valueOf(10007));
			
			System.out.println(bn);
		}
	}
}