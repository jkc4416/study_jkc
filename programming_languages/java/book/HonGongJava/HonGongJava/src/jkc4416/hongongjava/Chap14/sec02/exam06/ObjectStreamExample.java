package jkc4416.hongongjava.Chap14.sec02.exam06;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.text.SimpleDateFormat;
import java.util.*;

public class ObjectStreamExample {
    public static void main(String[] args) throws Exception {
        writeList();
        List<Board> list = readList();

        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");

        for(Board board : list) {
            System.out.println(
                    board.getBno() + "\t" + board.getTitle() + "\t" + board.getContent() + "\t" +
                            board.getWriter() + "\t" + sdf.format(board.getDate())
            );
        }
    }

    public static void writeList() throws Exception {
        List<Board> list = new ArrayList<Board>();  // Create list

        /*
        List에 Board 객체 저장
         */
        list.add(new Board(1, "Title1", "Content1", "Writer1", new Date()));
        list.add(new Board(2, "Title2", "Content2", "Writer2", new Date()));
        list.add(new Board(3, "Title3", "Content3", "Writer3", new Date()));

        FileOutputStream fos = new FileOutputStream("board.db");
        ObjectOutputStream oos = new ObjectOutputStream(fos);
        oos.writeObject(list);
        oos.flush();
        oos.close();
    }

    public static List<Board> readList() throws Exception {
        FileInputStream fis = new FileInputStream("board.db");
        ObjectInputStream ois = new ObjectInputStream(fis);
        List<Board> list = (List<Board>) ois.readObject();

        return list;
    }
}
