import java.util.Arrays;

public class MergeSort{
    public static void display(int[] arr){
        for(int i = 0;i < arr.length;i ++){
            System.out.println(arr[i]);
        }
    }

    public static void sort(int[] arr,int head,int tail){
        int mid = (head + tail)/2;
        int p1 = head; int p2 = mid +1;int p = head;

        int[] cp = Arrays.copyOf(arr,arr.length);

        while(p1 <= mid && p2 <= tail){
            if(cp[p1] <= cp[p2]){
                arr[p] = cp[p1];
                p ++;
                p1 ++;
            }else{
                arr[p] = cp[p2];
                p ++;
                p2 ++;
            }
        }
        while(p1 <= mid){
            arr[p] = cp[p1];
            p ++;
            p1 ++;
        }
        while(p2 <= tail){
            arr[p] = cp[p2];
            p ++;
            p2 ++;
        }

    }

    public static void  mergeSort(int[] arr,int head,int tail){
        if(head == tail){
            return;
        }

        int mid = (head + tail)/2;

        mergeSort(arr,head,mid);
        mergeSort(arr,mid + 1,tail);
        sort(arr,head,tail);
    }

    public static void main(String[] args) {
        int[] arr = {6,342,2,4,123,5,4,1,434,423525,3};

        mergeSort(arr,0,arr.length -1);
        display(arr);
    }
}