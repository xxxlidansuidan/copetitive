https://codeforces.com/contest/349/problem/A   

     #include<iostream>
        using namespace std;
        int main() {
        	int n,x25=0,x50=0;
        	cin>>n;
        	for(int i;cin>>i;i++) {
        		i==25?x25++:(x25--,i==50?x50++:x50--);
        		if(x50<0) x50++,x25-=2;
        		if(x25<0) return cout<<"NO",0;
        	}
        	cout<<"YES";
        }  


   #include<iostream>
    using namespace std;
    int n, a25, a50, a;
    main(){
    	cin>>n;
    	for(int i=0; i<n; i++){
    		cin>>a;
    	    if(a==25) a25++;
    	    if(a==50) a50++, a25--;
    	    if(a==100) {
               if(a50>0) {a50--; a25--;}
    	          if(a25<3){cout<<"NO"; return 0;
          }
    		
     
    }
    cout<<"YES";
    }
