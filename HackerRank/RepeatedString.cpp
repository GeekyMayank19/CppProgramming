//problem url =https://www.hackerrank.com/challenges/repeated-string/problem

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
long l=s.length();
long div=n/l;
long rem=n%l;
long remaining=n-rem;
long rs=n-(l*div);
char s_arr[l+1];
strcpy(s_arr,s.c_str());
int as=0,ass=0;
for(int i=0;i<l;i++){
    if(s_arr[i]=='a') as++;

}
for(int i=0;i<rs;i++){
    if(s_arr[i]=='a') ass++;
}

long a=(div*as)+ass;

return a;
}
