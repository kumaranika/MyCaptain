import java.util.*;
public class MinToYearsDays
{

    public static void main(String[] args) 
    {
        double m;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter minutes: ");
        m = sc.nextDouble();
        MinToYears(m);
    }
    public static void MinToYears(double min)
    {
        double minutes = 60 * 24 * 365;
        long years = (long)(min/minutes);
        int days = (int)(min/60/24)%365;
        System.out.println((int)min  + " minutes is approximately " + years + " years and " + days + " days");
    }
}
