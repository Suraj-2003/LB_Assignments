import java.lang.*;
import java.util.*;

class Pattern
{
    public void pattern(int iRow, int iCol)
    {
        for(int i = iRow-1; i >= 0; i--)
        {
            for(int j = 0; j < iCol ; j++)
            {
                if(i > j)
                {
                    System.out.print("*"+" ");
                }
                else if(i < j)
                {
                    System.out.print("@"+" ");
                }
                else
                {
                    System.out.print("#"+" ");
                }
            }
            System.out.println();
        }
        
    } 
}

class Program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of rows");
        int iRow = sobj.nextInt();
        
        System.out.println("Enter number of columns");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.pattern(iRow,iCol);
        
    }
}