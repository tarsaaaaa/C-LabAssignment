int arr[10], sum = 0, prod = 1, max=0;
    float avg;
    printf("Enter 10 numbers\n");
    for (int  i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum+=arr[i];
        prod*=arr[i];

        if (i == 0 || arr[i] > max) {
            max=arr[i];
        }
    }
    avg = sum / 10;
    printf("Sum=%d\nProduct=%d\nAverage=%.2f\nMax=%d", sum, prod, avg, max);
    return 0;