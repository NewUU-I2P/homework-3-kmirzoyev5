#include <string>
#include <sstream>
using namespace std;

string problemSolution4(const string &macAddress) {
    string result;
    int firstOct;
    stringstream sso(macAddress);
    sso >> hex >> firstOct;
    if (macAddress=="FF:FF:FF:FF:FF:FF"){
        result = "Broadcast";
    }
    if (firstOct%2==0){
        result = "Unicast";
    }else
        result = "Multicast";
    return result;
}