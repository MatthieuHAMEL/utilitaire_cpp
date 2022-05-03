int choixIntRange(int debut, int fin)
{
	int choix = -1;
	bool trouve = false;
	while (!trouve) 
	{
		cin >> choix;
		cout << endl;
		if (choix >= debut && choix <= fin) 
		{ 
				trouve = true; // C'est bon
				break;
		}
		
		cout << "Quel choix ? (Entrez un nombre) ";
		cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	return choix;
}


/* Demande à l'utilisateur d'appuyer sur entrer pour continuer */
void ok()
{
	cout << "OK ? (Frappez la touche Entrer pour continuer)";
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout << endl;
}


string demander_parmi(const vector<string> & v)
{
	string choix;
	bool seconde_tentative = false;
	
	while (true) 
	{
		if (seconde_tentative)
			cout << "Entrée invalide, recommencez ci-dessous" << endl;
		
		// Entrée d'une expression via std::cin
		getline(cin, choix);
    
		for (auto const & elt : v) 
		{
			// On compare les chaînes "lowercasées" (-> insensibilité à la casse)
			if (lowercase(elt) == lowercase(choix)) 
				return elt;
		}
		// Si pas trouvé : on recommence.
		seconde_tentative = true;
	}
}


