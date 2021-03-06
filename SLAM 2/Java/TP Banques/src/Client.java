import java.util.Vector;


public class Client {
	
	//attribut
	private int num;
	private String nom;
	private String prenom;
	private String adresse;
	
	//Attribut association
	
	//Client => Compte
	private Vector<Compte> mesComptes = new Vector<Compte>();
	
	//Constructeur
	public Client(int num, String nom, String prenom, String adresse) {
		this.num = num;
		this.nom = nom;
		this.prenom = prenom;
		this.adresse = adresse;
	}

	public String getNom() {
		return nom;
	}

	public void setNom(String nom) {
		this.nom = nom;
	}

	public String getPrenom() {
		return prenom;
	}

	public void setPrenom(String prenom) {
		this.prenom = prenom;
	}

	public String getAdresse() {
		return adresse;
	}

	public void setAdresse(String adresse) {
		this.adresse = adresse;
	}

	public int getNum() {
		return num;
	}
	
	public void ajouterCompte(Compte unCompte){
		this.mesComptes.add(unCompte);
		unCompte.setTitulaire(this);
	}
	
	
	

}
