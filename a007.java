import java.math.BigInteger;
import java.util.Scanner;

public class a007
{
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		int n;
		while(cin.hasNext())
		{
			n = cin.nextInt();
			BigInteger Bn = BigInteger.valueOf(n);
			if (Bn.isProbablePrime(2))
				System.out.println("質數");
			else
				System.out.println("非質數");
		}
	}
}