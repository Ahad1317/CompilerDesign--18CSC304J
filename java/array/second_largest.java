import java.util.Scanner;

public class SecondSmallestFinder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter the number of elements in the array:");
        int n = scanner.nextInt();  // Number of elements in the array
        int[] array = new int[n];
        
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();  // Read each element into the array
        }
        
        if (n < 2) {
            System.out.println("Array must contain at least two elements.");
        } else {
            int first = array[0];
            int second = array[1];
            
            for (int i = 1; i < n; i++) {
                if (array[i] > first) {
                    second = first;
                    first = array[i];
                } else if (array[i] != first && array[i] > second) {
                    second = array[i];
                }
            }
            
            if (first==second) {
                System.out.println("There is no second smallest number because all elements are the same.");
            } else {
                System.out.println("The second smallest number is: " + second);
            }
        }
        
        scanner.close();
    }
}
