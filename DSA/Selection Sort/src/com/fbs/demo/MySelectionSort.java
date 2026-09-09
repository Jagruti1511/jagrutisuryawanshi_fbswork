package com.fbs.demo;

public class MySelectionSort {

    void selectionSort(int[] arr) {

        int size = arr.length;

        for (int i = 0; i < size - 1; i++) {

            int min = arr[i];
            int index = i;

            for (int j = i + 1; j < size; j++) {

                if (min > arr[j]) {
                    min = arr[j];
                    index = j;
                }
            }

            arr[index] = arr[i];
            arr[i] = min;
        }
    }
}