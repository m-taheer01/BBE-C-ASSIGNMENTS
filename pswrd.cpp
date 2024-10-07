#include <iostream>

int main(){

  int i;
   

  
   std:: string username = "muhammad";
   std:: string password =  "a";
   std:: string usernameinput,passwordinput;
 for(i==0;i<3;i++){
     
    std:: cout<<"ENTER USERNAME: ";
    std:: cin>> usernameinput;
    std:: cout<<"ENTER PASSWORD: ";
    std:: cin>>passwordinput;

     

        if(usernameinput!=username && passwordinput!=password)
        {std:: cout<< "incorrect name and pasword \n";
    }
    else if (usernameinput==username && passwordinput!=password)
    {std:: cout<<"incorrect passowrd \n";
    }
    else if(usernameinput!=username && passwordinput==password)
    {std::cout<<"incorrect username \n"; 
    }

    else{std:: cout<< "login successful"; break;}
  
      
    
      }
     
      return 0;   
}