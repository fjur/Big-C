//
//  main.cpp
//  Classes
//
//  Created by Filip Juristovski on 11/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include "address.hpp"
#include "account.hpp"
#include "bank.hpp"
#include "sodacan.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
 
#if 0
    sodacan cokacola (3,5);
    cokacola.get_volume();
    cokacola.get_surface_area();
#endif
    
#if 0
    Bank td(2000, "s", 300, "c" );
    td.print_balance();
    
    td.deposit(300, "c");
    td.print_balance();
    
    td.withdraw(500, "c");
    td.print_balance();
    
    td.transfer(1500, "s");
    td.print_balance();
    
    
#endif
    
    
#if 0
    Address Canada(7947, "woodhurst drive", "Burnaby", "BC", 300);
    Canada.print();
    Address USA(8493, "BILL BILL BILL", "HI", "HELLO", 10);
    Canada.comes_before(USA);
    
#endif

#if 0
   
    Account td(5000);
  //  Account rbc = new Account(2000); //doesn't work
    td.check_balance();
    td.withdraw_money(1000);
    td.check_balance();
    td.add_money(2000);
    td.check_balance();
    td.withdraw_money(10000);
    td.check_balance();
    
    td.interest();
    
    
#endif
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
