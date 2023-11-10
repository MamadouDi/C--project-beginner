#include "Alliance.h"
#include <string>


string alliance::allies(){
        return "In your continent, you have five ennemies with humongous military power. However, two allies are ready to sacrify their mens to assist you:Maoroland and Gerarldberg.";
        }
string alliance::allies2(const string& Kingdom){
return "Your allies joined " + Kingdom + " under the condition that they will get 15% of the spoils of war, "
           "and since they lack gold and uranium, they wish to be provisioned from " + Kingdom + "'s resources. "
           "In exchange, " + Kingdom + " will receive some of their natural resources and full military support. ";
}