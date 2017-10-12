#include "List.h"
#include <iostream>
using namespace std;

template<class Type>
List<Type>::List(){
    head = nullptr;
    curr = nullptr;
    temp = nullptr;
}
template<class Type>
List<Type>::~List(){
    delete curr;
    delete temp;
}
//*****************************************************************************************************
template<class Type>
void List<Type>::addNode(Type addData){
    nodePtr n = new node;
    n->next = nullptr;       //The newly created node's next should point to null in case it is the last one we create
    n->data = addData;       //Does da ting
    cout << addData << " successfully added to list." << endl;

    if(head != nullptr){
        curr = head;
        while(curr->next != nullptr)//Advance current pointer from first node to last node
            curr = curr->next;  //Advance current pointer
        curr->next = n;  //Connect last node to new node that was created
    }
    else            //If we have no list created
        head = n;   //we make head the first node if n is the first node created
}
//*****************************************************************************************************
template<class Type>
void List<Type>::deleteNode(Type deleteData){
    nodePtr delPtr = nullptr;
    temp = head;  //temp will trail the current pointer by 1
    curr = head;

    while(curr != nullptr && curr->data != deleteData){ //loop as long as we are not at end of list and current node data is not target
        temp = curr;
        curr = curr->next;
    }
    /*if(curr->data == deleteData && curr == head){
        curr = curr->next;
        head = curr;
        delete delPtr;
    }Next task: Figure out how to remove first node without breaking list*/
    if(curr == nullptr){
        cout << deleteData << " was not located. Item not on list." << endl;
        delete delPtr;
    }
    else{
        delPtr = curr;
        curr = curr->next; //Patching up
        temp->next = curr; // the list
        delete delPtr;
        cout << deleteData << " has been terminated." << endl;
    }
}
//*****************************************************************************************************
template<class Type>
void List<Type>::printList(){
    cout << endl << "Current Linked List" << endl;
    curr = head;
    while(curr != nullptr){
        cout << curr->data << endl;
        curr = curr->next;
    }
}
