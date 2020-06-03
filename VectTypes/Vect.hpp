class CString {
protected:
    char* filename = new char[128];
    char* data = new char[1024];
public:
    CString(char* Data);
    CString& operator +(CString& f){
        int n = 0, i = 0;
        while(f.data[n] != '\0')
            n++;
        f.data[n] = '#';
        n++;
        while(data[i] != '\0'){
            f.data[n+i] = data[i];
            i++;
        }
        f.data[n+i] = '\0';
        i = 0;
        while(data[i] != '\0'){
            if(data[i] == '#'){
                data[i] = '\0';
                break;
            }
            i++;
        }
        return f;
    }
    void operator =(CString& f){
        if(&data != &f.data){
            int i = 0;
            while(f.data[i] != '#'){
                data[i] = f.data[i];
                i++;
            }
            data[i] = ' ';
            int n = i;
            i++;
            while(f.data[i] != '\0'){
                data[i] = f.data[i];
                i++;
            }
            data[i] = '\0';
            f.data[n] = '\0';

            i = 0;
            while(data[i] != '\0'){
                if(data[i] == '#')
                    data[i] = ' ';
                i++;
            }
        }
        else{
            int i = 0;
            while(data[i] != '#'){
                i++;
            }
            data[i] = ' ';
        }
    }
    virtual int output() = 0;
    virtual ~CString();
};
