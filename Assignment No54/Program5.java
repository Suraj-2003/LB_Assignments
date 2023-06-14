import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        char Arr[] = str.toCharArray();
        
        int i = 0, j = 0;
        
        for( i = 0; i < Arr.length; i++)
        {
            for( j = 0; j <= i; j++)
            {
                System.out.print(Arr[j]+"  ");
            }
            System.out.println();
        }
        
        for( i = Arr.length-2; i >= 0; i--)
        {
            for( j = 0; j <= i; j++)
            {
                System.out.print(Arr[j]+"  ");
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
        
        System.out.println("Enter string");
        String str = sobj.nextLine();
        
        Pattern pobj = new Pattern();
        
        pobj.Pattern(str);
        
    }
}