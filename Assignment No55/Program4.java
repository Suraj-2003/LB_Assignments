import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        char Arr[] = str.toCharArray();
        
                
        for(int i = Arr.length-1; i >= 0; i--)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                if(i>=j)
                {
                    System.out.print(Arr[j]+"  ");
                }
                else
                {
                    System.out.print("*"+"  ");
                }
            }
            System.out.println();
        }

        for(int i = 1; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                 if(i>=j)
                 {
                    System.out.print(Arr[j]+"  ");
                 }
                 else
                 {
                     System.out.print("*"+"  ");
                 }
            }
            System.out.println();
        }
     
    }
}

class Program4
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