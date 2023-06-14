import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToogleBit(int iNo)
    {
        int iMask = 0X00000040;
        int iResult = 0;

        iResult = iNo ^ iMask;

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

        Bitwise bobj = new Bitwise();
        
        int iRet = bobj.ToogleBit(iValue);
        System.out.println("Updated number is:"+iRet);

    }
}