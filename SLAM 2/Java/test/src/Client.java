import java.util.Vector;


public class Client {
//Attributs 
	private int num;
	private String nom;	
	private String prenom;
	private String adresse;
	//Attribut association
	private Vector<Compte> mesComptes = new Vector<Compte>();

	//constructeuirs

	public Client(int num, String nom, String prenom, String adresse) {
		super();
		this.num = num;
		this.nom = nom;
		this.prenom = prenom;
		this.adresse = adresse;
	}
	public int getNum() {
		return num;
	}
	public void setNum(int num) {
		this.num = num;
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
	public Vector<Compte> getMesComptes() {
		return mesComptes;
	}
	public void setMesComptes(Vector<Compte> mesComptes) {
		this.mesComptes = mesComptes;
	}
	
	
	public void ajouterCompte(){
		
	}
	
}
