import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OffBit(int iNo)
    {
        int iMask = 0X00000240;
        int iResult = 0;

        iResult = iNo ^ iMask;
        if(iResult == 0)
        {
            return iResult;
        }
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
        
        int iRet = bobj.OffBit(iValue);
        System.out.println("Updated number is:"+iRet);

    }
}