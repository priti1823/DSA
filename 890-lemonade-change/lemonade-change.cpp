class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count=0;
        int counter=0;
        int cou=0;
        int flag=0;
        for(int i=0;i<bills.size();i++)
        {   if(bills[i]==5)
            {  flag++;
                
            }

        }
        if(flag==0)
        {
            return false;
        }
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                count++;
            }
            else if(bills[i]==10)
            {      
                 counter++;
              
                if(count<=0)
                {
                    return false;
                }
                 count=count-1  ;
            }
            else if(bills[i]==20)
            { int n= cou++;
             
              int c=count*5+counter*10;
              if(c<15 ||count==0)
              {
                return false;
              }
              if(counter>0)
             {  count=count-1;
              counter=counter-1;
             }
             else 
             {
                count=count-3;
             }

            }

        }
    
        return true;  
        
    }
};