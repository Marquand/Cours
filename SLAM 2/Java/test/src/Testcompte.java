
public class Testcompte {

	public static void main(String[] args) {
		
		// Instanciation d'un compte		
		
		Compte c1 = null; //int i;		

		System.out.println(c1.infos());
		c1.crediter(-500);
		System.out.println(c1.infos());
		c1.debiter(2000);
		System.out.println(c1.infos());
		
		
	}
	
}
