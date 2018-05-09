package bouncing_ball;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.*;
import java.util.*;
import javax.swing.Timer;

import javax.swing.JPanel;

public class Ball extends JPanel implements ActionListener{
	
	private Timer timer;
	private int delay = 8;
	private int x = 10;
	private int y = 10;
	private int x2 = x;
	private int y2 = y;
	
	public Ball() {
		timer = new Timer(delay, this);
		timer.start();
	}
	
	public void paint(Graphics g) {
		g.setColor(Color.green);
		g.fillRect(1, 1, 600, 600);
		
		g.setColor(Color.blue);
		g.fillOval(x, y, 25, 25);
		g.dispose();
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		timer.start();
		
		x += Math.pow(-1, (x2 / 580) );
        y += Math.pow(-1, (y2 /580) );
        x2++;
        y2++;
		
		repaint();
	}