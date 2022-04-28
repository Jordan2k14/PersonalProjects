import java.util.*;

public class Main{

    public static void main (String[] args){
        
        Scanner in = new Scanner(System.in);
        
        // Greeting messages.
        
        System.out.println("Welcome to the keypad generator. ");
        System.out.println("First of all please enter your name. ");
       

        //Creative Element - User must now enter their name

        String name = in.nextLine();
        System.out.println("Hello "+ name + ", It's nice to meet you");

        //Creative Element - Finds the lenght of the users name for the kaypad
        //Creative Element - Also tells them how many letters they need to find
        int length = name.length();
        System.out.println("To print " + name + ", On a phone keypad, you will need a combination of " + length + " different letters.");

        
        // Reading in the keypad numbers -> For example inputting 234 will print the desired result
        
        System.out.println("Now Please enter a number for the generator to work (don't use 1 or 0):");
        String number = in.nextLine();
        
        // Passing the keypad numbers, an initially empty output string and 0 to our recursive function.
        PhoneCombo(number,"", 0);
 
    }

    public static void PhoneCombo(String input,String output,int i){

        // Our base case. If i == the length of the keypad number string, print the output string and return.
        if(i==input.length()){

            System.out.println(output);

            return;

        }
        
        // str holds the letters mapped by the digit.

        String str = helper(input.charAt(i));

        // Now we generate the combos, recursively.
        
        for(int j=0;j<str.length();j++){

            PhoneCombo(input,output+str.charAt(j),i+1);

        }

    }

    // Our helper method maps digits to letters. Given a digit, we return the letters it maps to.
    
    public static String helper(char ch){
        
        String combos[] = {"blank", "blank", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        int digit = Character.getNumericValue(ch);
        
        return combos[digit];
 
    }

}
