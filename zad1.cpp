#include <iostream>

using namespace std;

class Pracownik
{
	private:
		int pesel;
	public:
		int id;
		string imie;
		string nazwisko;
		string stanowisko;
		
	void ustawPersonalia(string pImie,string pNazwisko ,int pPesel)
	{
		imie = pImie;
		nazwisko = pNazwisko;
		pesel = pPesel;
	}
	void ustawStanowisko(string *adres)
	{
		stanowisko = *adres;
	}
	/* ****************************************************
	** Autor: Eryk Grzebieniak

	** Metoda "ustawStanowisko" ma: 
	** Jeden parametr wejœciowy: adres komórki pamiêci (linijka 85)
	** Funkcja bierze ten adres i traktuje go jako wskaŸnik
	** Funkcja przypisuje wartoœæ komórki pamiêci do zmiennej stanowisko
	** Funkcja nie zwraca ¿adnych parametrów
	************************************************** */
	void wyswietl_dane()
	{
		cout<<"Dane pracownika:"<<endl;
		cout<<imie<<" "<<nazwisko<<endl;
		cout<<"Pesel: "<<pesel<<endl;
		cout<<"Id: "<<id<<endl;
		cout<<"Stanowisko: "<<stanowisko<<endl<<endl;
	}
	void wyswietl_personalia()
	{
		cout<<"Personalia pracownika: "<<endl;
		cout<<imie<<" "<<nazwisko<<endl<<endl;
	}
	void wyswietl_stanowisko()
	{
		cout<<"Stanowisko pracownika: "<<endl;
		cout<<stanowisko<<endl<<endl;
	}
};

int p;
int i;
string im;
string n;
string s;
void podajDane()
{
	cout<<"Rejestracja pracownikow."<<endl;
	cout<<"Podaj swoje dane."<<endl;
	cout<<"Podaj imie: ";
	cin>>im;
	cout<<"Podaj nazwisko: ";
	cin>>n;
	cout<<"Podaj pesel: ";
	cin>>p;
	cout<<"Podaj stanowisko: ";
	cin>>s;
	cout<<endl<<endl;
}

int main()
{
	string *w_st = &s;
	
	Pracownik ok;
	
	podajDane();
//	cout<<w_st<<endl;
//	cout<<*w_st<<endl;
//	cout<<&w_st<<endl;
	ok.ustawPersonalia(im,n,p);
	ok.ustawStanowisko(w_st);
	ok.wyswietl_dane();
	ok.wyswietl_personalia();
	ok.wyswietl_stanowisko();
	
	return 0;
}
