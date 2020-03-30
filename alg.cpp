int cbinsearch(int* arr, const int& size, const int& value);
int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 3 , 4 ,5 , 9 ,0};
    int num = cbinsearch(&arr[0], 10, 3);
    std::cout << num;
    return 0;
}
int cbinsearch(int* arr, const int& size, const int& value){
    int* lower = arr;
    int size1 = size;
    while(size1 > 0){
        int* it = lower;
        int step = size1 / 2;
        it += step;
        if(*it < value){
            lower = ++it;
            size1 -= step + 1;
        } else size1 = step;
    }
    int* upper = arr;
    int size2 = size;
    while (size2 > 0) {
        int* it = upper;
        int step = size2 / 2;
        it += step;
        if(!(value < *it)){
            upper = ++it;
            size2 -= step + 1;
        } else size2 = step;
    }
    int result = upper - lower;
    return result;
}
