import QuickSort.QuickSort;

class Test{
    public static void main(String[] args){
        int[] array = {2,1,4,1,5,6,2,22,1,3};

        QuickSort.printArray(array); //print array  elements
        QuickSort.quickSort(array,0,array.length - 1);// quick sort
        QuickSort.printArray(array);//print results
    }
}