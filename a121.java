import java.math.BigInteger;
import java.util.Scanner;

public class a121
{
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		int a,b;
		int i;
		int count;
		while(cin.hasNext())
		{
			count = 0;
			a = cin.nextInt();
			b = cin.nextInt();
			for (i = a ; i <= b ; i++)
			{
				BigInteger Bn = BigInteger.valueOf(i);
				if (Bn.isProbablePrime(3))
					count++;
			}
			System.out.println(count);
		}
	}
}