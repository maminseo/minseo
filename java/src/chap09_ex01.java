import javax.swing.*;
import java.awt.*;

public class chap09_ex01 extends JFrame {
    chap09_ex01() {
        setTitle("첫번째 GUI 프로그램");
        setSize(300,300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);  //4개 무조건 시작할때 작성

        Container contentpane=getContentPane();
        contentpane.setLayout(new FlowLayout());
        contentpane.setBackground(Color.ORANGE);
        contentpane.add(new Button("OK"));
        contentpane.add(new Button("Cancel"));
        contentpane.add(new Button("Ignore"));


        
    }

    public static void main(String[] args) {
       new chap09_ex01();
    }
    
}
