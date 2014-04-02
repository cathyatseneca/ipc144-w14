#include <stdio.h>
struct Fraction{
   int top_;     //top_ is a member of Fraction
   int bot_;     //bot_ is a member of Fraction
};
void multiplyFraction(const struct Fraction* first,
                              const struct Fraction* second,
                                      struct Fraction* result);

int main(void){
   struct Fraction firstValue;   //firstValue is an instance of Fraction
                                 //or in other words a variable of type
                                 //Fraction
   struct Fraction secondValue;
   struct Fraction result;
   firstValue.top_=1;
   firstValue.bot_=4;
   secondValue.top_=2;
   secondValue.bot_=3;

   multiplyFraction(&firstValue,&secondValue,&result);
   printf("result of 1/4 * 2/3 = %d/%d\n",result.top_,result.bot_);
}

/*When passing instances of structs to a function, the general practice
  is to pass their addresses instead of a copy of the entire struct.
  This is because structs are generally large and a copy would mean 
copying  all the data members over to a second location in memory which
  can have significant cost associated with it in terms of both time
  and memory*/
void multiplyFraction(const struct Fraction* first,
                          const struct Fraction* second,
                                      struct Fraction* result){
 ///ewwwwwww:   (*result).top_=(*first).top_*(*second).top_;
  result->top_=first->top_*second->top_;
  result->bot_=first->bot_*second->bot_;
}

