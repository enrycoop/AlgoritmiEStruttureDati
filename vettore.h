/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright (C) 2022  <copyright holder> <email>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef VETTORE_H
#define VETTORE_H
#include "collezione.h"

/**
 * @todo write docs
 */
template <typename Item>
class Vettore :  Collezione
{
public:
    /**
     * Default constructor
     */
    Vettore();
    
    bool isEmpty(){ }
    
    Pos head() { return succ; }
    
    Pos tail() { return pred; }
    
    Pos next(Pos p) { return p->succ; }
    
    Pos prev(Pos p) { return p->pred; }
    
    bool finished(Pos p) { return p==this; }
    
    Item read(Pos p){ return p->value; }
    
    void write(Pos p, Item v) { p->value = v; }
    
    Pos insert(Pos p, Item v) {
        bool first = isEmpty();
        Pos t = new Lista;
        t->value = v;
        t->succ = p->succ;
        t->succ->pred = t;
        t->pred = p;
        p->succ = t;
        return t;
    }
    
    Pos remove(Pos p) {
    
        p->pred->succ = p->succ;
        p->succ->pred = p->pred;
        Pos t = p->succ;
        delete p;
        return t;
    }
    
    void printStd(){
        if(isEmpty()){
            std::cout << "[ ]" << std::endl;
        }
        
        std::cout << "[ ";
        Pos t = head();
        while(!finished(t)){
            std::cout << t->value << " ";
            t = next(t);
        }
        std::cout << "]" << std::endl;
    }
private:
    Item items[10];
    int DEFAULT_DIM = 10;
    int DIM = 10;
};

#endif // VETTORE_H
