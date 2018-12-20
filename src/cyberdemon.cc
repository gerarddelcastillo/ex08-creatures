//
// Created by Gerard Del Castillo
//

#include <iostream>
#include <creature.h>
#include <cyberdemon.h>
#include <string>
#include <demon.h>
#include <random>
namespace edu { namespace vcccd { namespace vc { namespace csv13 {

                const std::string &CyberDemon::getSpecies() const { return species;}
                int CyberDemon::getDamage() const { return Demon::getDamage();}


            }



        }}}
