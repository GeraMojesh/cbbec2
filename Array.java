1) Write a Java program to declare, initialize and accessing the elements of Single dimensional Arrays, Multidimensional Arrays.

  public class Array {
    public static void main(String[] args) {
        
        int[] singleArray = {10, 20, 30, 40, 50};

        System.out.println("Single Dimensional Array Elements:");
        for (int i = 0; i < singleArray.length; i++) {
            System.out.println("Element at index " + i + ": " + singleArray[i]);
        }

        int[][] multiArray = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        System.out.println("\nMulti Dimensional Array Elements:");
        for (int i = 0; i < multiArray.length; i++) {
            for (int j = 0; j < multiArray[i].length; j++) {
                System.out.println("Element at [" + i + "][" + j + "]: " + multiArray[i][j]);
            }
        }
    }
}
