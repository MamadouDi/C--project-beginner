#ifndef MY_UNITS_HPP
#define MY_UNITS_HPP

class My_units {
public:
    int u_swordsmen;
    int u_archers;
    int u_spearmen;
    int u_cannon;
    
    void setU_archers();
    int getU_archers();
    void setU_cannon();
    int getU_cannon();
    void setU_spearmen();
    int getU_spearmen();
    void setU_swordsmen();
    int getU_swordsmen();
    
    My_units();
};

class Mayura_unit : public My_units {
public:
    Mayura_unit();
};

class Owumu_unit : public My_units {
public:
    Owumu_unit();
};

class Darmun_unit:public My_units{
    public:
Darmun_unit();
    };

class Madrun_unit:public My_units{
    public:
Madrun_unit();
    };

class Salmandra_unit:public My_units{
    public:
Salmandra_unit();
    };



#endif // MY_UNITS_HPP
