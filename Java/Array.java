import java.util.Scanner;
public class Array {

    // search the array with key if not found returns -1 else the index
    public static int search(int nums[], int key) {

        for(int i = 0; i < nums.length; i++) {
            if(nums[i] == key) {
                return i;
            }
        }

        return -1; 
    } 

    // sort the array in ascending order
    public static void sort(int nums[]) {
        for(int i = 0; i < nums.length - 1; i++) {
            for(int j = 0; j < nums.length - i - 1; j++) {
                if(nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
    }

    // sort from s to e, s and e included
    public static void sortrange(int[] nums, int s, int e) {
        int n = nums.length;
        if(s >= n || e >= n) {
            System.out.println("Range out of bounds.");
        }
        else {
            for(int i = s; i < e; i++) {
                for(int j = s; j < e - i + s; j++) {
                    if(nums[j] > nums[j + 1]) {
                        int temp = nums[j];
                        nums[j] = nums[j + 1];
                        nums[j + 1] = temp;
                    }
                }
            }
        }
    }

    // inserts elment and index and shifts all elements to the right by 1 may eleminate element if it is at the last
    public static void insert(int nums[], int ind, int ele) {
        if(ind >= nums.length) {
            return;
        }
        for(int i = nums.length - 1; i > ind; i--) {
            nums[i] = nums[i - 1];
        }
        nums[ind] = ele;
    }

    // print array elements
    public static void printArr(int nums[]) {
        for(int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
    }

    // deletes the first such element from the array
    public static void delete(int nums[], int ele) {
        int i = 0;
        while(i < nums.length && nums[i]!= ele) {
            i++;
        }
        if(i != nums.length) {
            while(i < nums.length - 1) {
                nums[i] = nums[i + 1];
                i++;
            }
            nums[i] = 0;
        }
    }

    public static void reverse(int nums[]) {
        int n = nums.length;
        for(int i = 0; i < n / 2; i++) {
            int temp = nums[i];
            nums[i] = nums[n - i - 1];
            nums[n - i - 1] = temp;
        }
    }

    // copies element from nums to copy if there are same elements in both the arrays
    public static void copy(int nums[], int copy[]) {
        if(nums.length == copy.length) {
            for(int i = 0; i < nums.length; i++) {
                copy[i] = nums[i];
            }
        }
    }

    // copies element from s to e from nums to copy if it has exact size as much it needs
    public static void copyrange(int nums[], int copy[], int s, int e) {
        if(e - s + 1 == copy.length)
        for(int i = s; i <= e; i++) {
            copy[i - s] = nums[i];
        }
    }

    // copy array in reverse
    public static void reversecopy(int nums[], int copy[]) {
        int n = nums.length;
        if(n == copy.length) {
            for(int i = 0; i < n; i++) {
                copy[n - i - 1] = nums[i];
            }
        }
    }

    public static void merge(int num1[], int num2[], int nums[]) {
        for(int i = 0; i < num1.length; i++) {
            nums[i] = num1[i];
        }
        for(int i = 0; i < num2.length; i++) {
            nums[i + num1.length] = num2[i];
        }
    }

    // split with ind elements in num1 and others num2
    public static void split(int nums[], int ind, int num1[], int num2[]) {
        for(int i = 0; i < ind; i++) {
            num1[i] = nums[i];
        }
        for(int i = 0; i < num2.length; i++) {
            num2[i] = nums[i + ind];
        }
    }

    // concats the 2 arrays and returns an array
    public static int[] concat(int num1[], int num2[]) {
        int nums[] = new int[num1.length + num2.length];
        for(int i = 0; i < num1.length; i++) {
            nums[i] = num1[i];
        }
        for(int i = 0; i < num2.length; i++) {
            nums[num1.length + i] = num2[i];
        }
        return nums;
    }

    // returns true if arrays are equal else false
    public static boolean compare(int num1[], int num2[]) {
        if(num1.length == num2.length) {
            for(int i = 0; i < num1.length; i++) {
                if(num1[i] != num2[i]) {
                    return false;
                }
            }
        }
        return true;
    }

    // fills the complete array nums with element n
    public static void fill(int nums[], int n) {
        for(int i = 0; i < nums.length; i++) {
            nums[i] = n;
        }
    }

    // fills range of elments from s to e with n
    public static void fillrange(int nums[], int s, int e, int n) {
        for(int i = s; i <= e; i++) {
            nums[i] = n;
        }
    }

    public static void main(String[] args) {
        // Declaration
        int a[];
        // Memory Allocation
        int b[] = new int[5];

        // Initialization
        int c[] = {1, 2, 3, 4, 5}; // memory allocation along with initialization

         
        // Accessing array elements
        // System.out.println(c[1]); // 2 // indexing starts with 0

        // traversing array elements
        /*
        for(int i = 0; i < c.length; i++) {
            System.out.println(c[i] + " ");
        }
        */

        // Some array operations
        // search
        /*
        int nums[] = {1, 2, 3, 4, 5};
        int key = 2;
        
        int index = search(nums, key);

        if(index == -1) {
            System.out.println(key + " not found.");
        }
        else {
            System.out.println(key + " found at index " + index);
        }
        */

        // sort
        /*
        int nums[] = {4, 3, 5, 1, 2, 6};
        
        sort(nums);

        for(int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
        */

        // sortrange
        /*
        int nums[] = {3, 1, 2, 6, 4, 5};
        int s = 1, e = 4, n = nums.length;
        
        sortrange(nums, s, e);
        
        System.out.println("Array after sorting from index " + s + " to " + e + ": \n");
        for(int i = 0; i < n; i++) {
            System.out.print(nums[i] + " ");
        }
        */

        // insert
        /*
        int nums[] = {1, 2, 3, 4, 5, 6, 0};
        int ind = 2, ele = 7;

        insert(nums, ind, ele);

        System.out.println("After Insert: \n");
        printArr(nums);
        */

        // delete
        /* 
        int nums[] = {1, 2, 3, 4, 5, 6};
        int n = 5;

        delete(nums, n);

        System.out.println("After Deletion: \n");
        printArr(nums);
        */

        // reverse
        /*
        int nums[] = {1, 2, 3, 4, 5, 6};
        reverse(nums);
        System.out.println("After Reverse: \n");
        printArr(nums);
        */

        // copy
        /* 
        int nums[] = {1, 2, 3, 4, 5, 6};
        int n = nums.length;
        int copy[] = new int[n];

        copy(nums, copy);

        System.out.println("Copied Array: ");
        printArr(copy);
        */

        // copyrange
        /*
        int nums[] = {1, 2, 3, 4, 5, 6};
        int s = 4, e = 5;
        // e should be greater than or equal to s here
        int copy[] = new int[e - s + 1];

        copyrange(nums, copy, s, e);

        System.out.println("Copied elements are: ");
        printArr(copy);
        */

        // reverse copy
        /*
        int nums[] = {1, 2, 3, 4, 5, 6};
        int n = nums.length;
        int copy[] = new int[n];

        reversecopy(nums, copy);

        System.out.println("Copied Array: ");
        printArr(copy);
        */


        // merge
        /* 
        int num1[] = {1, 2, 3, 4, 5, 6};
        int num2[] = {1, 2, 3, 4, 5, 6};
        int nums[] = new int[num1.length + num2.length];
        
        merge(num1, num2, nums);

        System.out.println("Merged Array is: ");
        printArr(nums);
        */

        // split
        /* 
        int nums[] = {1, 2, 3, 4, 5, 6};
        int ind = 3;
        int num1[] = new int[ind];
        int num2[] = new int[nums.length - ind];

        split(nums, ind, num1, num2);

        System.out.println("\n Num1: ");
        printArr(num1);

        System.out.println("\n Num2: ");
        printArr(num2);
        */

        // concat
        /* 
        int num1[] = {1, 2, 3, 4};
        int num2[] = {5, 6, 7, 8};

        printArr(concat(num1, num2));
        */

        // compare
        /* 
        int num1[] = {1, 2, 3, 4};
        int num2[] = {1, 2, 3, 4};

        if(compare(num1, num2)) {
            System.out.println("Same Arrays.");
        }
        else {
            System.out.println("Arrays are not same.");
        }
        */

        // fill
        // fill range
        /* 
        int nums[] = {1, 2, 3, 4};
        fill(nums, 1);
        printArr(nums);

        fillrange(nums, 1, 2, 6);
        printArr(nums);
        */
        
    }
}
