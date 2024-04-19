import java.util.Scanner; // Import the Scanner class

class FactorialExample {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);  // Create a Scanner object for input
        System.out.println("Enter a number to calculate its factorial:");

        int number = scanner.nextInt();  // Read user input as an integer
        int fact = 1;

        for (int i = 1; i <= number; i++) {
            fact *= i;
        }

        System.out.println("Factorial of " + number + " is: " + fact);

        scanner.close();  // Close the scanner
    }
}