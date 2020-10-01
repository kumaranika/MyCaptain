import java.util.*;
public class Matrix
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int r,c,i,j,k;
        int a[][] = new int[10][10];
        int b[][] = new int[10][10];
        int mul[][] = new int[10][10];
        int sum[][] = new int[10][10];
        System.out.println("Enter number of rows: ");
        r=sc.nextInt();
        System.out.println("Enter number of columns: ");
        c=sc.nextInt();
        System.out.println("Enter elements of " + r + "x" + c +" matrix(max 10):\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter elements of " + r + "x" + c +" matrix(max 10):\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                b[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                mul[i][j]=0;
                for(k=0;k<c;k++)
                {
                    mul[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        System.out.println("Matrix addition:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                System.out.print(sum[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("Matrix multiplication:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                System.out.print(mul[i][j]+" ");
            }
            System.out.println();
        }
    }
}
