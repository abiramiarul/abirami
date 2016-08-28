import java.io.*;
import java.util.*;
class String_camelcase
{
public static void main(String[] args)
{
String r="";
Scanner in=new Scanner(System.in);
System.out.println("Enter the string");
String s=in.nextLine();
char f=s.charAt(0);
r=r+Character.toUpperCase(f);
for(int i=1;i<s.length();i++)
{
char c=s.charAt(i);
char p=s.charAt(i-1);
if(p==' ')
{
r=r+Character.toUpperCase(c);
}
else
{
r=r+c;
}

}
System.out.println(r);
}
}
