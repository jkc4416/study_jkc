package jkc4416.hongongjava.Chap14.sec02.exam05;

import java.io.FileOutputStream;
import java.io.PrintStream;

public class PrintStreamExample {
    public static void main(String[] args) throws Exception {
        FileOutputStream fos = new FileOutputStream("printstream.txt");  // 바이트 기반 출력 스트림 생성
        PrintStream ps = new PrintStream(fos);  // PrintStream 보조 스트림 연결

        ps.println("[프린터 보조 스트림]");  // --- 아래 글 내용대로 printstream.txt 파일에 저장됨
        ps.print("마치 ");
        ps.println("프린터가 출력하는 것처럼 ");
        ps.println("데이터를 출력합니다.");

        ps.flush();
        ps.close();
    }
}
