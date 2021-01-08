#ifndef LAB_ANIMAL_H // header guard
#define LAB_ANIMAL_H


#include <iostream>
#include <string>
#include<map>

/** A class **/

class Tube
{

public:

 map<string, int> piccadilly{{"kings cross", 3 },{"kings cross", 1},{"russell square", 1 }, {"holborn", 1}, {"covent garden", 1 }, {"leicester square", 1 }, {"piccadilly circus", 1}, {"green park", 1}, {"hyde park corner", 1},{"knightsbridge", 1},{"gloucester", 1}, {"south kensington", 3},{"south kensington", 1}, {"gloucester road", 1}};

 map<string, int> victoria{{"kings cross", 3}, {"euston", 3}, {"oxford circus", 1}, {"green park", 1},{"victoria", 1},{"pimlico", 1}};
 
 map<string, int> bakerloo{{"paddington", 1}, {"edgware road", 1},{"marylebone", 1},{"baker street, 1"}, {"oxford circus", 3},{"piccadilly circus", 3}, {"charing cross", 1},{"embankment", 1},{"waterloo", 3},{"elephant&castle", 1}};
 
 map<string, int> central{{"liverpool street", 1}, {"bank", 1}, {"st. pauls", 1},{"chancery lane", 1},{"holborn", 1},{"tottenham court road", 1}, {"oxford circus", 1}, {"bond street", 1}, {"marble arch", 1}, {"lancaster gate", 1},{"queensway", 1}};
 
 map<string, int> jubilee{{"london bridge", 1}, {"southwark",1}, {"waterloo", 3}, {"waterloo", 1}, {"westminster", 1},{"westminster", 3}, {"green park", 1}, {"green park", 3},{"bond street", 1},{"bond street", 3},{"baker street", 1}, {"baker street", 3}};
 
 map<string, int> northern{{"euston", 1}, {"euston", 3}, {"warren street", 1}, {"warren street", 3}, {"goodge street", 1}, {"tottenham court road", 1}, {"tottenham court road",3}, {"leicester square", 1},{"leicester square", 3},{"charing cross", 1},{"charing cross", 3}, {"embankment", 1},{"embankment",3},{"waterloo",1},{"waterloo",3}};
 
 map<string, int> waterloo&city{{"bank", 1}, {"bank",3},{"waterloo",1},{"waterloo", 3}};
 
 map<string, int> metropolitan{{"aldgate", 1}, {"aldgate", 3}, {"liverpool street", 1}, {"liverpool street", 1}, {"moorgate",1},{"moorgate", 3},{"barbican",1},{"barbican", 3},{"farringdon",1},{"farringdon",3},{"euston square", 1}, {"euston square", 3},{"great portland street", 1},{"great portland street",3},{"baker street", 1}, {"baker street", 3}};
 
 map<string, int> circle {{  }}




waterloo&city.at("bank")
}