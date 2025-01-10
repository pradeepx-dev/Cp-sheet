#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> codev1;
    for(int i=0;i<n;i++){
        pair<int, int> pkm;
        cin>>pkm.first;
        cin>>pkm.second;
        codev1.push_back(pkm);
    }

    sort(codev1.begin(), codev1.end());
    // for(auto i:codev1){
    //     cout<<i.first<<" "<<i.second<<"\n";
    // }
    int a=0;
    vector<pair<int,int>> p;
    p.push_back(codev1[0]);
    int count=p[0].second;
    for(int i=1;i<n-1;i++){
        if(codev1[i].second <= count){
            p.push_back(codev1[i]);
            a++;
            count = p[a].second;
        }
    }
    // cout<<p[a].first<<p[a].second<<"\n";
    
    p.push_back(codev1[n-1]);
    for(int i=n-1;i>0;i--){
        if(p[a].first >= codev1[i].first){
            p[a].second = min(p[a].second, codev1[i].second);
            // cout<<"h\n";
            break;
        }
        else if(codev1[i-1].second <= codev1[i].second&&p[a].first != codev1[i-1].first){
            p.push_back(codev1[i-1]);
            //  cout<<"hiiii\n";
        }
    }
    int pmin = codev1[0].first;  
    for (int i = 1; i < n; i++) {
        if (codev1[i].first == pmin) {  
            p.push_back(codev1[i]);  
        } else {
            break;
        }
    }
    int pmax = codev1[n-1].first;  
    for (int i = n-2; i >0; i--) {
        if (codev1[i].first == pmin) {  
            p.push_back(codev1[i]);  
        } else {
            break;
        }
    }
     sort(p.begin(),p.end());
    int z=p.size();
    int i=0;
     double firstv=0;
    double temp1,temp2;

//  for(auto i: p){
//     cout<<i.first<<" "<<i.second<<"\n";
//  }

    for(;i+1<z;i++){
        if(p[i].first==p[i+1].first){
        temp1=((pow(abs(p[i].first-p[i+1].first),2)*1.0));
        temp2=((pow(abs(p[i].second-p[i+1].second),2)*1.0));
        firstv+=(sqrt(temp1+temp2));
}
      else{
        i++;
        break;
      }
}
// cout<<i<<" ";

  int j=i;
    for(;j+1<z;j++){
        temp1=((pow(abs(p[j].first-p[j+1].first),2)*1.0));
        temp2=((pow(abs(p[j].second-p[j+1].second),2)*1.0));
        firstv+=(sqrt(temp1+temp2));
}
 temp1=((pow(abs(p[0].first-p[i].first),2)*1.0));
temp2=((pow(abs(p[0].second-p[i].second),2)*1.0));
        firstv+=(sqrt(temp1+temp2));

   cout<<round(firstv);

    // for(int i=0;i<p.size();i++){cout<<p[i].first<<" "<<p[i].second<<endl;}


    return 0;
}