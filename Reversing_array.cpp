int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; // declaring size;
    cin>>n;//taking size as input
    int arr[n]; //declaring array

//inserting elements in array
    for(int i=0;i<n;i++){
        cin>>arr[i];         
    }
//printing array in reverse order;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<+" ";
    }
    return 0;
