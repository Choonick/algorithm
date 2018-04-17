# SW_1209_SUM

숫자만들기에 이은 문제였기에 재귀를 이용해서 풀었는데 굳이 그럴 필요가 없었다. 그래도 재귀를 이용해서 풀었다. 로직은 다음과 같다.

```c++
//
//  sw_1209_Sum.cpp
//  cpp
//
//  Created by 박종훈 on 2018. 4. 6..
//  Copyright © 2018년 박종훈. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#define INF 2e9

using namespace std;

int arr[100][100];
int MAX;

// direction은 행의 합을 구할 것인지, 열의 합을 구할 것인지 구별하기 위해 사용했다.
void sum(int x, int y, int now, int direction) {
    // 먼저 탈출구를 만들어 주어야 한다.
    // 100x100행렬이므로 x,y가 100일때 최대값을 비교하고 return 한다.
    if(x==100 || y==100){
        MAX = now > MAX ? now: MAX;
    }
    else {
        switch (direction) {
            case 0:
                sum(x+1,y,now+arr[x][y],0);
                break;
            case 1:
                sum(x,y+1,now+arr[x][y],1);
                break;
        }
    }
}

int main() {
    int n;
    for(int t=0;t<10;t++){
        cin >> n;
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                cin >> arr[i][j];
            }
        }
        MAX = -INF;
        
        // 이 부분에서 실수를 했다.
        // for문을 돌리지 않으면 (0,0)에서 시작하는 행, 열의 합만 구하게 된다.
        for(int i=0;i<100;i++){
            sum(0,i,0,0);
            sum(i,0,0,1);
        }
        
        // 대각선 두방향의 합을 구하는 for문이다. 
        // 탈출구 조건이 복잡해지는 것같아서 분리해 계산하였다.
        int temp1=0,temp2=0;
        for(int i=0;i<100;i++){
            temp1+=arr[i][i];
            temp2+=arr[99-i][i];
        }
        temp1 = temp1 > temp2 ? temp1: temp2;
        MAX = temp1 > MAX ? temp1: MAX;
        
        cout << "#" << n << " " << MAX << endl;
    }
    
}
```

아직 부족하다.