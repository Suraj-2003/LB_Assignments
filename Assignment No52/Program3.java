import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        char ch1 = 'A';
        for(int i = 0; i < iRow; i++,ch1++)
        {   
            for(int j = 0; j < iCol ; j++)
            {
                System.out.print(ch1+" ");    
            }
            System.out.println();
            
        }
    }
}

public class Main
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