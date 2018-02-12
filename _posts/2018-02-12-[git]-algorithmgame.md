# 알고리즘 스터디 사다리 게임

코드내용

```
void MergeSort(int start, int end, int*arr)
{
	int mid;
	if (start < end)
	{
		mid = (start + end) / 2; //배열의 중간 인덱스
		MergeSort(start, mid, arr);//왼쪽 배열 분할
		MergeSort(mid + 1, end, arr);//오른쪽배열 분할
		ArrayMerge(start, end, arr);//병합
	}
}
```