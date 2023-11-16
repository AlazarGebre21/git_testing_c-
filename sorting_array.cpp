#include<iostream>
using namespace std;
const int max_size = 15;
void fill_array(int roll_no[],const int max_size, int& numbers_used);
void sort(int roll_no[], int numbers_used);
void swap(int& a, int& b);
int indexOfSmallest(int roll_no[],int start_index,int numbers_used);
int main()
{
    cout << "This program will order elemets in assending order " << endl;
    int roll_no[max_size],numbers_used;
    fill_array(roll_no,max_size,numbers_used);
    sort(roll_no,numbers_used);
    for(int index=0; index<numbers_used;++index)
    {
        cout << roll_no[index] << " ";
    }



}
void fill_array(int roll_no[],const int max_size, int& numbers_used)
{
    cout << "Filling the array " << endl;
    int index=0,next;
    cout << "Enter value " << endl;
    cin >> next;
    while((next>0)&&(index<max_size))
    {
        roll_no[index]=next;
        index++;
        cin >> next;


    }
    numbers_used = index;
}
void sort(int roll_no[], int numbers_used)
{
    int indexOfNextSmallest;
    for(int index=0; index<numbers_used;index++)
    {
        indexOfNextSmallest=indexOfSmallest(roll_no,index,numbers_used);
        swap(roll_no[index],roll_no[indexOfNextSmallest]);
    }
    
}
int indexOfSmallest(int roll_no[],int start_index,int numbers_used)
{
    int min = roll_no[start_index],index_of_min=start_index;
    for(int index=start_index+1; index < numbers_used; index++)
    {
        if(roll_no[index]<min)
        {
            min=roll_no[index];
            index_of_min=index;

        }
    }
    return index_of_min;
}
void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
}
