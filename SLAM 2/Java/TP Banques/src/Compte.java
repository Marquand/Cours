
public class Compte {

	// Attributs
	
		private int num;
		
		private double solde;
		
		//attribut association
		private Client titulaire;
		
		
	//Constructeurs
	public Compte(int num, double solde, Client titulaire) {
		super();
		this.num = num;
		this.solde = solde;
		this.titulaire = titulaire;
	}

	public Compte(int num, Client titulaire) {
		super();
		this.num = num;
		this.titulaire = titulaire;
		this.solde = 0;
	}

	public int getNum() {
			return num;
		}

	public void setNum(int num) {
		if (num > 0)
			{
				this.num = num;
			}
			else
				System.out.println("Numéro incorrect");
		}

	public void crediter (double somme){
		if (somme <=0){
			System.out.println("Valeur incorrect");
		}
			else
		setSolde(getSolde() + somme);
		
	}
	
	public void debiter (double somme){
		if (solde < somme){
			System.out.println("Valeur incorrect");
		}
			else
		setSolde(getSolde() - somme);
		
	}
	
	public String infos (){
		
		String res;
	res  = "Numero :" + getNum() + "\n";
	res += "Titulaire :" + this.titulaire.getNom() + "\n";
	res += "Solde :" + getSolde() + "\n";
	
	return res;
				
	}


	public Client getTitulaire() {
		return titulaire;
	}

	public void setTitulaire(Client titulaire) {
		this.titulaire = titulaire;
	}

	public double getSolde() {
		return solde;
	}

	public void setSolde(double solde) {
		this.solde = solde;
	}
		
}
