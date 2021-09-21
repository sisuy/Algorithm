public class SubArray{
    public static int[] getMid(int[] arr,int head,int tail){
        if(head == tail) return new  int[] {head,tail,arr[head]};

        int mid = (head + tail)/2;

        int max = (int)Double.NEGATIVE_INFINITY;
        int value = 0;

        int h = mid;
        int t = mid;
        int p = mid;

        while(p >= head){
            value += arr[p];
            if(value >= max){
                max = value;
                h = p;
            }
            p --;
        }

        p = mid + 1;
        while(p <= tail){
            value += arr[p];
            if(value >= max){
                max = value;
                t = p;
            }
            p ++;
        }

        return new int[] {h,t,max};
    }

    public static int[] getMax(int[] arr,int head ,int tail){
            if(head == tail) return new int[] {head,tail,arr[head]};

            int mid = (head + tail)/2;
            int[] l = getMax(arr, head ,mid);
            int[] r = getMax(arr,mid + 1, tail);
            int[] m = getMid(arr,head,tail);

            if(l[2] > r[2] && l[2] > m[2]){
                return l;
            }else if(m[2] > r[2] && m[2] > l[2]){
                return m;
            }else{
                return r;
            }
    }

    public static void main(String args[]
    ){
        int[] test = {1,-1,4};
        int[] ret = getMax(test,0,test.length - 1);
        System.out.println(ret[0]);
        System.out.println(ret[1]);
        System.out.println(ret[2]);
    }

}