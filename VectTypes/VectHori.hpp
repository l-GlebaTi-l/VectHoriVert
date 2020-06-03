class CStringHori : public CString {
public:
    using CString::operator=;
    CStringHori(char *str) : CString(str){}
    int output();
};

class FactoryCStringHori : public CFabricData{
public:
    CString* Create(char *str){
        return new CStringHori(str);
    }
};
