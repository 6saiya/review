#include <iostream>
#include <string>
using namespace std;

class BigNum{
    private:
        string data;
        int size;
    public:
        BigNum();
        BigNum(string num);
        BigNum(BigNum & num);
        // ~BigNum();
        BigNum operator= (BigNum & b);
        // 加减乘除
        BigNum operator+ (BigNum & b);
        BigNum operator- (BigNum & b);
        BigNum operator* (BigNum & b);
        BigNum operator/ (BigNum & b);

        // 逻辑判断
        bool operator< (BigNum & b);
        bool operator> (BigNum & b);
        bool operator== (BigNum & b);
        bool operator!= (BigNum & b);
        bool operator<= (BigNum & b);
        bool operator>= (BigNum & b);

        // 输入输出
        friend istream& operator >> (istream& i, BigNum &num);
        friend ostream& operator << (ostream& o, BigNum &num);

};

// 构造函数
BigNum::BigNum(){
    data = "0";
    size = 0;
}

BigNum::BigNum(string num){
    data = num;
    size = num.length();
}

BigNum::BigNum(BigNum & num){
    data = num.data;
    size = num.size;
}

BigNum BigNum::operator = (BigNum & b){
    return b;
}

/*
    加减乘除
*/

BigNum BigNum::operator+ (BigNum & b){
    int jinwei = 0;
    // 比较位数
    string max = size > b.size ? data : b.data;
    string min = size > b.size ? b.data : data;
    for(int i = 0; i < min.length(); i++){
        max[max.length()-1-i] = (max[max.length()-1-i] - '0' + min[min.length()-1-i] - '0' + jinwei)%10 +'0';
        jinwei = (max[max.length()-1-i] - '0' + min[min.length()-1-i] - '0' + jinwei)/10;
    }
    
    max = jinwei > 0? "1"+ max : max;

    BigNum r(max);
    return r;
}

BigNum BigNum::operator- (BigNum & b){
    int jinwei = 0;
    // 比较位数
    string max = size > b.size ? data : b.data;
    string min = size > b.size ? b.data : data;
    for(int i = 0; i < min.length(); i++){
        max[max.length()-1-i] = (max[max.length()-1-i] - '0' + min[min.length()-1-i] - '0' + jinwei)%10 +'0';
        jinwei = (max[max.length()-1-i] - '0' + min[min.length()-1-i] - '0' + jinwei)/10;
    }
    
    max = jinwei > 0? "1"+ max : max;

    BigNum r(max);
    return r;
}

BigNum BigNum::operator* (BigNum & b){
    int jinwei = 0;
    // 比较位数
    string max = size > b.size ? data : b.data;
    string min = size > b.size ? b.data : data;
    for(int i = 0; i < min.length(); i++){
        max[max.length()-1-i] = (max[max.length()-1-i] - '0' + min[min.length()-1-i] - '0' + jinwei)%10 +'0';
        jinwei = (max[max.length()-1-i] - '0' + min[min.length()-1-i] - '0' + jinwei)/10;
    }
    
    max = jinwei > 0? "1"+ max : max;

    BigNum r(max);
    return r;
}

BigNum BigNum::operator/ (BigNum & b){
    int jinwei = 0;
    // 比较位数
    string max = size > b.size ? data : b.data;
    string min = size > b.size ? b.data : data;
    for(int i = 0; i < min.length(); i++){
        max[max.length()-1-i] = (max[max.length()-1-i] - '0' + min[min.length()-1-i] - '0' + jinwei)%10 +'0';
        jinwei = (max[max.length()-1-i] - '0' + min[min.length()-1-i] - '0' + jinwei)/10;
    }
    
    max = jinwei > 0? "1"+ max : max;

    BigNum r(max);
    return r;
}

/*
    逻辑判断
*/

bool BigNum::operator< (BigNum & b){
    return data<b.data;
};
bool BigNum::operator> (BigNum & b){
    return data>b.data;
};
bool BigNum::operator== (BigNum & b){
    return data == b.data;
};
bool BigNum::operator!= (BigNum & b){
    return data != b.data;
};
bool BigNum::operator<= (BigNum & b){
    return data>b.data;
};
bool BigNum::operator>= (BigNum & b){
    return data>b.data;
};

/*
    输入输出
*/

ostream& operator<< (ostream& o,BigNum& num){
    o << num.data;
    return o;
}
 
istream& operator >> (istream& i, BigNum &num){
    i >> num.data;
    return i;
}

int main()
{
    BigNum n1("11111111111");
    BigNum n2("11111111111");
    BigNum n3("0");
    n3 = (n1+n2);
    cout << n3 << endl;
    return 0;
}
