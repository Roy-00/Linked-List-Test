#ifndef LIST_H
#define LIST_H

template<class Type>
class List{
    private:
        typedef struct node{
            Type data;
            node* next;
        }* nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;

    public:
        List();
        ~List();

        void addNode(Type addData);
        void deleteNode(Type deleteData);
        void printList();
};

#endif // LIST_H
