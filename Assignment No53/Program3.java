import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
      
        for(int i = 0; i < iRow; i++)
        {   
            for(int j = iCol; j > 0 ; j--)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
            
        }
    }
}

class Program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of rows");
        int i = sobj.nextInt();
        
        System.out.println("Enter number of columns");
        int j = sobj.nextInt();
        
        Pattern pobj = new Pattern();
        
        pobj.Pattern(i,j);
        
    }
}