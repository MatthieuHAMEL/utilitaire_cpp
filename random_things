#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <vector>
#include <algorithm>
#include <random>

template<typename Numeric, typename Generator = std::mt19937>
Numeric random(Numeric from, Numeric to)
{
    thread_local static Generator gen(std::random_device{}());

    using dist_type = typename std::conditional
    <
        std::is_integral<Numeric>::value
        , std::uniform_int_distribution<Numeric>
        , std::uniform_real_distribution<Numeric>
    >::type;

    thread_local static dist_type dist;

    return dist(gen, typename dist_type::param_type{from, to});
}

template <typename T>
std::vector<T> tirageSansRemiseVector(int nbelem, std::vector<T> & v)
{
	std::vector<T> resultat;
	for (int j = 0 ; j < nbelem ; j++) 
	{
		int i = random<int>(0, std::size(v)-1);
		resultat.push_back(v[i]);
		deleteFromIndex<T>(v, i);
	}
	return resultat;
}

template <typename T>
T tirageUniqueSansRemise(std::vector<T> & v)
{
	D ("Début du tirage");
	int i = random<int>(0, std::size(v)-1);
	T elt = v[i];
	D ("Fin du tirage ... Suppression ...");
	deleteFromIndex<T>(v, i);
	D ("Fin de la suppression");
	return elt;
}


/** Tirage avec remise de nbelem chaînes parmi le vecteur v */
template <typename T>
std::vector<T> tirage_avec_remise_vector(int nbelem, std::vector<T> v)
{
	std::vector<T> resultat;
	for (int j = 0 ; j < nbelem ; j++) 
	{
		int i = random<int>(0, std::size(v)-1);
		resultat.push_back(v[i]);
	}
	std::sort(resultat.begin(), resultat.end());
	return resultat;
}

