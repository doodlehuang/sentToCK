#include <iostream>
#include <bitset>

const int DoM=30;

int main(){
    std::cout<< "Total sent: " << std::bitset<DoM>().flip().to_ulong();
    return 0;
}
