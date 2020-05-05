class Solution {
public:
    int findComplement(int num) {
        // vector<int> v ;
        
        if (num == 0){return 1;}
        if (num== 1){return 0;}
        int a =0;
        int s = 0;
        int i =0;
        while(num){
            (num%2==1) ? a = 0 : a=1;
            s =  s+ a* pow(2,i);
            num=num/2;
            i++;
        }
        return s;
        
    }
};
