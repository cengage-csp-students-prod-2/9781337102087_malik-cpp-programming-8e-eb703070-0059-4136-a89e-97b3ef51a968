#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
 
#include "simulation.h"
#include "queueAsArray.h" 

using namespace std;

void setSimulationParameters(int& sTime, int& numOfServers,
							 int& transTime,
							 int& tBetweenCArrival);

bool isCustomerArrived(double arvTimeDiff);

void generateStatistics(serverListType& serverList, 
						waitingCustomerQueueType& CQueue, 
						int numOfCustArrived,
						int waitTimeServedCustomers);

void runSimulation();

int main()
{
    //TODO: define runSimulation function
    //      then uncomment the function call below
    //runSimulation();

    return 0;
}

void setSimulationParameters(int& sTime, int& numOfServers,
                             int& transTime,
                             int& tBetweenCArrival)
{
    cout << "Enter the simulation time: ";
    cin >> sTime;
    cout << endl;

    cout << "Enter the number of servers: ";
    cin >> numOfServers;
    cout << endl;

    cout << "Enter the transaction time: ";
    cin >> transTime;
    cout << endl;
    
    cout << "Enter the time between customer arrivals: ";
    cin >> tBetweenCArrival;
    cout << endl;
}