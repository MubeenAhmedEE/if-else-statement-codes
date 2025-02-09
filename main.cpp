#include <iostream>
#include <iomanip>
#include <string>

int main(){
    double first ;
    double second ;
    std::cout << "what is your first number : " ;
    std::cin >> first;
    std::cout << "what is your second number : ";
    std::cin >> second;
    if(first<second){
        std::cout << first << "is less then " << second << std::endl;
    }
    else if(first>second){
        std::cout << first << "is greather then" << second << std::endl;
    }
    else if(first==second){
        std::cout << first << "is equal to" << second << std::endl;
    }
    else if(first!=second){
        std::cout << first << "is not equal to" << second << std::endl;
    }
    else if(first <= second){
        std::cout << first << "is less and equal to" << second << std::endl;
     }else{
        std::cout << first << "is greater and equal to" << second << std::endl;
     }
     
     using namespace std;
     string password= "secret123";
     string pass;

     std::cout << "write your password : ";
     std::cin >> pass;

     if(password==pass){
        std::cout << "your password is correct you can access this system now " << std::endl;
     } else {
        std::cout << "you have entered incorrect password" << std::endl;
        std::cout << "you have entered : " << pass << std::endl;

     }
return 0;

} 

#include <iostream>
#include <string>
using namespace std;

int main(){
    string storedname = "Mubeen Ahmed";
    string storedpass = "mubeen123";
    string name;
    string pass;

    std::cout << "what is your user name : " ;
    getline(cin,name);
    std::cout << "what is your password : ";
    std::cin >> pass;

    if(storedname==name && storedpass==pass){
        cout << "welcome to M&M" << endl;
    } else if(storedname!=name){
        std::cout << "you have 2 tries left please try again"<<std::endl;
        std::cout << "what is your user name : " ;
        getline(cin,name);
        std::cout << "what is your password : ";
        std::cin >> pass;
    } else if(storedpass!=pass){
        std::cout << "you have 1 trie left please try again"<<std::endl;
        std::cout << "what is your user name : " ;
        getline(cin,name);
        std::cout << "what is your password : ";
        std::cin >> pass;
    } else if(storedname!=name && storedpass!=pass){
        std::cout << "you have 0 trie left you cant access"<<std::endl;
    }

return 0;

}