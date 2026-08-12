    #include <iostream>
    #include <string>
    #include <algorithm>
    #include <cmath>
    using namespace std;

    class Data{
        public:
            int x;
            int y;
            int z;
        Data(int x=0, int y=0, int z=0){
            this->x=x;
            this->y=y;
            this->z=z;
        }
    };

    bool cmp(Data a, Data b){
        if(a.x==b.x){
            return a.y>b.y;
        }
        return a.x<b.x;
    }

    int main() {
        int n;
        cin>>n;

        Data dis[n];
        for(int i=0; i<n; i++){
            cin>>dis[i].x>>dis[i].y;
            dis[i].z=i+1;
        }
        sort(dis, dis+n, cmp);

        for(int i=0; i<n; i++){
            cout<<dis[i].x<<' '<<dis[i].y<<' '<<dis[i].z<<endl;
        }

        // Please write your code here.
        return 0;
    }