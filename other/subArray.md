# Maximum subarray(divide and conquer):    
![1](C:\Users\18080\Desktop\MergeSort\Algorithm\other\1.png)

## divide the problem into three part(left, mid , right)
## Mid:
```java
		GetMid(int head, int tail, int[] arr){
		If(head == tail) return arr[head];
		
		int mid = (head + tail)/2;
		
		
		Int max = NEGATIVE_INFINITY;
		Int value = 0;
		
		Int h = mid;
		Int t = mid;
		
		Int p = mid;
		
		//calculate the maximum on the left£¨mid to head£©
		While(mid >= head){
			Value = value + arr[p];
			If(value >= max){
				Max = value;
				H = p;
			}
			
			P --;
		}
		
		//calculate the maximum on the right(mid + 1 to tail)
		P = mid  + 1;
		While(p <= tail){
			Value = value + arr[p];
			If(value >= max){
				Max = value;
				 h = p;
			}
			
			P ++;
		}
		
		
		Return new array[3] = {h , t, max};
		}
```
## Left and Right  : divide until the problem which has O(1) cost

## Time cost analyse: T(n) = 2T(n/2) + O(n): according to the recursion tree method to calculate : Time cost is nlog(n) 