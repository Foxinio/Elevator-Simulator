#include <iostream>
#include <thread>
#include <chrono>

#include "src/ObjectFactory.h"

enum class SimulationType{
	StopGenerationOfCustomersAfterTimePassed,
	ForceStopSimulationAfterTimePassed
};

int main()
{
	using namespace std::chrono_literals;
	using namespace std::chrono;
	// gkt init here

	// set simulation parameters
	ObjectFactory::seed = 0x38275234;
	ObjectFactory::CabinCapacity = 10;
	ObjectFactory::maxWeight = 1600;

	ObjectFactory::maxVelocity = 5;
	ObjectFactory::maxAcceleration = 2;

	ObjectFactory::cabinUpdateFrequency = 1s;

	size_t numberOfFloor = 8;
	Units::floor startingFloor = 1;

	// first number is median, second is normal deviation
	// (in seconds)
	std::pair<int,int> customerIntervalNormalDistributionParameters = {5, 2};

	seconds simulationLength = 10s;
	SimulationType simulationType = SimulationType::StopGenerationOfCustomersAfterTimePassed;





	auto manager = ObjectFactory::GetElevatorManager(numberOfFloor,
													 customerIntervalNormalDistributionParameters,
													 startingFloor);
	manager->Start();
	// work in infinite loop until commanded to stop
	std::this_thread::sleep_for(simulationLength);


	// stop simulation
	if(simulationType == SimulationType::StopGenerationOfCustomersAfterTimePassed){
		manager->DisablePeopleGeneration();
		manager->WaitForStop();
	}
	else if(simulationType == SimulationType::ForceStopSimulationAfterTimePassed) {
		manager->Stop();
	}
}
