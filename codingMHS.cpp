#include <iostream>


using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node *head;
Node *tail;

void awal(){
    head=NULL;
    tail=NULL;
}

bool isEmpty(){
    if(head == NULL) {
        return true;
    }else{
        return false;
    }
}

void tmbhDpn (int dataBaru) {
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        head->prev = NULL;
    }else{
        nodeBaru->next = head;
        head->prev = nodeBaru;
        head = nodeBaru;
    }
}

void tmbhBlkg (int dataBaru){
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

     if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        head->prev = NULL;
    }else{
        tail->next = nodeBaru;
        nodeBaru->prev = tail;
        tail = nodeBaru;
    }
}

void tampil(){
    Node *current;

    current = head;
    /*if(!isEmpty()){
        while(current != NULL) {
            ciut << "<- " << current->date << " ->";
            current = current->next;
        }
        cout << endl;
    }else{
        cout << "Belum ada data di DLL" << endl;
    }*/
    if(isEmpty()){
        cout << "belum ada data di DLL" << endl;
    }else{
            for(current = head; current != NULL; current = current->next){
            cout << "<- " << current->data << " ->";
        }
        cout << endl;
    }


}



int main()
{
    tmbhDpn(2);
    tampil();
    tmbhDpn(11);
    tampil();
    tmbhDpn(29);
    tampil();
    tmbhDpn(77);
    tampil();

    return 0;
}
