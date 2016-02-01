#ifndef ARBREBINAIRE_H__
#define ARBREBINAIRE_H__

template <class T>
class ArbreBinaire
{	
public:
		ArbreBinaire(); 
		~ArbreBinaire(); 

		void Ajouter(const T& valeur); 
		void Enlever(const T& valeur); 

		bool Contient(const T& valeur) const; 

		int Nombre() const; 

		// trouver la gauche
		const T& Minimum() const;
		// trouver la droite
		const T& Maximum() const; 

		void AfficherCroissant() const; 
		void AfficherDecroissant() const; 

		void Vider();
private:
		
	struct Noeud
	{
		T valeur;
		Noeud* gauche;
		Noeud* droite;

		// Juste pour pouvoir placer les valeurs dans le constructeur au lieu de l'appeler
		Noeud(const T& valeur, Noeud* gauche, Noeud* droite) : valeur(valeur), gauche(gauche), droite(droite) {}
	};

	// Début de la liste
	Noeud* m_debut;

};

template <class T>
ArbreBinaire<T>::ArbreBinaire()
{
};

template <class T>
ArbreBinaire<T>::~ArbreBinaire()
{
	Vider();
};

template <class T>
void ArbreBinaire<T>::Ajouter(const T& valeur)
{
	// Element est la valeur ajoutée, m_debut est l'index du noeud (on veux la valeur précédente)
	m_debut = new Noeud(valeur, m_debut, m_debut);
};

template <class T>
void ArbreBinaire<T>::Enlever(const T& valeur)
{
};

template <class T>
bool ArbreBinaire<T>::Contient(const T& valeur) const
{
};

template <class T>
int ArbreBinaire<T>::Nombre() const
{
};

template <class T>
const T& ArbreBinaire<T>::Minimum() const
{
};

template <class T>
const T& ArbreBinaire<T>::Maximum() const
{
};

template <class T>
void ArbreBinaire<T>::AfficherCroissant() const
{
};

template <class T>
void ArbreBinaire<T>::AfficherDecroissant() const
{
};

template <class T>
void ArbreBinaire<T>::Vider()
{

};
#endif // !ARBREBINAIRE_H__

