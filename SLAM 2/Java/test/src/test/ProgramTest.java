package test;

import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;




public class ProgramTest {

	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame("test");
		fenetre.setSize(400, 300);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		fenetre.setLayout(new FlowLayout());
		
		JLabel lbNom = new JLabel("Nom");
		fenetre.getContentPane().add(lbNom);
		
		JTextField tfNom = new JTextField(25);
		fenetre.getContentPane().add(tfNom);
		
		JButton bOK= new JButton("OK");		
		fenetre.getContentPane().add(bOK);
		
		fenetre.setVisible(true);
		
	}
}
