#include <iostream>
#include <thread>

#include "HappyChrono.hpp"

void long_operation_150ms()
{
    // Simule une longue opération
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(150ms);
}

void long_operation_250ms()
{
    // Simule une longue opération
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(250ms);
}

void long_operation_500ms()
{
    // Simule une longue opération
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(500ms);
}

int main(void)
{
	HappyChrono hc;
	
	long_operation_150ms();
	
	hc.mark("Premier marqueur");
	
	long_operation_500ms();
	
	hc.mark("Second marqueur");
	
	long_operation_250ms();
	long_operation_150ms();
	
	hc.mark("Dernier marqueur");
	
	std::cout << hc << std::endl;
}
