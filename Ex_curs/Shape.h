#pragma once
#include <string>
#include <utility>
#include <algorithm>
#include <vector>


class shape {
private:
    std::string name;
    int arie;
public:
    std::string get_name() { return name; };
    int get_arie() { return arie; };
    void set_name(std::string val) { name = std::move(val); };
    void set_arie(int val) { arie = val; };
    shape(std::string name, int arie) {
        set_arie(arie);
        set_name(name);
    };
    std::string str() {
        std::string str = "";
        str += name;
        str += " Arie:";
        str += std::to_string(arie);
        return str;
    }
};

