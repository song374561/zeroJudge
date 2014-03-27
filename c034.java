import java.math.BigInteger;
import java.util.Scanner;

public class c034
{
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		BigInteger sum = BigInteger.valueOf(0);
		String a;
		while(cin.hasNext())
		{
			a = cin.next();
			BigInteger Ba = new BigInteger(a);
			if (a.equals("0"))
				break;
			sum = sum.add(Ba);
		}
		System.out.println(sum);
	}
}