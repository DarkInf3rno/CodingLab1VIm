//date.cpp to implement your class 

#include <iostream>
using namespace std;
#include "date.hpp"


      Date::Date(int amonth, int aday) {
        this -> month = amonth;
        this -> day = aday;
       
      }

      Date::Date() {
        month = 0;
        day = 0; 

      }

      void Date::input(){
        cout << "Enter month as a number: ";
        cin >> this -> month;
        cout << "Enter day of the month: ";
        cin >> this -> day;
       
      }
      void Date::output(){
        isValid(month, day);
        isHoliday(month,day);
        isWeekend(month, day);
          if (isWeekend(month,day) == 0 || isWeekend(month,day) == 6) {
          cout << "You have chosen a weekend, no appointments can be booked. Aborting" << endl;
          exit(1);
     }
          else {
            cout << "Valid day, pick a time slot: ";
        
    }


      }

      void Date::setDate(int amonth, int aday) {
          this -> month = amonth; 
          this -> day = aday; 
      }

      int Date::getDay() {
        return this -> day;
      }

      int Date::getMonth() {
        return this -> month; 
      }

      int Date::isValid(int month, int day){
        if ((month < 9) || (month > 12) || (day < 1 ) || (day > 31 )) {
        cout << "You can not book an appointment on this date. Aborting program. " << endl;
        exit(1);
        
      }
      }
int Date::isWeekend(int month, int day) {
    static int MNAY[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    // Magic number array for calculations for year
    const int year = 2021;
    // Year is constant since the schedule is only during 2021


    return  (year + year / 4 - year / 100 + year / 400 + MNAY[month - 1] + day) % 7;
    // The calculation done to find what day of the week it is. Returns 0 = sunday , 1 = mond....

   

}
      /*int Date::isWeekend(int month, int day) {
        static int MNAY[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        // Magic number array for calculations for year
        const int year = 2021;
        // Year is constant since the schedule is only during 2021
      
         int x = (year+year / 4 - year / 100 + year / 400 + MNAY[month - 1] + day) % 7;
          // The calculation done to find what day of the week it is. Returns 0 = sunday , 1 = mond....

          if(x==0 || x == 6){
            cout<<"You have chosen a weekend, no appointments can be booked. Aborting"<< endl;
          return 1;
                }
            else {
              cout << "Valid day, pick a time slot: " ;
                   }
        }
*/
    
      

      bool equal(Date date1, Date date2){
        return (date1.month == date2.month && date1.day == date2.day);
      }
      // Friend function, used to compare two dates with each other to check if equal, used in isHoliday.

      void Date::DateInitializer(Date sampleMonth[], int startDay, int endDay, int monthNumber) {

      //sampleMonth[endDay-startDay]; 
      for(int i=0; i <= endDay-startDay; i++) {

      sampleMonth[i].setDate(monthNumber, startDay+i);

      cout << "month: " << sampleMonth[i].getMonth() << endl << "day: " << sampleMonth[i].getDay() << endl << endl; 

      }

  }

      int Date::isHoliday(int month, int day){

      const Date Sept30 = Date(9, 30);
      const Date Oct11 = Date(10, 11);
      const Date Nov11 = Date(11, 11);

      //All our constant dates for the Holidays that we use to check
      
      //Checks using our equal friend function that was implemented earlier
        if (equal(Sept30, Date(month, day))) {
        cout << "This is a holiday, no appointments can be booked. Aborting.." << endl;
        exit(1);
        }
          else if (equal(Oct11, Date(month, day))) {
          cout << "This is a holiday, no appointments can be booked. Aborting.." << endl;
          exit(1); }
          else if (equal(Nov11, Date(month, day))) {
          cout << "This is a holiday, no appointments can be booked. Aborting.." << endl;
          exit(1); }
      
      }
      
    /*  int Date::printFreeTimeSlots(int month, int day){
          
          if(month==9){
          Date September[1];
          DateInitializer(September, 8, 30, 9);
         
          }
      */  

          /*case 10: {
          Date October[1];
          DateInitializer(October, 1, 31, 10);
          break;
          }
          }
         */
          

      
          
      
      


/*
      void input();
      void output();

      void set(int new_month, int new_day);
      // These two ints form a possible date
      // Then it is reset according to arguments

      int get_month();
      // Returns the month

      int get_day();
      // Returns the day of the month 

      void set_time(bool appointed_time[48]); 
      // Pick an appointed time
      // Reset to the arguments

      Date::Date(int amonth, int aday) {
        this -> month = amonth;
        this -> day = aday;
       
      }
*/
           
/*
Date::input() {

  cout << "Enter the month: ";
  cin >> month;
  cout << "Enter the day of month: ";
  cin >> day;
  check_date();

    

}
Date::output(){
  

}
Date::set(int new_month, int new_day ){
  month = new_month;
  day = new_day;
  check_date();
}

Date::check_date(){
  if ((month < 9) || (month > 12) || (day < 1 ) || (day > 31 ))
  {
      cout << "You can not book an appointment on this day. Aborting program. \n";
      exit(1);
  }
  if (())
}

Date::get_month(){
  if (first_letter == 'S' && second_letter == 'e' && third_letter == 'p')
  return 9;
  if (first_letter == 'O' && second_letter == 'c' && third_letter == 't')
  return 10;
  if (first_letter == 'N' && second_letter == 'o' && third_letter == 'v' )
  return 11;
  if (first_letter == 'D' && second_letter == 'e' && third_letter =='c')
  return 12;

  else 
  return 1
  
}

Date::get_day(){
  return day;
} */