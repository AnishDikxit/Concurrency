#include <iostream>
#include <thread>
#include <vector>

void hello(int x){
    std::cout<<"Hello from thread: "<< x << '\n';
    std::cout<<std::this_thread::get_id()<<'\n';
}
int main(){
    std::vector<std::thread> threads;
    for(int i = 0; i<10; i++){
        threads.push_back(std::thread(hello, i));
        threads[i].join();
    }
    std::cout<<"Hello from main"<<'\n';
    return 0;
}