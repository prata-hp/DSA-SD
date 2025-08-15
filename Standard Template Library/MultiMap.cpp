// This map allows a user to store multiple duplicate keys and due to which it does not allow square notations []
// insert, erase

#include <iostream>
#include <map>
using namespace std;
int main(){
    multimap<string,int> mmp;
    mmp.emplace("Hanumant",20);
    mmp.emplace("Hanumant",21);
    mmp.emplace("Hanumant",21);
    mmp.emplace("Hanumant",222);
    
    // Below will erase every hanumant out there
   //mmp.erase("Hanumant");

   //or use iterator to delete a single tv

   mmp.erase(mmp.find("Hanumant"));

    for(auto p : mmp){
        std::cout<<p.first<<"ka age "<<p.second<<endl;
    }
    return 0;
}

