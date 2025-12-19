#include <iostream>
#include <thread>
#include <vector>

void hello(){
    std::cout<<"Hello from thread"<<'\n';
    std::cout<<std::this_thread::get_id()<<'\n';
}
int main(){
    std::thread t(hello);
    t.join();
    std::cout<<"Hello from main"<<'\n';
    return 0;
}