#include <iostream>

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2} ;
    int size = sizeof( arr )/sizeof(int) ;

//Solution 1
//Time Complexity: O(n^2) , Space Complexity: O(1) (here, but can be O(n) )
    int temp ;
    for (int i = 0 ; i<size-1 ; i++ )
    {
        for ( int j = i+1 ; j<size ; j++ )
        {
            if ( arr[i] > arr[j])
            {
                temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ; 
            }
        }
    }

    for ( int i=0 ; i<size ; i++ )
    {
        std :: cout << arr[i] << " ";
    }

std::cout << std::endl ;

//Solution 2
//Time Complexity: O(n) , Space Complexity: O(1)

    int count_0 = 0, count_1 = 0 , count_2 = 0 ; 

    for ( int i=0 ; i<size ; i++ )
    {
        if (arr[i] == 0)
            count_0 ++ ;
        if (arr[i] == 1)
            count_1 ++ ;
        if (arr[i] == 2)
            count_2 ++ ;
    }

    for ( int i=0 ; i<count_0 ; i++ )
        arr[i] = 0;
    for ( int i=count_0 ; i<count_1 ; i++ )
        arr[i] = 1;
    for ( int i=count_1 ; i<count_2 ; i++ )
        arr[i] = 2;

    for ( int i=0 ; i<size ; i++ )
        std::cout << arr[i] << " ";
        


}