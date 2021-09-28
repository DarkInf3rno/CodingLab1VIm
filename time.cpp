//time.cpp to implement your class
#include "time.hpp"
#include <iostream>
    
   
          void TimeRange::setTimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {
              
             // int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute

              if (isValid(inBeginHour, inBeginMinute, inEndHour, inEndMinute)) {
                
              beginHour = inBeginHour; 
              beginMinute = inBeginMinute;

              endHour = inEndHour; 
              endMinute = inEndMinute;

              }  
          }

          TimeRange::TimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {

              beginHour = inBeginHour;
              beginMinute = inBeginMinute;
              endHour = inEndHour; 
              endMinute = inEndMinute; 

              cout << "lets be a potato";

          }

          void TimeRange::getTimeRange() {
            
              getBeginMin();
              getBeginHour();
              getEndHour();
              getEndMin(); 
              
          }

          int TimeRange::getBeginMin() {
      
              return this -> beginMinute; 

          }
          
          int TimeRange::getBeginHour() {

              return this -> beginHour; 
           
          }

          int TimeRange::getEndMin() {

              return this -> endMinute; 

          }
                
          int TimeRange::getEndHour() {

              return this -> endHour; 

          }

          bool TimeRange::isValid(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {

            //Each variable must be less than or equal to 60 and be greater than or equal to 0. Must be multiples of 30, ie 0.6*50. 
            //Conditions. Modulus of (inBeginTime/0.6)%50 must be 0. 

              if ((inBeginMinute == 0) || (inBeginMinute==30) && (inEndMinute ==0) || (inEndMinute==30)) {
              
              return true; 
                
              } else {return false;}

          }
