class Solution {
private:
    int romanC(char ch){
        switch(ch)
        {
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
        }
    return 0;
    }

public:    
    int romanToInt(std::string s) 
    {
    unsigned int sum=0;

    for(int m=0,t;s[m];m++){
        t=romanC(s[m]);
        sum=sum+t;
        if(m!=0){
        if(romanC(s[m-1]) < romanC(s[m]) ){
        t=romanC(s[m-1]) + romanC(s[m-1]);
        sum=sum-t;
        }
        }
    }
return sum;
    }    
};
