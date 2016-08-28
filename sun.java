import java.util.*;
public class Holiday_Working_day
{
public static void main(String ar[])throws Exception
{
String day;
Scanner sc=new Scanner(System.in);
day=sc.next();
check(day);
}
public void check(String da)
{
if(da.equalsIgnoreCase("Sunday"))
System.out.println("false");
else
System.out.println("true");
}
}
