
import javax.swing.*;
import java.awt.*;

public class Chap09_ex01 extends JFrame{
	Chap09_ex01()
	{		
		setTitle("Null Container Sample");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 							Container c = getContentPane();
		c.setLayout(null);

		JLabel la = new JLabel("Hello, Press Buttons!");
		la.setLocation(130, 50);
		la.setSize(200, 20);
		c.add(la);

		for(int i=1; i<=9; i++) {
			JButton b = new JButton(Integer.toString(i)); // 버튼 생성
			b.setLocation(i*15, i*15);
			b.setSize(50, 20);
			c.add(b); // 버튼을 컨텐트팬에 부착
		}
		setSize(300, 200);
		setVisible(true);
		
//		Container contentPane = getContentPane();
//		contentPane.setLayout(new BorderLayout());
//		contentPane.setBackground(Color.ORANGE);
//		contentPane.add(new Button("OK"));
//		contentPane.add(new Button("Cancel"), BorderLayout.NORTH);
//		contentPane.add(new Button("Ignore"), BorderLayout.SOUTH);	
//		contentPane.add(new Button("Ignore"));	
////		contentPane.add(new Button("Ignore"));	
//		
//		setTitle("첫번째 GUI 프로그램");
//		setSize(300, 300);
//		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);		
//		setVisible(true);
	}
	
	public static void main(String[] args) {
		Chap09_ex01 frame = new Chap09_ex01();
		
	}
}
