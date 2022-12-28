#include <iostream>
#include <string>
using namespace std;

string rev_str(string str, int length){
    string out_str = "";
    for(int i = 0; i < length; i++)
        out_str = str[i] + out_str;
    return out_str;
}

string to_straight(long long number, int bit_size){
    int length = 0;
    // Positive numbers convertation

    string straight = "";
    while (number > 0){
        straight += char('0' + number % 2);
        number /= 2;
        length += 1;
    }
    if (length <= bit_size)
        return string(bit_size-length, '0') + rev_str(straight, length);
    cout << "An overflow happened, cut executed" << endl;
    string str = rev_str(straight, length), out_str = "";
    for(int i = length-bit_size; i < length; i++)
        out_str += str[i];
    return out_str;
}

string to_inverted(string number){

}

int main()
{
    bool flag;
    long long number;
    int bit_size;
    cout << "Enter a number to convert:";
    cin >> number;
    flag = number >= 0;
    cout << "Enter size limit in bits:";
    cin >> bit_size;
    if (flag)
        cout << to_straight(number, bit_size);
    else{

    }


}