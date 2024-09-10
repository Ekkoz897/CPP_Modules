#include "PmergeMe.hpp"

// convert sec to microseconds, adds the microseconds. returns value
long long getTimeMs()
{
    timeval currentTime;

    gettimeofday(&currentTime, NULL);

    return (currentTime.tv_sec * 1000000 + currentTime.tv_usec);
}


int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "No arguments provided" << std::endl;
        return (1);
    }
    try
    {
        // vector
        long long start_time = getTimeMs();
        PmergeMe obj(argv, "vector");
        obj.FordJohnson_vec();
        long long end_time = getTimeMs();

        std::cout << "Before: ";
		int i = 1;
        while (argv[i] && i <= 4)
			std::cout << argv[i++] << " ";
		if (argv[i])
			std::cout << "[...]";

        std::cout << "\nAfter:  ";
        obj.print(obj.getV());
        std::cout << "Time to process a range with " << obj.getN() << " elements with std::vector:   " << end_time - start_time << " us." << std::endl;

        // deque
        start_time = getTimeMs();
        PmergeMe obj1(argv, "deque");
        obj1.FordJohnson_dq();
        end_time = getTimeMs();
        std::cout << "Time to process a range with " << obj1.getN() << " elements with std::deque:    " << end_time - start_time << " us." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
