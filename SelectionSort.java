import java.util.ArrayList;
import java.util.List;

public class SelectionSort {

   static void sort(ArrayList<Integer> array)
   {
    for (int i = 0; i < array.size()-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < array.size(); j++)
            if (array.get(j) < array.get(min_idx)) {
                min_idx = j;
            }
            int temp = array.get(min_idx);
            array.set(min_idx, array.get(i));
            array.set(i, temp);
        }
    }

    static void sort(int toSort[]) {
        int n = toSort.length;
        for (int curIndex = 0; curIndex < n-1; curIndex++){
            int minIndex = curIndex;
            for (int checkIndex = curIndex+1; checkIndex < n; checkIndex++){
                if (toSort[checkIndex] < toSort[minIndex])
                    minIndex = checkIndex;
            }
            int temp = toSort[minIndex];
            toSort[minIndex] = toSort[curIndex];
            toSort[curIndex] = temp;
            for(int i = 0; i < toSort.length; i++){
                System.out.println(i + ": " + toSort[i]);
            }
        }
    }


    public static void main(String[] args) {

    }

