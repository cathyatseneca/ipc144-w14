int isLeapYear(int year){
  int rc =0;
  if( ((year %4==0) && (year%100!=0))|| (year%400==0)){
     rc=1;
  }
  return rc;
}
