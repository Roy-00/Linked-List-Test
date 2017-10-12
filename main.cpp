//Brandon Roy
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>

#include "List.h"
#include "List.cpp"

using namespace std;

template<class Type> void add(List<Type>& chain);
template<class Type> void deleter(List<Type>& chain);

int main(){
    List<string> chain;
    add(chain);
    cout << endl;
    deleter(chain);
    chain.printList();
}
template<class Type>
void add(List<Type>& chain){
    chain.addNode("James");
    chain.addNode("popo");
    chain.addNode("snake");
    chain.addNode("dog");
    chain.addNode("fold");
    chain.addNode("da ting");
    chain.addNode("cat");
    chain.addNode("boyo");
}
template<class Type>
void deleter(List<Type>& chain){
    chain.deleteNode("fold");
    chain.deleteNode("da other ting");
}
