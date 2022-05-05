/** HappyChrono, le chrono qui donne le smile
 * Author : Matthieu HAMEL
 * https://github.com/MatthieuHAMEL
 * 05/2021 */


#ifndef HAPPYCHRONO
#define HAPPYCHRONO


#include <chrono>
#include <iostream>
#include <vector>

class HappyChrono
{
	public:
	/** Constructeur de HappyChrono (initialise timestamps au vecteur vide */
	HappyChrono() = default;
	
	/** Poser un marqueur temporel */
	void mark(const std::string & marker_name);
	
	/** Opérateur d'affichage du chrono */
	friend std::ostream& operator<<(std::ostream& os, const HappyChrono & hc);
	
	
	private:
	/** Le vecteur qui stocke les timestamps des marqueurs */
	std::vector<std::pair<std::string, std::chrono::high_resolution_clock::time_point>> timestamps;

};


#endif
