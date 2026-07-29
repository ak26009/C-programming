int norev(int *no){
  int reverse = 0;
  int remainder;
  int og = *no;

  while(og!=0){
    remainder = og%10;
    reverse = reverse*10+remainder;
    og = og/10;
  }
  return *no = reverse;
}

int main(){
  int no = 54321;

  printf("Before Reverse %d\n",no);
  nore(&no);
  printf("After Reverse %d\n",no);
}
