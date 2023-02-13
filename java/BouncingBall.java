import java.awt.*;
import java.applet.*;
public class BouncingBall extends Applet implements Runnable
{
	int x=150,y=50,r=20;
	int dx=15,dy=7;
	Thread t;
	boolean stopFlag;
	public void start()
	{
	t=new Thread(this);
	stopFlag=false;
	t.start();
	}
	public void paint(Graphics g)
	{
	g.setColor(Color.red);
	g.fillOval(x-r,y-r,r*2,r*2);
	}
	public void run()
	{
	while(true)
	{
	if((x+r+dx>bounds().width))dx=-dx;
	if((y+r+dy>bounds().height))dy=-dy;
	x+=dx;
	y+=dy;
	try
	{
		Thread.sleep(100);
	}
		catch(Exception e)
		{
			System.out.println(e);
		}
	repaint();
	}
	}
	public void stop()
	{
	stopFlag=true;
	t=null;
	}
}