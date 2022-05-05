#include "HappyChrono.hpp"

using namespace std;
using namespace std::chrono;

void HappyChrono::mark(const std::string & marker_name)
{
	timestamps.push_back(pair<std::string, std::chrono::high_resolution_clock::time_point>(marker_name, high_resolution_clock::now()));
}

ostream& operator<<(ostream& os, const HappyChrono & hc)
{
    os << "Bilan chrono :\n";
    
    for (unsigned i = 0 ; i < hc.timestamps.size()-1 ; ++i)
    {
		// Différence des timestamps i et i+1
		auto duree = hc.timestamps[i+1].second - hc.timestamps[i].second;
		os << " - De " << hc.timestamps[i].first << " à " << hc.timestamps[i+1].first << " : " << duree.count() / 1000000 << " ms\n";
	}
    return os;
}
