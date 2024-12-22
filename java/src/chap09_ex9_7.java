import java.awt.*;
import javax.swing.*;

public class chap09_ex9_7 extends JFrame {
  public chap09_ex9_7() {
    super("JFrame 연습");
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    Container c = getContentPane();
    c.setLayout(new BorderLayout());

    c.add(new NorthPanel(), BorderLayout.NORTH);
    c.add(new CenterPanel(), BorderLayout.CENTER);

    setSize(300,300);
    setVisible(true);

  }
  
  class NorthPanel extends JPanel {
    public NorthPanel() {
      setBackground(Color.LIGHT_GRAY);
      setLayout(new FlowLayout());
      add(new JButton("Open"));
      add(new JButton("Read"));
      add(new JButton("Close"));
    }
  }

  class CenterPanel extends JPanel {
    private JLabel [] label = {new JLabel("Hello"), new JLabel("Java"), new JLabel("Love")};
    public CenterPanel() {
      setLayout(null);
      for(int i =0;i<label.length;i++) {
        int x=(int)(Math.random()*200);
        int y=(int)(Math.random()*200);
        label[i].setLocation(x,y);
        label[i].setSize(100,20);
        add(label[i]);
      }


    }
  }
  public static void main(String[] args) {
    new chap09_ex9_7();
  }
}
