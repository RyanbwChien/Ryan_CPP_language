 #include<iostream>

 int arr[] = {3,6,9};

 int main(){
    int len = sizeof(arr) / sizeof(arr[0]);  // 正確取得元素數量
    for(int i=0;i<len;i++){
        std::cout<<arr[i]<<std::endl;
    }    


 }
