
package get.integer.input.from.the.user;

import java.util.Scanner;


public class GetIntegerInputFromTheUser {

    
    public static void main(String[] args) {
        try ( // TODO code application logic here
                Scanner input = new Scanner(System.in)) {
            System.out.print("Enter an String: ");
            String number1 = input.next();
            System.out.println("You entered1: " + number1);
            System.out.print("Enter an integer: ");
            int number2 = input.nextInt();
            System.out.println("You entered2 : " + number2);
            // closing the scanner object
            input.close();
        }
    }
    
}
/*
Here, we have used the + operator to concatenate (join) the two strings: "I am " and "awesome.".

And also, the line,

System.out.println("Number = " + number);
Here, first the value of variable number is evaluated. Then, the value is concatenated to the string: "Number = ".



Java Input
Java provides different ways to get input from the user. However, in this tutorial, you will learn to get input from user using the object of Scanner class.

In order to use the object of Scanner, we need to import java.util.Scanner package.


import java.util.Scanner;
To learn more about importing packages in Java, visit Java Import Packages.

Then, we need to create an object of the Scanner class. We can use the object to take input from the user.


// create an object of Scanner
Scanner input = new Scanner(System.in);

// take input from the user
int number = input.nextInt();




In the above example, we have created an object named input of the Scanner class. We then call the nextInt() method of the Scanner class to get an integer input from the user.

Similarly, we can use nextLong(), nextFloat(), nextDouble(), and next() methods to get long, float, double, and string input respectively from the user.

Note: We have used the close() method to close the object. It is recommended to close the scanner object once the input is taken.


Here, we have used the + operator to concatenate (join) the two strings: "I am " and "awesome.".

And also, the line,

System.out.println("Number = " + number);
Here, first the value of variable number is evaluated. Then, the value is concatenated to the string: "Number = ".


*/