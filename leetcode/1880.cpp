class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        char a,b,c;
        int n1=0,n2=1;
        int n3=0,n4=1;
        int n5=0,n6=1;
        int sum1=0;
        int sum2=0;
        int sum3=0;
        n1=firstWord.size();
        n3=secondWord.size();
        n5=targetWord.size();
        for(int i=0;i<firstWord.size();i++){
            a=firstWord[i];
            
            // cout<<(int)a-97<<endl;
            
            switch(n1){
                case 1: n2=1;
                    break;
                case 2: n2=10;
                    break;
                case 3: n2=100;
                    break;
                case 4: n2=1000;
                    break;
                case 5: n2=10000;
                    break;
                case 6: n2=100000;
                    break;
                case 7: n2=1000000;
                    break;
                case 8: n2=10000000;
                    break;
                default: n2=0;
            }
            // cout<<n1<<endl;
            sum1+=n2*((int)a-97);
            
            n1--;
        }
        // cout<<"first"<<sum1<<endl;
        
        for(int i=0;i<secondWord.size();i++){
            b=secondWord[i];
            
            // cout<<(int)a-97<<endl;
            
            switch(n3){
                case 1: n4=1;
                    break;
                case 2: n4=10;
                    break;
                case 3: n4=100;
                    break;
                case 4: n4=1000;
                    break;
                case 5: n4=10000;
                    break;
                case 6: n4=100000;
                    break;
                case 7: n4=1000000;
                    break;
                case 8: n4=10000000;
                    break;
                default: n4=0;
            }
            // cout<<n4<<endl;
            sum2+=n4*((int)b-97);
            
            n3--;
        }
        
        // cout<<"second"<<sum2<<endl;

        
        for(int i=0;i<targetWord.size();i++){
            c=targetWord[i];
            
            // cout<<(int)a-97<<endl;
            
            switch(n5){
                case 1: n6=1;
                    break;
                case 2: n6=10;
                    break;
                case 3: n6=100;
                    break;
                case 4: n6=1000;
                    break;
                case 5: n6=10000;
                    break;
                case 6: n6=100000;
                    break;
                case 7: n6=1000000;
                    break;
                case 8: n6=10000000;
                    break;
                default: n6=0;
            }
            // cout<<n5;
            // cout<<n6<<endl;
            sum3+=n6*((int)c-97);
            
            n5--;
        }
        // cout<<"third"<<sum3<<endl;
       if(sum3==(sum2+sum1)){
           return true;
       }
                
        
        return false;
    }
};