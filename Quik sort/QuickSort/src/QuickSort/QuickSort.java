package QuickSort;

public class QuickSort {
    public static void printArray(int[] array){
        for(int i = 0;i < array.length;i ++){
         System.out.println(array[i]);
        }
        System.out.println("size:" + array.length);
    }

    public static void quickSort(int[] array,int p,int r){
        if(p < r){
            int q = partition(array,p,r);
            quickSort(array,p,q - 1);
            quickSort(array,q,r);
        }

    }

    public static int partition(int[] array,int p,int r){
        int i = p - 1;
        int x = array[r];
        for(int j = i + 1;j < r;j ++){
            if(array[j] <= x){
             i ++;
            //exchange
             int tmp = array[j];
             array[j] = array[i];
             array[i] = tmp;
            }
        }
            int tmp = array[r];
            array[r] = array[i + 1];
            array[i + 1] = tmp;
            return i + 1;
    }
}
