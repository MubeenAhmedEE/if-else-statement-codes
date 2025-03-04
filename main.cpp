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
