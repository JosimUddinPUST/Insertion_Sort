#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,n,total=0,ch,tmp;
    vector<int> ary;
    cout<<"Enter array to insertion sort: ";
    while(cin>>n)
    {
        ary.push_back(n);
        if(getchar()=='\n')
        {
            break;
        }
        total++;
    }
    cout<<"Enter Your choose:"<<endl;
    cout<<"1. Ascending Sort."<<endl;
    cout<<"2. Descending Sort."<<endl;
    cout<<"3. Both."<<endl;
    cin>>ch;
    for(j=0; j<total; j++)
    {
        for(i=j; i>=0; i--)
        {
            if(ary[i]>ary[i+1])
            {
                tmp=ary[i+1];
                ary[i+1]=ary[i];
                ary[i]=tmp;
            }
        }
    }
    if(ch==1)
    {
        cout<<"The ascending sorted array is: ";
        for (auto it = ary.begin(); it<ary.end(); it++)
            cout << *it << " ";
    }
    else if(ch==2)
    {
        cout<<"The descending sorted array is: ";
        for (auto it = ary.end()-1; it>=ary.begin(); it--)
            cout << *it << " ";
    }
    else if(ch==3)
    {
        cout<<"The ascending sorted array is: ";
        for (auto it = ary.begin(); it<ary.end(); it++)
            cout << *it << " ";
        cout<<endl<<"The descending sorted array is: ";
        for (auto it = ary.end()-1; it>=ary.begin(); it--)
            cout << *it << " ";
    }
    else
        cout<<"Wrong input. Try again.";
    return 0;
}
