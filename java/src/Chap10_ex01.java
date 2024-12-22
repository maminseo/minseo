
import java.awt.*;           // GUI를 만드려면 반드시 import!
import javax.swing.*;        // GUI를 만드려면 반드시 import!
import java.awt.event.*;     // 이벤트 처리하려면 반드시 import!
import javax.swing.event.*;  // 이벤트 처리하려면 반드시 import!  
import java.util.List;
import java.util.ArrayList;

public class Chap10_ex01 extends JFrame{
	JLabel lb = new JLabel("Hello");
	JLabel[] lbKeys = new JLabel[3];
	Container c;
	
	Chap10_ex01()
	{
		// (1) 화면 구성
		setTitle("이벤트 처리 예제");
		setSize(600, 600);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		// (2) 컴포넌트 추가
		c = getContentPane();
		c.setLayout(new FlowLayout()); // 레이아웃을 제거
		JButton btn = new JButton("Action");	
		c.add(btn);
		JButton btn2 = new JButton("블루베리");
		c.add(btn2);
		
		c.add(lb);
		
		String[] lbStrings = {"KeyChar :          ", "KeyCode :          ", "KeyText :                    "};
		for(int i=0; i<lbKeys.length; i++)
		{
			lbKeys[i] = new JLabel(lbStrings[i]);
			c.add(lbKeys[i]);
		}
		c.setFocusable(true);
		c.requestFocus();
		
		// (3) 이벤트 리스너 달아주기
		btn.addActionListener(new MyActionListener());
		btn2.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				JButton btn = (JButton)e.getSource();
				if(btn.getText().equals("Action"))
				{
					btn.setText("액션");
				}
				else
				{
					btn.setText("Action");
				}
			}	
		});
		
		// 컨텐트팬에 마우스 이벤트 리스너 추가
		c.addMouseListener(new MyMouseListener());
		
		// 컨탠트팬에 키보드 이벤트 리스너 추가
		c.addKeyListener(new MyKeyListener());	
		
		setVisible(true);
		
		// 레이아웃 삭제를 위한 컴포넌트 위치 저장 및 레이아웃 삭제
		List<JComponent> c_list = new ArrayList<>();
		c_list.add(btn);
		c_list.add(btn2);
		c_list.add(lb);
		for(JLabel l : lbKeys)
			c_list.add(l);
				
		Point[] c_locs = new Point[c_list.size()];
		Dimension[] c_sizes = new Dimension[c_list.size()];
		for(int i=0; i<c_list.size(); i++)
		{			
			c_locs[i] = c_list.get(i).getLocation();
			c_sizes[i] = c_list.get(i).getSize();
		}
		
		c.setLayout(null);
		for(int i=0; i<c_list.size(); i++)
		{	
			c_list.get(i).setLocation(c_locs[i]);
			c_list.get(i).setSize(c_sizes[i]);
			
			System.out.println(c_locs[i].getLocation());
			System.out.println(c_sizes[i]);
		}		
		setVisible(true);
	}
	
	public static void main(String[] args) {
		new Chap10_ex01();
	}
	
	class MyKeyListener extends KeyAdapter{

		@Override
		public void keyTyped(KeyEvent e) {
			System.out.println("keyTyped");
		}

		@Override
		public void keyPressed(KeyEvent e) {
			int keyCode = e.getKeyCode();
			char keyChar = e.getKeyChar();
			
			lbKeys[0].setText("KeyCode : " + keyCode);
			lbKeys[1].setText("keyChar : " + keyChar);
			lbKeys[2].setText("keyText : " + KeyEvent.getKeyText(keyCode));
			
			// F1 : 초록색, % : 노란색
			// F1은 유니코드 X -> KeyCode로 검증
			// %는 유니코드 O -> keyChar로 검증
			if(keyCode == KeyEvent.VK_F1)
			{
				c.setBackground(Color.green);
			}
			else if(keyChar == '%')
			{
				c.setBackground(Color.YELLOW);
			}
			else
			{
				c.setBackground(null);
			}
			
			// 방향키를 이용한 컴포넌트 이동
			int move_step = 10;
			int[] move_arrow = {KeyEvent.VK_UP, KeyEvent.VK_DOWN, KeyEvent.VK_LEFT, KeyEvent.VK_RIGHT};
			int[] move_x = {0, 0, -move_step, move_step};
			int[] move_y = {-move_step, move_step, 0, 0};
			
			for(int i=0; i<move_arrow.length; i++)
			{
				if(keyCode == move_arrow[i])
				{
					lb.setLocation(lb.getX() + move_x[i], lb.getY() + move_y[i]);
				}
			}			
			
			System.out.println("keyPressed");
		}

		@Override
		public void keyReleased(KeyEvent e) {
			System.out.println("keyReleased");
		}		
	}
	
	class MyMouseListener extends MouseAdapter{
		@Override
		public void mousePressed(MouseEvent e) {
			int x = e.getX();
			int y = e.getY();
			
			// 레이블 lb의 위치를 옮김
			// lb를 인식할 수 없는 위치에 리스너를 정의하고 있는 문제
			
			// 선택지
			// 1. e.getSource()를 통해 컨텐트팬의 레퍼런스를 얻은 후에
			//    컨텐트팬에 추가된 컴포넌트를 뒤적거려서 lb를 찾는 방법
			// 2. lb를 인식할 수 있는 범위에서 마우스 이벤트 리스너를 정의하는 방법
			lb.setLocation(x, y);
		}	
	}
}

// 인터페이스 ActionListener를 상속받은 MyActionListener 클래스 정의
class MyActionListener implements ActionListener {
	@Override
	public void actionPerformed(ActionEvent e) {
		// getSource() 함수의 반환값은 Object형
		// => 단적으로 이야기하면, 레퍼런스가 정확히 누구인지 모름
		
		// 일단은 JButton이라고 가정
		JButton btn = (JButton)e.getSource();
		
		// 버튼의 문자열을 통해 특정
		if(btn.getText().equals("Action"))
		{
			btn.setText("액션");
		}
		// 문자열이 "Action"이 아닌 모든 버튼에 대해서...
		else
		{
			btn.setText("Action");
		}
	}	
}





















