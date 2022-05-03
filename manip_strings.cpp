bool appartient(const string & motif, const string & chaine)
{
	return (chaine.find(motif) != string::npos);
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


string lowercase(const string & s) /// paramètre IN
{
	// On copie
	string s2 = s;
	
	transform(s2.begin(), s2.end(), s2.begin(),
    [](unsigned char c){ return tolower(c); });
    
	return s2;
}

vector<string> lowercase(const vector<string> & v) /// paramètre IN
{
	vector<string> resultat;
	
	for (unsigned int i = 0 ; i < size(v) ; i++)	
		resultat.push_back(lowercase(v[i]));

	return resultat;
}


vector<string> my_split(string s, string delimiter)
{
	vector<string> t;
	size_t pos = 0;
	string token;
	while ((pos = s.find(delimiter)) != string::npos) 
	{
		token = s.substr(0, pos);
		//std::cout << token << std::endl;
		t.push_back(token.substr(0, token.length()));
		s.erase(0, pos + delimiter.length());
	}
	
	t.push_back(s);
	//std::cout << s << std::endl;
	//afficher_vector_string(t);
	return(t);
}
