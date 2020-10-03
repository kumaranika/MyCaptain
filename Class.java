import java.util.*;
public class Class
{
    public static void main(String[] args)
    {
        String name[] = new String[3];
        String add[] = new String[3];
        int sal[] = new int[3];
        int yoj[] = new int[3];
        int i;
        Scanner sc = new Scanner(System.in);
        for(i=0;i<3;i++)
        {
            System.out.println("Enter Employee Name: ");
            name[i] = sc.nextLine();
            System.out.println("Enter Year of Joining: ");
            yoj[i] = sc.nextInt();
            System.out.println("Enter Salary: ");
            sal[i] = sc.nextInt();
            System.out.println("Enter Address: ");
            add[i] = sc.nextLine();
            System.out.println();
        }
        System.out.println("Employee Name \t Year of Joining \t Salary \t Address ");
        for(i=0;i<3;i++)
        {
            System.out.println(name[i] + "\t\t" + yoj[i] + "\t\t" + sal[i] + "\t\t" + add[i]);
        }
    }
}
