package jkc4416.hongongjava.Chap13.sec01.exam06;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

public class HashMapExample {
    public static void main(String[] args) {
        // Create Map collection
        Map<String, Integer> map = new HashMap<String, Integer>();

        // Save objects
        map.put("Shin", 85);
        map.put("Hong", 90);
        map.put("Dong", 80);
        map.put("Hong", 95);
        System.out.println("The number of total entry: " + map.size());

        // Find objects
        System.out.println("\tHong: " + map.get("Hong"));
        System.out.println();

        // Print each objects
        Set<String> keySet = map.keySet();  // HashMap의 keySet() 메서드를 통해 Set 데이터타입의 keySet 변수 생성
        Iterator<String> keyIterator = keySet.iterator();  // keySet 객체의 경우 Set 객체이므로 iterator() 메서드 사용 가능
        while(keyIterator.hasNext()) {
            String key = keyIterator.next();
            Integer value = map.get(key);
            System.out.println(value);
        }
        System.out.println();

        // Delete objects
        map.remove("Hong");
        System.out.println("The number of total entry: " + map.size());

        // Print each objects
        Set<Map.Entry<String, Integer>> entrySet = map.entrySet();
        Iterator<Map.Entry<String, Integer>> entryIterator = entrySet.iterator();
        while(entryIterator.hasNext()) {
            Map.Entry<String, Integer> entry = entryIterator.next();
            String key = entry.getKey();
            Integer value = entry.getValue();
            System.out.println("\t" + key + ": " + value);
        }

        System.out.println();

        // Delete total objects
        map.clear();
        System.out.println("The number of total entry: " + map.size());
    }
}
