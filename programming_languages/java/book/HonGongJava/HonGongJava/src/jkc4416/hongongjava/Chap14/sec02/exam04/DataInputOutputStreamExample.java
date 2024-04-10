package jkc4416.hongongjava.Chap14.sec02.exam04;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class DataInputOutputStreamExample {
    public static void main(String[] args) throws Exception {
        /*
        바이트 기반 출력 스트림을 사용해서 값들이 저장된 바이너리 파일 생성
         */
        FileOutputStream fos = new FileOutputStream("primitive.db");  // 바이트 기반 출력 스트림 생성
        DataOutputStream dos = new DataOutputStream(fos);  // 기본 타입을 출력하기 위한 DataOutputStream 보조 스트림 연결

        dos.writeUTF("홍길동");  // 기본 타입 값 출력
        dos.writeDouble(95.5);
        dos.writeInt(1);

        dos.writeUTF("감자바");
        dos.writeDouble(90.3);
        dos.writeInt(2);

        dos.flush();  // Buffer에 남아있는 데이터 clear!
        dos.close();

        /*
        바이트 기반 입력 스트림을 사용해서 값들이 저장된 바이너리 파일을 읽어서 터미널에 출력!
         */
        FileInputStream fis = new FileInputStream("primitive.db");  // 바이트 기반 입력 스트림 생성
        DataInputStream dis = new DataInputStream(fis);  // 기본 타입 입력을 위한 DataInputStream 보조 스트림 연결

        for(int i=0; i<2; i++) {
            String name = dis.readUTF();
            double score = dis.readDouble();
            int order = dis.readInt();
            System.out.println(name + ": " + score + ": " + order);
        }

        dis.close();
    }
}
