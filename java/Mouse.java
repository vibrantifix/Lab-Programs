import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class Mouse extends Applet implements MouseListener, MouseMotionListener {
	String str = "";

	public void init() {
		addMouseListener(this);
		addMouseMotionListener(this);
}
	public void print (Graphics g) {
		g.drawstring(str,20,20);
}
	public void mousePressed (MouseEvent me) {
		str = "Mouse Button Pressed";
		repaint();
}
	public void mouseClicked (MouseEvent me) {
		str = "Mouse Button Clicked";
		repaint();
}	
	public void mouseReleased (MouseEvent me) {
		str = "Mouse Button Released";
		repaint();
}	
	public void mouseEntered (MouseEvent me) {
		str = "Mouse Entered";
		repaint();
}
	public void mouseExited (MouseEvent me) {
		str = "Mouse Exited";
		repaint();
}
	public void mouseMoved (MouseEvent me) {
		str = "Mouse Moved";
		repaint();
}
	public void mouseDroped (MouseEvent me) {
		str = "Mouse Droped";
		repaint();
}
	public void mouseDraged (MouseEvent me) {
		str = "Mouse Draged";
		repaint();
}
}
