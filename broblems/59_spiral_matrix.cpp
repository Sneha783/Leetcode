class Solution {
public:
    vector<vector<int>> generateMatrix(int l) {
    int s=l,c=1;
    vector<vector<int> > v(l,vector<int>(l));
    for(int m=0,n=0,inc=0,k=0,t=0;k<s;k++,inc++)
    {
        if(inc%2==0)
        {
            for(n;n<l;n++)
            v[m][n]=c++;

            for(n--,m++;m<l;m++)
            v[m][n]=c++;
        }
        else
        {
            for(m--,n--;n>=t;n--)
            v[m][n]=c++;
            l--;
            for(n++,m--;m>t;m--)
            v[m][n]=c++;        
        t++;
        m++;
        n++;
        }  
    }        
  return v; 
}
};
