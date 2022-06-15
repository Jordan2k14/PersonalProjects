import java.util.Scanner;  
public class Root
{
    public static void main(String[] args)    
{   
    System.out.print("Please Enter a number: ");  
    Scanner sc = new Scanner(System.in);  
    int number = sc.nextInt();  
    System.out.println("The square root of "+ number+ " is: "+squareRoot(n));  
}  

 
public static double squareRoot(int num)   
{  
    double t;  
    double sqrtroot=num/2;
    do   
    {  
        t=sqrtroot;  
        sqrtroot=(t+(num/t))/2;  
    }   
while((t-sqrtroot)!= 0);  
return sqrtroot;  
}  
}  