#include <iostream>

using namespace std;

// Task 1

template <class T>
class Pair1 
{
private:
	T m_first;
	T m_second;
public:
	Pair1 (T first, T second) : m_first(first), m_second(second) { }
	T first() const { return m_first; }
	T second() const { return m_second; }
};

// Task 2

template <class T1, class T2>
class Pair
{
private:
	T1 m_first;
	T2 m_second;
public:
	Pair(T1 first, T2 second) : m_first(first), m_second(second) { }
	T1 first() const { return m_first; }
	T2 second() const { return m_second; }
};

// Task 3

template<class T>
class StringValuePair : public Pair <string, T> 
{
public:
	StringValuePair (string first, T second) : Pair<string, T>(first, second) { }
};

// Task 4
class Hand // sample of class Hand from home work 4
{
public:
	uint32_t GetValue() { };
};

class GenericPlayer : public Hand
{
private:
	std::string name;
public:
	virtual bool IsHitting() { }
	bool IsBoosted()
	{
		if (Hand::GetValue() > 21) // is it incorrect to use magical number here?
			return true;
		else
			false;
	
	}
	void Bust()
	{
		std::cout << "Player " << name << "has a bust" << std::endl;
	}

};

int main()
{
	
	// Task 1
	Pair1<int> p11(6, 9);
	cout << "Pair: " << p11.first() << ' ' << p11.second() << '\n';

	const Pair1<double> p12(3.4, 7.8);
	cout << "Pair: " << p12.first() << ' ' << p12.second() << '\n';

	// Task 2
	Pair<int, double> p21(6, 7.8);
	cout << "Pair: " << p21.first() << ' ' << p21.second() << '\n';

	const Pair<double, int> p22(3.4, 5);
	cout << "Pair: " << p22.first() << ' ' << p22.second() << '\n';

	//Task 3
	StringValuePair<int> svp("Amazing", 7);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';


	return 0;
}