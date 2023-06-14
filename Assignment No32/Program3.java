import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OnBit(int iNo, int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
        
        if((iPos <= 0) && (iPos >= 32))
        {
            System.out.println("Invalid position");
            return 0;
        }

        iMask = iMask << (iPos - 1);

        iResult = iNo | iMask;
        
        return iResult;
    }
}

class Program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        System.out.println("Enter position");
        int pos = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        int iRet = bobj.OnBit(iValue, pos);
        
        System.out.println("Updated number is:"+iRet);
    }
}