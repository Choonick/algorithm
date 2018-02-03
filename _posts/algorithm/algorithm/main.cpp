#include <iostream>
#include <stack>
using namespace std;
stack<int> st;
void stackFunc(int proNum, int iter);

int main(int argc, const char * argv[]) {
    
    int iter;
    int *proNum;
    
    cin >> iter;
    proNum = new int[iter];
    
    for(int i=0;i<iter;i++){
        cin >> proNum[i];
    }
    
    for(int j=0;j<iter;j++){
        for(int i=0;i<proNum[j];i++){
            st.push(i);
        }
        cout << st.top() <<endl;
        st.pop();
        
        if(st.top()==proNum[j+1]){
            cout << st.top() <<endl;
            st.pop();
        }else if(st.top() > proNum[j+1]){
            cout << "NO"<<endl;
            return 0;
        }else if(st.top() < proNum[j+1]){
            
        }

    }
    
    
    
    
    
    
    

    return 0;
}

void stackFunc(int proNum) {
    for(int i=0; i<proNum; i++){
        st.push(i);
    }
    
}
