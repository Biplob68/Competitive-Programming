package Coading;

import java.util.Scanner; 

public class Hashtag {

	public static void main(String[] args) {
		
		Scanner sc= new Scanner(System.in);
		//System.out.print("Enter a string: ");
		
		String str= sc.nextLine(); 
		
		str = str.replaceAll("\\s", "");
	       
        System.out.println(str);
		
		//System.out.println("You have entered: "+str); 

	}

}
