import QuickSort.QuickSort;

class Test{
    public static void main(String[] args){
        int[] array = {5,1,2,14,5,67,2};
        QuickSort.printArray(array);

        QuickSort.quickSort(array,0,6);
        QuickSort.printArray(array);
    }
}