#include "My_units.hpp"

My_units::My_units() {
    
}

int My_units::getU_swordsmen() {
    return u_swordsmen;
}
int My_units::getU_archers(){
    return u_archers;
}
    
int My_units::getU_spearmen(){
    return u_spearmen;    

}

int My_units::getU_cannon(){
    return u_cannon;    

}



// Define other member functions of My_units if needed


Mayura_unit::Mayura_unit(): My_units(){
      u_swordsmen = 1500;
      u_spearmen = 680; 
}

Owumu_unit::Owumu_unit(): My_units(){
    u_cannon = 20;
    u_archers = 250;
}

Darmun_unit::Darmun_unit(): My_units(){
    u_swordsmen = 1976;
    u_spearmen = 270;

}

Madrun_unit::Madrun_unit(): My_units(){
    u_cannon = 10;
    u_archers = 239;

}

Salmandra_unit::Salmandra_unit(): My_units(){
    u_archers = 300;
    u_spearmen = 200;
    u_swordsmen = 420;
    u_cannon = 10; 

}
