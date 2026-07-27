    #include <iostream>
    #include <string>
    #include <algorithm>
    using namespace std;

    class Data{
        public:
            int h;
            int w;
            int n;
        Data(int h=0, int w=0, int n=0){
            this->h=h;
            this->w=w;
        }
    };

    bool cmp(Data a, Data b){
        if(a.h==b.h){
            if(a.w==b.w){
                return a.n<b.n;
            }
            return a.w>b.w;
        }
        return a.h>b.h;
    }
    int main() {
        int n;
        cin>>n;

        Data st[n];
        for(int i=0; i<n; i++){
            cin>>st[i].h>>st[i].w;
            st[i].n=i+1;
        }
        sort(st, st+n, cmp);
        for(int i=0; i<n; i++){
            cout<<st[i].h<<' '<<st[i].w<<' '<<st[i].n<<endl;
        }

        // Please write your code here.
        return 0;
    }