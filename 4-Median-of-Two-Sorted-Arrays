double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0, j = 0, x = 0;
    int total = nums1Size + nums2Size;
    int* nums3 = malloc(total * sizeof(int)); 

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) nums3[x++] = nums1[i++];
        else nums3[x++] = nums2[j++];
    }
    while (i < nums1Size) nums3[x++] = nums1[i++];
    while (j < nums2Size) nums3[x++] = nums2[j++];

    double median;
    if (total % 2 == 1) {
        median = nums3[total / 2];
    } else {
        median = (nums3[total / 2] + nums3[total / 2 - 1]) / 2.0; 
    }

    free(nums3); 
    return median;
}
