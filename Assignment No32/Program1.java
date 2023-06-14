import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ChkBit(int iNo, int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;

        if((iPos <= 0) && (iPos >= 32))
        {
            System.out.println("Invalid position");
            return 0;
        }

        iMask = iMask << (iPos - 1);

        iResult = iNo & iMask;

        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class Program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        System.out.println("Enter position");
        int pos = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        boolean bRet = bobj.ChkBit(iValue, pos);

        if(bRet == true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }
    }
}