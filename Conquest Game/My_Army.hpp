#ifndef MY_ARMY_HPP
#define MY_ARMY_HPP

class My_Army {
public:
    My_Army(); // Constructor

    // Declare member functions
    void setSoldier(int value);
    void setCannon(int value);
    void setSpearmen(int value);
    void setArchers(int value);
    void setSwordsmen(int value);
    
    int getSoldiers();
    int getArchers();
    int getCannon();
    int getSwordsmen();
    int getSpearmen();

private:
    int soldiers, archers, spearmen, swordsmen, cannon;
};

#endif // MY_ARMY_HPP
