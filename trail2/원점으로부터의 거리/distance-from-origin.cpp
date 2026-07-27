    #include <iostream>
    #include <string>
    #include <algorithm>
    #include <cmath>
    using namespace std;

    class Data{
        public:
            int x;
            int y;
            int n;
        Data(int x=0, int y=0, int n=0){
            this->x=x;
            this->y=y;
            this->n=n;
        }
    };

    bool cmp(Data a, Data b){
        if(abs(a.x)+abs(a.y)==abs(b.x)+abs(b.y)){
            return a.n<b.n;
        }
        return abs(a.x)+abs(a.y)<abs(b.x)+abs(b.y);
    }

    int main() {
        int n;
        cin>>n;

        Data dis[n];
        for(int i=0; i<n; i++){
            cin>>dis[i].x>>dis[i].y;
            dis[i].n=i+1;
        }
        sort(dis, dis+n, cmp);

        for(int i=0; i<n; i++){
            cout<<dis[i].n<<endl;
        }

        // Please write your code here.
        return 0;
    }