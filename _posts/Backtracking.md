# Backtracking(백트래킹)

전수검사

- 안풀리는 문제의 최후의 방법 모두 다 해보는 것이다.
- 0000~9999까지 모든 경우의 수를 다 해보는 것이다.

## Backtracking

- 불필요한 분기들을 줄요 효율을 꾀한다.

- ### N-Queen문제

  - 체스판에서 퀸이 서로를 잡아먹지 못하게 배치하는 방법.

    ```c++
    Backtracking(node v) {
    	if(Promising(v)){
            if(Solution exist at v) write Solution;
            else
            	for(each child u of v) Backtracking(u);
    	}
    }
    ```

    ​

    ```c++
    Backtracking2(node v) {
        for(each child u of v) {
            if(Solution exist at u) Write Solution;
            else Backtracking2(u);
        }
    }
    ```

    [출처](http://ddmix.blogspot.kr/2015/06/cppalgo-29-greedy-backtracking.html)

- ### 6603_로또

  ​

