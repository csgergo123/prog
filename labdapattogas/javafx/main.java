package bouncing_ball;
import javax.swing.JFrame;

public class Main {

	public static void main(String[] args) {

		JFrame labdaFrame = new JFrame();
		
		Ball labda = new Ball();
		
		labdaFrame.setBounds(10, 10, 720, 640);
		labdaFrame.setTitle("Pattogó labda");
		labdaFrame.setResizable(true);
		labdaFrame.setVisible(true);
		labdaFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		labdaFrame.add(labda);
	}

}
