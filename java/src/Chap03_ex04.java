public class Chap03_ex04 {
    public static void main(String[] args) {
        // [[00,01,02,03],
        // [10,11,12],
        // [20,21,22,23],
        // [30,31,32]]

        int[][] intArray;         //[]
        intArray = new int[4][];  // [[], [], [], []]
        // intArray[0] = new int[4]; // [[,,,], [], [], []]
        // intArray[1] = new int[3]; // [[,,,], [,,], [], []]
        // intArray[2] = new int[4]; // [[,,,], [,,], [,,,], []]
        // intArray[3] = new int[3]; // [[,,,], [,,], [,,,], [,,]]

        int[] sizeArray = {4, 3, 4, 3};
        for (int i = 0; i < sizeArray.length; i++) {
            intArray[i] = new int[sizeArray[i]];
        }

        intArray[1][0] = 10;      // [[,,,], [10,,], [,,,], [,,]]
        intArray[2][1] = 33;     // [[,,,], [10,,], [,33,,], [,,]]
    }
}
