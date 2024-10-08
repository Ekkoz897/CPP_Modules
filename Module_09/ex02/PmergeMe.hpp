#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <ostream>
#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
#include <bits/stdc++.h>
#include <sys/time.h>
#include <string>

class PmergeMe
{
    private:
        std::vector<int>    vec;
        std::deque<int>     dq;
        size_t              N;
    public:
        // Canonical Form
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe&src);
        PmergeMe&   operator=(const PmergeMe& src);

        PmergeMe(char **argv, std::string type);
    
		void    FordJohnson_vec();
        void    FordJohnson_dq();

		void    sortPair();
		void	sortPairs_recursive(size_t size);
        void                sortPair_dq();
        void                sortPairs_recursive_dq(size_t size);

        // getters
        std::vector<int>    getV();
        std::deque<int>     getD();
        size_t              getN();

		//aux's
		static size_t       get_jacobsthal(size_t i, size_t *jacob_order);
        std::string         ft_trim(std::string str);

		// TEMPLATE FUNCTIONS

		template <typename T>
		static size_t insertion_index(T ct, int target)
		{
			int high = ct.size() - 1;
			int low = 0;
			while (low <= high)
			{
				size_t mid = (high + low) / 2;
				if (ct[mid] == target)
					return (mid);
				else if (ct[mid] > target)
					high = mid - 1;
				else
					low = mid + 1;
			}
			return (low);
		}

		// inserts the pend vector in the main chain
		// aux for next jc number, f tracks nbr of elements inserted
		template <typename T>
		T	insert_b(T &a, T &b)
		{
			size_t aux = 1;
            size_t f = 0;
            size_t jacob_order = 1;

			int index_b;
            while (f < b.size())
            {
                // uses the jacobshtal number to get the index of the
                // next element of b to insert in a
                aux = get_jacobsthal(aux, &jacob_order);
                while (aux > b.size())
                    aux--;
				
				// -1 because arrays start from [0] but JC starts from [1]
                index_b = aux - 1;

                // binary search and insertion of b in a
                size_t index = insertion_index(a, b[index_b]);
                a.insert(a.begin() + index, b[index_b]);

                f++;
            }
            return (a);
		}

		// Splits v into 2 sub vectors
		// a main vector: high values of each pair
        // b pend vector: low values of each pair
        template <typename T>
        std::pair<T,T > get_a_b(T &v)
		{
			T	a;
			T	b;
			typename T::iterator it = v.begin();
			while (it + 1 != v.end() && it != v.end())
			{
				b.push_back(*it);
                a.push_back(*(it + 1));
                std::advance(it, 2);
			}
			if (it != v.end())
                b.push_back(*it);
            return (std::make_pair(a, b));
		}


		template <typename T>
        static void print(T ct)
        {
            size_t h = 0;
            size_t i = 0;
            while (h < ct.size() && i < 4)
            {
                std::cout << ct[h] << " ";
                h++;
                i++;
            }
            if (h != ct.size())
                std::cout << "[...]";
            std::cout << "\n";
        }
};

#endif