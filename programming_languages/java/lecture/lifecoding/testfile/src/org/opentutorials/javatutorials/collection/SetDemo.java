package org.opentutorials.javatutorials.collection;

import java.util.HashSet;
import java.util.Iterator;

public class SetDemo {

    public static void main(String[] args){
        HashSet<Integer> A = new HashSet<Integer>();
        A.add(1);
        A.add(2);
        A.add(3);
        System.out.println("Check HashSet 'A'");
        Iterator hi = (Iterator) A.iterator();
        while(hi.hasNext()){
            System.out.println(hi.next());
        }
        System.out.println("\n");

        HashSet<Integer> B = new HashSet<Integer>();
        B.add(3);
        B.add(4);
        B.add(5);

        HashSet<Integer> C = new HashSet<Integer>();
        C.add(1);
        C.add(2);

        System.out.println("\n");
        System.out.println(A.containsAll(B));
        System.out.println(A.containsAll(C));

        A.addAll(B);
//        A.retainAll(B);
//        A.removeAll(B);

        System.out.println("\n");
        System.out.println("Check one more time HashSet 'A'");
        Iterator _hi = (Iterator) A.iterator();
        while(_hi.hasNext()){
            System.out.println(_hi.next());
        }

    }
}
