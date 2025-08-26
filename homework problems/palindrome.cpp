char str[100];
int length ;

void getinput(){
    cout<<"enter the string:"<<endl;
    length = 0;
    while(str[length]='\0'){
        length++
    }
}
void checkpalindrome(){
    bool palindrome = true;
    for(int i =0; i<length/2,i++){
       if (str[length]!=str[length -i-1]){
          palindrome = false;
          break;
       }
    }
}