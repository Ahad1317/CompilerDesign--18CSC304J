import java.util.Scanner;

public class PrimeCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);  // Create a Scanner object
        System.out.println("Enter a number to check if it's prime:");

        int number = scanner.nextInt();  // Read user input
        int primeFlag = 1;  // Use an integer to indicate primality: 1 for prime, 0 for not prime

        // Handling edge case for numbers less than 2
        if (number < 2) {
            primeFlag = 0;
        }

        // Check for factors up to the square root of the number
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                primeFlag = 0;  // Factor found, number is not prime
                break;  // Exit the loop early
            }
        }

        if (primeFlag == 1) {
            System.out.println(number + " is a prime number.");
        } else {
            System.out.println(number + " is not a prime number.");
        }

        scanner.close();  // Close the scanner
    }
}