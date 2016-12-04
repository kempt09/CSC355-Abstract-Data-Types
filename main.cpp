#include <iostream>
#include <string>
#include "linkedlist/linkedList.h"
#include "linkedqueue/LinkedQueue.h"
#include "linkedstack/LinkedStack.h"
#include "queue/queue.h"
#include "stack/Stack.h"
#include "templates/list/TemplateList.h"
#include "templates/queue/TemplateQueue.h"
#include "templates/stack/TemplateStack.h"


using namespace std;


// Week Two

int main(){

}



// Week One

//int main() {
//    LinkedList list;
//    int count = 10;
//
//    for(int i = 0; i < count; i++){
//        list.insert(i + 1, i);
//    }
//
//    list.display(cout);
//    list.remove(0);
//    list.remove(list.length());
//    list.display(cout);
//    cout << list.length() << endl;
//    return 0;
//
//}


//int main() {
//    LinkedList list;
//    int n = 3960;
//    int count = 2;
//    while (count <= n && n > 1){
//        if (n % count == 0){
//            list.insert(count, list.length());
//            n = n / count;
//        } else {
//            count++;
//        }
//    }
//
//    list.display(cout);
//
//    LinkedList list_two;
//    int k = 9284;
//    int count_two = 2;
//    while (count_two <= k && k > 1){
//        if (k % count_two == 0){
//            list_two.insert(count_two, list_two.length());
//            k = k / count_two;
//        } else {
//            count_two++;
//        }
//    }
//
//    list_two.display(cout);
//
//    return 0;
//}