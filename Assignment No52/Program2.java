import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        
        for(int i = 0; i < iRow; i++)
        {   
            char ch1 = 'A', ch2 = 'a';
            for(int j = 0; j < iCol ; j++)
            {
                if((i % 2 ) == 0)
                {
                    System.out.print(ch1+"\t");
                    ch1++;
                }
                else
                {
                    System.out.print(ch2+"\t");
                    ch2++;
                    
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
        int i = sobj.nextInt();
        
        System.out.println("Enter number of columns");
        int j = sobj.nextInt();
        
        Pattern pobj = new Pattern();
        
        pobj.Pattern(i,j);
        
    }
}