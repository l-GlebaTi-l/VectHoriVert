class CStringVert : public CString {
public:
    CStringVert(char *str) : CString(str){}
    int output();
};

class FactoryCStringVert : public CFabricData{
public:
    CString* Create(char *str){
        return new CStringVert(str);
    }
};
