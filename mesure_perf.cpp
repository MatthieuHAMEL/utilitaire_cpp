// SOURCE : https://stackoverflow.com/questions/22387586/measuring-execution-time-of-a-function-in-c

#include <chrono>

#include <iostream>
#include <thread> // Uniquement là pour l'exemple
    
void long_operation()
{
    // Simule une longue opération
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(150ms);
}

int main()
{
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    auto t1 = high_resolution_clock::now(); // DEBUT
    long_operation();
    auto t2 = high_resolution_clock::now(); // FIN

    /* Nombre de millisecondes (entier). */
    auto ms_int = duration_cast<milliseconds>(t2 - t1);

    /* Nombre de millisecondes (double). */
    duration<double, std::milli> ms_double = t2 - t1;

    std::cout << ms_int.count() << "ms\n";
    std::cout << ms_double.count() << "ms\n";
    return 0;
}
