#include "SemanticAnalysis.h"
#include <variant>
#ifdef IR_GEN

class Interpreter {
public:
    Interpreter(const std::vector<IR_code_t>& irc,
                const std::vector<IR_temp_t>& temp,
                const std::vector<IR_temp_t>& lvar,
                const std::vector<IR_temp_t>& gvar)
        : IRC_array(irc), 
          Temp_array(temp), 
          Lvar_array(lvar), 
          Gvar_array(gvar) 
    {}

    void run() {
        pc = 0;
        //先从上到下扫描一遍IR保存标签对应的地址
        while (pc < IRC_array.size()){
            const IR_code_t& ir = IRC_array[pc];
            switch (ir.IRop){
                case IR_FUNC_BEGIN:
                    labels[ir.result].begin = pc;
                    pc++;
                    break;
                case IR_FUNC_END:
                    labels[ir.result].end = pc;
                    pc++;
                    break;
                case IR_LABEL:
                    labels[ir.result].begin = pc;
                    pc++;
                    break;
                default:
                    pc++;
            }
        }

        pc = 0;
        std::any val;
        std::any c;
        std::any d;
        int length;
        int index;
        int integer;
        bool running = true;
        while (pc < IRC_array.size() && running) {
            const IR_code_t& ir = IRC_array[pc];
            std::string str1,str2;
            std::string name = ir.result;

            //std::cout << "[" << pc << "] " ;
            //printIRCode(ir);

            int pos = name.find('<');
            if(pos == std::string::npos){
                str1 = name;
                str2 = "";
                index = 0;
            }
            else{
                str1 = name.substr(0,pos);
                str2 = name.substr(pos+1);
                index = any_to_int(getValue(str2))/4;
            }

            switch (ir.IRop) {
                case IR_FUNC_BEGIN:
                    if(ir.result == "main"){
                        funcstack.push_back((func){ .param={"",""}, .ra=0, .funcname=ir.result, .returnval=""});
                        pc++;
                        break;
                    }
                    else if(funcstack.empty()){
                        pc = labels[ir.result].end + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                case IR_RETURN: 
                    if(funcstack.back().funcname == "main"){
                        val = getValue(ir.result);
                        //std::cout << "Return: " << val << "\n";
                        print_any(val);
                        running = false;
                        break;
                    }
                    else{
                        val = getValue(ir.result);
                        //print_any(val);
                        //std::cout << "\n";
                        setValue(funcstack.back().returnval,val,0);
                        pc = labels[funcstack.back().funcname].end;
                        break;
                    }
                case IR_FUNC_END:
                    pc = funcstack.back().ra;
                    //.clear();
                    funcstack.pop_back();
                    break;
                case IR_G_ALLOC:
                    length = getLength(str1);
                    //std::cout << length <<"\n";
                    if(length==1){
                        val = getValue(ir.arg1);
                        setValue(str1,val,index);
                    }
                    else{//数组初始化情况
                        int i=0;
                        std::string str;
                        for(int index1=0;index1<length;index1++){
                            while(ir.arg1[i]!=','){
                                if(ir.arg1[i]!='#'){
                                    str+=ir.arg1[i];
                                }
                                i++;
                            }
                            if(str=="$"){
                                val = 0;
                                str = "";
                            }
                            else{
                                val = std::stoi(str,nullptr,0);
                                str = "";
                            }
                            setValue(str1,val,index1);
                            //std::cout << gvar_vals[str1][index1] <<"\n";
                            i++;
                        }
                    }
                    pc++;
                    break;
                case IR_L_ALLOC:
                    length = getLength(str1);
                    //std::cout << length <<"\n";
                    if(length==1){
                        val = getValue(ir.arg1);
                        setValue(str1,val,index);
                    }
                    else{//数组初始化情况
                        int i=0;
                        std::string str;
                        for(int index1=0;index1<length;index1++){
                            while(ir.arg1[i]!=','){
                                if(ir.arg1[i]!='#'){
                                    str+=ir.arg1[i];
                                }
                                i++;
                            }
                            if(str=="$"){
                                val = 0;
                                str = "";
                            }
                            else{
                                val = std::stoi(str,nullptr,0);
                                str = "";
                            }
                            setValue(str1,val,index1);
                            //std::cout << lvar_vals[ir.result][index1] <<"\n";
                            i++;
                        }
                    }
                    pc++;
                    break;
                case IR_ADD:
                    //val = getValue(ir.arg1) + getValue(ir.arg2);
                    if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        val = std::any_cast<int>(getValue(ir.arg1)) + std::any_cast<int>(getValue(ir.arg2));
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        val = std::any_cast<float>(getValue(ir.arg1)) + std::any_cast<float>(getValue(ir.arg2));
                    } else{
                        throw std::runtime_error("Unsupported types in any_addd");
                    }
                    //std::cout << "add" << "\n";
                    //std::cout << getValue(ir.arg1) << "\n";
                    //std::cout << getValue(ir.arg2) << "\n";
                    //std::cout << val << "\n";
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_ASSIGN:
                    val = getValue(ir.arg1);
                    //std::cout << ir.arg1 << "\n";
                    //std::cout << val << "\n";
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_MUL:
                    //val = getValue(ir.arg1) * getValue(ir.arg2);
                    if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        val = std::any_cast<int>(getValue(ir.arg1)) * std::any_cast<int>(getValue(ir.arg2));
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        val = std::any_cast<float>(getValue(ir.arg1)) * std::any_cast<float>(getValue(ir.arg2));
                    } else{
                        throw std::runtime_error("Unsupported types in any_mul");
                    }
                    //std::cout << "mul" << "\n";
                    //std::cout << getValue(ir.arg1) << "\n";
                    //std::cout << getValue(ir.arg2) << "\n";
                    //std::cout << val << "\n";
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_SUB:
                    //val = getValue(ir.arg1) - getValue(ir.arg2);
                    c = getValue(ir.arg1); 
                    d = getValue(ir.arg2);
                    if (c.type() == typeid(int) && d.type() == typeid(int)) {
                        val = std::any_cast<int>(c) - std::any_cast<int>(d);
                    } else if (c.type() == typeid(float) && d.type() == typeid(float)) {
                        val = std::any_cast<float>(c) - std::any_cast<float>(d);
                        //std::cout << std::any_cast<float>(c) << std::endl;
                        //std::cout << std::any_cast<float>(d) << std::endl;
                    } else{
                        throw std::runtime_error("Unsupported types in any_sub");
                    }
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_DIV:
                    //val = getValue(ir.arg1) / getValue(ir.arg2);
                    if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        val = std::any_cast<int>(getValue(ir.arg1)) / std::any_cast<int>(getValue(ir.arg2));
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        val = std::any_cast<float>(getValue(ir.arg1)) / std::any_cast<float>(getValue(ir.arg2));
                    } else{
                        throw std::runtime_error("Unsupported types in any_div");
                    }
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_MOD:
                    //val = getValue(ir.arg1) % getValue(ir.arg2);
                    if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        val = std::any_cast<int>(getValue(ir.arg1)) % std::any_cast<int>(getValue(ir.arg2));
                    } else{
                        throw std::runtime_error("Unsupported types in any_mod");
                    }
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_AND:
                    //val = getValue(ir.arg1) && getValue(ir.arg2);
                    if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        val = std::any_cast<int>(getValue(ir.arg1)) && std::any_cast<int>(getValue(ir.arg2));
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        val = std::any_cast<float>(getValue(ir.arg1)) && std::any_cast<float>(getValue(ir.arg2));
                    } else{
                        throw std::runtime_error("Unsupported types in any_and");
                    }
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_OR:
                    //val = getValue(ir.arg1) || getValue(ir.arg2);
                    if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        val = std::any_cast<int>(getValue(ir.arg1)) || std::any_cast<int>(getValue(ir.arg2));
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        val = std::any_cast<float>(getValue(ir.arg1)) || std::any_cast<float>(getValue(ir.arg2));
                    } else{
                        throw std::runtime_error("Unsupported types in any_or");
                    }
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_NEG:
                    //val = -getValue(ir.arg1);
                    if (getValue(ir.arg1).type() == typeid(int)) {
                        val = -std::any_cast<int>(getValue(ir.arg1));
                    } else if (getValue(ir.arg1).type() == typeid(float)) {
                        val = -std::any_cast<float>(getValue(ir.arg1));
                    } else{
                        throw std::runtime_error("Unsupported types in any_neg");
                    }
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_PARAM:
                    param.push_back(ir.result);
                    //param[0] = ir.result;
                    //std::cout << (param).size() << std::endl;
                    pc++;
                    break;
                case IR_CALL:
                    if(ir.result == "print_int"){
                        std::cout << any_to_int(getValue(param[0]));
                        pc++;
                        param = {};
                        break;
                    }
                    else if(ir.result == "get_int"){
                        std::cin >> integer;
                        setValue(ir.arg1,integer,0);
                        pc++;
                        param = {};
                        break;
                    }
                    else if(ir.result == "print_char"){
                        if(param[0].substr(2,1) == "\\")
                            std::cout << "\n";
                        else
                            std::cout << param[0].substr(2,1);
                        pc++;
                        param = {};
                        break;
                    }
                    else{
                        funcstack.push_back((func){.param=param, .ra=pc+1, .funcname=ir.result, .returnval=ir.arg1});
                        pc = labels[ir.result].begin + 1;
                        param = {};
                        break;
                    }
                case IR_J:
                    pc = labels[ir.result].begin + 1;
                    break;
                case IR_BEQ:
                    /*
                    if(getValue(ir.arg1) == getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                    */
                   if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        if(std::any_cast<int>(getValue(ir.arg1)) == std::any_cast<int>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        if(std::any_cast<float>(getValue(ir.arg1)) == std::any_cast<float>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else{
                        throw std::runtime_error("Unsupported types in any_beq");
                    }
                case IR_BNE:
                    /*
                    if(getValue(ir.arg1) != getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                    */
                   if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        if(std::any_cast<int>(getValue(ir.arg1)) != std::any_cast<int>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        if(std::any_cast<float>(getValue(ir.arg1)) != std::any_cast<float>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else{
                        throw std::runtime_error("Unsupported types in any_bne");
                    }
                case IR_BLT:
                    /*
                    if(getValue(ir.arg1) < getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                    */
                   if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        if(std::any_cast<int>(getValue(ir.arg1)) < std::any_cast<int>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        if(std::any_cast<float>(getValue(ir.arg1)) < std::any_cast<float>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else{
                        throw std::runtime_error("Unsupported types in any_blt");
                    }
                case IR_BGT:
                    /*
                    if(getValue(ir.arg1) > getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                    */
                   if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        if(std::any_cast<int>(getValue(ir.arg1)) > std::any_cast<int>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        if(std::any_cast<float>(getValue(ir.arg1)) > std::any_cast<float>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else{
                        throw std::runtime_error("Unsupported types in any_bgt");
                    }
                case IR_BLE:
                    /*
                    if(getValue(ir.arg1) <= getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                    */
                   if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        if(std::any_cast<int>(getValue(ir.arg1)) <= std::any_cast<int>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        if(std::any_cast<float>(getValue(ir.arg1)) <= std::any_cast<float>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else{
                        throw std::runtime_error("Unsupported types in any_ble");
                    }
                case IR_BGE:
                    /*
                    if(getValue(ir.arg1) >= getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                    */
                   if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        if(std::any_cast<int>(getValue(ir.arg1)) >= std::any_cast<int>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        if(std::any_cast<float>(getValue(ir.arg1)) >= std::any_cast<float>(getValue(ir.arg2))){
                            pc = labels[ir.result].begin + 1;
                            break;
                        } else{
                            pc++;
                            break;
                        }
                    } else{
                        throw std::runtime_error("Unsupported types in any_bge");
                    }
                case IR_LT:
                    //val = getValue(ir.arg1)<getValue(ir.arg2);
                    if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        integer = std::any_cast<int>(getValue(ir.arg1)) < std::any_cast<int>(getValue(ir.arg2));
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        integer = std::any_cast<float>(getValue(ir.arg1)) < std::any_cast<float>(getValue(ir.arg2));
                    } else{
                        throw std::runtime_error("Unsupported types in LT");
                    }
                    setValue(str1,integer,index);
                    pc++;
                    break;
                case IR_GT:
                    //val = getValue(ir.arg1)>getValue(ir.arg2);
                    if (getValue(ir.arg1).type() == typeid(int) && getValue(ir.arg2).type() == typeid(int)) {
                        integer = std::any_cast<int>(getValue(ir.arg1)) > std::any_cast<int>(getValue(ir.arg2));
                    } else if (getValue(ir.arg1).type() == typeid(float) && getValue(ir.arg2).type() == typeid(float)) {
                        integer = std::any_cast<float>(getValue(ir.arg1)) > std::any_cast<float>(getValue(ir.arg2));
                    } else{
                        throw std::runtime_error("Unsupported types in GT");
                    }
                    setValue(str1,integer,index);
                    pc++;
                    break;
                default:
                    pc++;
            }
        }
    }

private:
    std::vector<IR_code_t> IRC_array;
    std::vector<IR_temp_t> Temp_array;
    std::vector<IR_temp_t> Lvar_array;
    std::vector<IR_temp_t> Gvar_array;

    std::unordered_map<std::string, std::vector<std::any>> gvar_vals;
    std::unordered_map<std::string, std::vector<std::any>> lvar_vals;
    std::unordered_map<std::string, std::vector<std::any>> temp_vals;

    typedef struct{
        int begin;
        int end;
    }lab;

    std::unordered_map<std::string, lab> labels;
    std::vector<std::string> param = {};
    //std::string param;

    typedef struct{
        std::vector<std::string> param;
        //std::string param;
        int ra;
        std::string funcname;
        std::string returnval;
    }func;
    std::vector<func> funcstack;

    size_t pc = 0;

std::any getValue(std::string name){
        int pos = name.find('<');
        std::string str1,str2;
        if(pos == std::string::npos){
            str1 = name;
            str2 = "";
        }
        else{
            str1 = name.substr(0,pos);
            str2 = name.substr(pos+1);
        }
        if (name[0] == '@' && str2 == ""){
            return gvar_vals[name][0];
        } 
        else if(name[0] == '@'){
            //return gvar_vals[str1][getValue(str2)/4];
            return gvar_vals[str1][any_to_int(getValue(str2))/4];
        }

        if (name[0] == '%' && str2 == ""){
            return temp_vals[name][0];
        }
        else if(name[0] == '%'){
            //return temp_vals[str1][getValue(str2)/4];
            return temp_vals[str1][any_to_int(getValue(str2))/4];
        }
        if (name[0] == '^' && str2 == ""){
            if(lvar_vals[name].empty()){
                if(funcstack.back().param.size() == 1){
                    //std::cout << "1param" << std::endl;
                    return getValue(funcstack.back().param[0]);
                } else if (funcstack.back().param.size() == 2){
                    //std::cout << "2param" << std::endl;
                    std::any param1 = getValue(funcstack.back().param[0]);
                    funcstack.back().param[0] = funcstack.back().param[1];
                    funcstack.back().param.pop_back();
                    return param1;
                }
            }
            return lvar_vals[name][0];
        } 
        else if(name[0] == '^'){
            //return lvar_vals[str1][getValue(str2)/4];
            return lvar_vals[str1][any_to_int(getValue(str2))/4];
        }
        if (name[0] == '#'){ 
            //return std::stoi(name.substr(1),nullptr,0);
            return auto_parse(name.substr(1));
        }
        return 0;
    }

    void setValue(std::string name, std::any val, int index) {
        if (name[0] == '@' && gvar_vals[name].size()<=index){
            gvar_vals[name].push_back(val);
        }
        else if(name[0] == '@'){
            gvar_vals[name][index]=val;
        }

        if (name[0] == '%' && temp_vals[name].size()<=index){
            temp_vals[name].push_back(val);
        }
        else if(name[0] == '%'){
            temp_vals[name][index]=val;
        }

        if (name[0] == '^' && lvar_vals[name].size()<=index){
            lvar_vals[name].push_back(val);
        }
        else if(name[0] == '^'){
            lvar_vals[name][index]=val;
        }
    }
    int getLength(std::string name){
        if (name[0] == '@') return Gvar_array[std::stoi(name.substr(1)),nullptr,0].length;
        if (name[0] == '%') return Temp_array[std::stoi(name.substr(1)),nullptr,0].length;
        if (name[0] == '^') return Lvar_array[std::stoi(name.substr(1)),nullptr,0].length;
    }
    std::any auto_parse(const std::string& s) {
        if (s.find('.') != std::string::npos || s.find('e') != std::string::npos || s.find('E') != std::string::npos) {
            return std::stof(s,nullptr);  // float
        } else {
            return std::stoi(s,nullptr,0);  // int
        }
    }

    void printIRCode(const IR_code_t& code) {
        std::cout << "OP: " << typeutils.IRop_to_str[code.IRop]
                << " | Type: " << typeutils.basety_to_str[code.basety]
                << " | Result: " << (code.result.empty() ? "NONE" : code.result)
                << " | Arg1: " << (code.arg1.empty() ? "NONE" : code.arg1)
                << " | Arg2: " << (code.arg2.empty() ? "NONE" : code.arg2)
                << std::endl;
    }

    // any
    void print_any(const std::any& val) {
        if (val.type() == typeid(int)) {
            std::cout << "\nReturn: " << std::any_cast<int>(val);
        } else if (val.type() == typeid(float)) {
            std::cout << "\nReturn: " << std::any_cast<float>(val);
        } else if (val.type() == typeid(std::string)) {
            std::cout << "\nReturn: " <<std::any_cast<std::string>(val);
        } else {
            std::cout << "[unsupported type]";
        }
    }

    int any_to_int(const std::any& val) {
        if (val.type() == typeid(int)) {
            return std::any_cast<int>(val);
        } else if (val.type() == typeid(float)) {
            return static_cast<int>(std::any_cast<float>(val));
        } else {
            throw std::runtime_error("Unsupported type in any_to_int");
        }
    }
};

#endif