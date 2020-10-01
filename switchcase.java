import java.util.*;
public class switchcase
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int choice;
        System.out.println("Pick one: 1. Hi\t2. Hey\t3. Hello\t");
        choice = sc.nextInt();
        switch(choice)
        {
            case 1:
                System.out.println("You said Hi");
                break;
            case 2:
                System.out.println("You said Hey");
                break;
            case 3:
                System.out.println("You said Hello");
                break;
            default:
                System.out.println("Invalid choice");
        }
    }
}
