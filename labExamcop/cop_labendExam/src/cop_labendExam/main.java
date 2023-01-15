package cop_labendExam;

public class main {

	public static void main(String[] args) {

		long n = 140;
		System.out.println(numIsDivisible(n));

	}

	static String numIsDivisible(long n)
	{
		long temp = n;
	
		// Find sum of digits
		int sum = 0;
		while (n != 0)
		{
			int k = (int) n % 10;
			sum += k;
			n /= 10;
		}
	
		// check if sum of digits divides n
		if (temp % sum == 0)
			return "YES";
	
		return "NO";
	}

}

