package org.opentutorials.javatutorials.method;

public class MethodDemo1 {

    // Define method
    public static void numbering() {
        int i = 0;
        while (i < 10) {
            System.out.println(i);
            i++;
        }
    }

    public static void main(String[] args){
        // Call method
        int j;
        for (j = 0; j < 5; j++) {
            numbering();
            System.out.println("Call numbering() method! " + j);
        }
    }
}
