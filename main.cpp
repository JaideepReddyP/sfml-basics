#include "window.cpp"
#include <thread>


int main()
{
	std::thread t1(window_func);
	t1.join();
}