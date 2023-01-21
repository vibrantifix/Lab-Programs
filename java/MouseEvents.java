
import java.awt.*;
import java.awt.event.*;
import java.applet.*;
public class MouseEvents extends Applet implements MouseListener,
   MouseMotionListener {
   String str = "";
   public void init() {
    addMouseListener(this);
    addMouseMotionListener(this);
}
public void paint (Graphics g) {
 g.drawString (str, 20, 20);
}
public void mousePressed (MouseEvent e) { 
    str = "House Batton Pressed"; 
    repaint();
}
public void mouseClicked (MouseEvent me) { 
    str = "Mouse Button Clicked"; 
    repaint();
}
public void mouseReleased (MouseEvent me) { 
    str = "House Button Released"; 
    repaint();
}
public void mouseEntered (MouseEvent me) { 
    str ="Mouse Entered"; 
    repaint();
}
public void mouseExited (MouseEvent me) {
 str = "Mouse Exited";
repaint();
}
public void mouseMoved (MouseEvent me) {
str = "Mouse Hoved";
repaint();
}
public void mouseDropped (MouseEvent me) { 
    str = "House Dropped";
    repaint();
}
public void mouseDragged (MouseEvent me) { 
    str="Mouse Dragged";
    repaint();
}
}
